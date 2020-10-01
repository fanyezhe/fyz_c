//+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-
//
// fyz any base to decimal source file.
//
//+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-

#include "fyz-any-base-to-decimal.h"

static int binary_to_decimal(const char s[], int *p){

	for (*p = 0; '\0' != *s; ++s){ // 初始化*p, 循环处理s 

		if ('0' != *s && '1' != *s){ // 参数检测
			return -1; // 失败返回
		}
		
		*p <<= 0x1, *p += *s - '0'; // 二进制转换数值
	}

	return 0; // 成功返回
}

static int octal_to_decimal(const char s[], int *p){

	for (*p = 0; '\0' != *s; ++s){ // 初始化*p, 循环处理s
		
		if ('0' > *s || '7' < *s){ // 若参数有误
			return -1; // 失败返回
		}

		*p <<= 0x3, *p += *s - '0'; // 八进制转换数值
	}

	return 0; // 成功返回
}

static int hexadecimal_to_decimal(const char s[], int *p){
	
	// 若带了十六进制前缀则s偏移+2
	'0' == *s && ('X' == *(s + 1)  || 'x' == *(s + 1)) ? s += 2 : 0;

	for (*p = 0; '\0' != *s; ++s){ // 初始化*p, 循环处理s
		
		// 若参数有误
		if ('0' > *s || '9' < *s && 'A' > *s || 'F' < *s && 'a' > *s || 'f' < *s){
			return -1; // 失败返回
		}

		// 十六进制转换数值
		*p *= 0x10, *p += *s - ('A' > *s ? '0' : ('a' > *s ? 'A' : 'a') - 0xA);
	}
	
	return 0; // 成功返回
}

extern int fyz_any_base_to_decimal(int base, const char buf[], int *ptr){

	switch (base){ // 进制选项

		// 二进制转换为数值
		case 0x2:  return binary_to_decimal(buf, ptr);
				   break;
		// 八进制转换为数值
		case 0x8:  return octal_to_decimal(buf, ptr);
				   break;
		// 十六进制转换为数值
		case 0x10: return hexadecimal_to_decimal(buf, ptr);
				   break;
	}

	return -1; // 失败返回
}
