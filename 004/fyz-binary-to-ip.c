//+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-
//
// fyz binary to ip source file.
//
//+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-

#include "fyz-binary-to-ip.h"

static int fyz_strlen(const char s[], int *p){
	
	// 计数字符串s的长度
	for (*p = 0; '\0' != s[*p]; ++*p){
		// 检测参数是否非法
		if ('0' > s[*p] || '1' < s[*p]){
			return -1; // 非法返回
		}
	}

	return 0; // 正确返回
}

static char* fyz_decimal_to_string(int n, char *s){
	
	char *t = s; // s=作为字符串开始
	
	do { // 将数值转换字符串形式do刚好将0计算在内
		
		*s++ = n % 10 + '0';
		n /= 10;

	} while (0 < n);

	char *ret = s--; // 用于返回的字符串尾
	
	for (char c; t < s; ++t, --s){ // 逆转字符串
		c = *t; *t = *s; *s = c;
	}

	return ret; // 返回字符串尾
}

extern int fyz_binary_to_ip(const char str[], char buf[]){

	int k, h = 0, n = h; // k=字符串长度, h=计次4, n=数值

	if (0 != fyz_strlen(str, &k) || 32 < k){ // 检测字符串且取字符串长度
		return -1;
	}

	char *p = buf; // p=有效缩短命名长度

	for (int i = (32 - k) / 8; 0 < i; --i){ // 不足的地方先填充
		*p++ = '0'; *p++ = '.';
		++h;
	}
	
	const char *t = str; // t=循环里缩短命名

	for (int i = 0, s = 1; 0 < k; ){ // 处理字符串str

		n += s * (t[--k] - '0'); // 数值计数

		if (8 == ++i){ // 若计满8个位
			p = fyz_decimal_to_string(n, p); // 数值转换为字符串

			if (3 > h){ // 若还可以加上点
				*p++ = '.';
			}

			i = n = 0, s = 1, ++h; // 初始化归零
			continue; // s不得增加
		}

		s <<= 0x1; // s*=2
	}

	if (4 > h){ // 若还有末余
		p = fyz_decimal_to_string(n, p); // 数值转化
	}
	*p = '\0'; // 并加上字符串尾

	return 0;
}
