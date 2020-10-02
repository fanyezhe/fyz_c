//+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-
//
// 实例004 二进制以IP形式输出
//
//+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-

#include <stdio.h>
#include "fyz-binary-to-ip.h"

int main(int argc, char *argv[]){

	if (1 > argc){ // 若未输入参数
		printf("please enter binary paeameters\n");
		return 0;
	}

	char buf[sizeof(int) * 8 + 4]; // 用于存储ip地址

	for (int i = 1; NULL != argv[i]; ++i){
		
		// 若转换成功则打印ip地址
		if (0 == fyz_binary_to_ip(argv[i], buf)){
			printf("binary %s to ip is [%s]\n", argv[i], buf);

		} else{
			printf("this binary %s input error\n", argv[i]);
		}
	}

	return 0;
}
