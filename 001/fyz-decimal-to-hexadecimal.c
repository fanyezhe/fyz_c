//+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-
//
// fyz decimal to hexadecimal source file.
//
//+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-

#include "fyz-decimal-to-hexadecimal.h"

static void decimal_to_hexadecimal(int n, char *p[]){

	if (0 < n){ // 递归先存储十六进制高位
		decimal_to_hexadecimal(n >> 4, p);
		*(*p)++ = FYZ_HEXADECIMAL_STRING[0xF & n];	
	}
}

extern char* fyz_decimal_to_hexadecimal(int decimal, char buf[]){
	
	buf[0] = '0'; buf[1] = 'x'; // 设置十六进制前缀

	if (0 < decimal){ // 不小于0时用递归处理
		char *ptr = buf + 2;
		decimal_to_hexadecimal(decimal, &ptr);
		*ptr = '\0';

	} else if (0 > decimal){ // 小于0时用循环处理
		char *p = buf + 2;
		for (int i = decimal, n = sizeof(decimal) * 8; 0 < n; ++p){
			*p = FYZ_HEXADECIMAL_STRING[0xF & (i >> (n -= 4))];
		}
		*p = '\0';

	}else{ // dacimal等于0时...
		buf[2] = '0', buf[3] = '\0';
	}
	
	return buf;
}
