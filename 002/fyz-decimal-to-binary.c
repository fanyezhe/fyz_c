//+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-
//
// fyz decimal to binary source file.
//
//+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-

#include "fyz-decimal-to-binary.h"

extern char* fyz_decimal_to_binary(int decimal, char buf[]){
	
	// i=计次, n=十进制数, s=二进制位数
	int i = 0, n = decimal, s = sizeof(decimal) * 8;

	while (0 < s--){ // 执行s次将n的二进制位从高位到底位写入buf
		buf[i++] = (0x1 & (n >> s)) + '0';
	}
	buf[i] = '\0'; // 紧接着添加字符串尾

	return buf;
}
