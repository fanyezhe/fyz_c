//+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-
//
// 实例002 十进制转换为二进制
//
//+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-

#include <stdio.h>
#include <stdlib.h>
#include "fyz-decimal-to-binary.h"

int main(int argc, char *argv[]){

	if (2 > argc){ //若未输入参数则退出
		return 0;
	}

	char buf[sizeof(int) * 8 + 1]; // 存储转换后的二进制字符串

	for (int i = 1, n; i < argc; ++i){ // 循环处理输入的参数
		
		n = atoi(argv[i]); // 将十进制字符串转换为十进制数值

		// 转换并打印转换后的二进制字符串
		printf("decimal %d to binary is %s.\n", n, fyz_decimal_to_binary(n, buf));
	}

	return 0;
}
