//+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-
//
// 实例003 任何进制转换为十进制
//
//+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-

#include <stdio.h>
#include <stdlib.h>
#include "fyz-any-base-to-decimal.h"

int main(int argc, char *argv[]){

	if (3 != argc){ // 输入参数数量不对则退出
		printf("input error\n");
		return 0;
	}
	
	// decimal用于存储转换后的十进制数值, base欲转换进制的说明
	int decimal, base = atoi(argv[1]); 
	
	// 若输入无误则转换成功
	if (0 == fyz_any_base_to_decimal(base, argv[2], &decimal)){
		printf("[int: %d bit] %s base %s to decimal is %d.\n", 
					sizeof(int) * 8, argv[1], argv[2], decimal);

	} else{ // 输入错误
		printf("input error\n");
	}

	return 0;
}
