//+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-
//
// 实例006 编程要求: 输入整数a和b, 若a的平方+b的平方大于100, 则输出a的平方+b的平方
// 	   的值, 若输出a+b的结果.
//
//+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-

#include <stdio.h>
#include <stdlib.h>
#include "fyz-square-plus-square.h"

int main(int argc, char *argv[]){
	
	// 循环处理输入的参数
	for (int a, b, c; NULL != argv[1] && NULL != argv[2]; argv += 2){
		
		// 转换为数值, 每次处理两个参数
		a = atoi(argv[1]), b = atoi(argv[2]);
		
		// 若成功, 则输出(a)的平方+(b)的平方
		if (0 == fyz_square_plus_square(a, b, &c)){
			printf("%d * %d + %d * %d = %d\n", a, a, b, b, c);

		}else { // 若失败, 则输出(a)+(b)
			printf("%d + %d = %d\n", a, b, c);
		}
	}

	return 0;
}
