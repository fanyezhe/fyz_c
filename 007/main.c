//+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-
//
// 实例007 整倍数
//
// 编程要求: 编程判断输入的数是否既是5又是7的倍数, 如果是输出yes, 否则输出no.
//
//+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-

#include <stdio.h>
#include <stdlib.h>
#include "fyz-integer-multiple.h"

int main(int argc, char *argv[]){

	for (int n; NULL != *++argv; ){ // 循环处理输入的参数

		n = atoi(*argv); // 字符串转换为数值

		if (0 == fyz_integer_multiple(n)){ // 若是(n)整倍数
			printf("yes! %s is integer multiple.\n", *argv);

		}else { // 若(n)不是整倍数
			printf("no! %s not\'s integer multiple.\n", *argv);
		}
	}

	return 0;
}
