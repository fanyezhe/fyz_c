//+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-
//
// 实例001 十进制转换为十六进制
//
//+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-

#include <stdio.h>
#include <stdlib.h>
#include "fyz-decimal-to-hexadecimal.h"

int main(int argc, char *argv[]){
	
	if (2 > argc){ //若未输入参数则退出
		return 0;
	}
	
	char buf[32]; //用于保持转换后的十六进制字符串

	//将输入的十进制参数循环转换并输出
	for (int i = 1, n; i < argc; ++i){
		n = atoi(argv[i]); //将字符串转换为十进制
		//转换并输出十六进制字符串
		printf("decimal %d to hexadecimal is " "%s"  ".\n", n, 
					fyz_decimal_to_hexadecimal(n, buf));				
	}

	return 0;
}
