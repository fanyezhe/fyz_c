//+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-
//
// 实例009 阶梯问题:
//
//     在你面前有一条长长的阶梯, 如果你每步跨2阶, 那么最后剩1阶; 如果你每步跨3阶, 
// 那么最后剩2阶; 如果你每步跨5阶, 那么最后剩4阶; 如果你每步跨6阶, 那么最后剩5阶; 
// 只有当你每步跨7阶时, 最后才正好走完, 一阶也不剩. 请问这条阶梯至少有多少阶?(求
// 所有三位阶梯数)
//
//+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-

#include <stdio.h>
#include <stdlib.h>
#include "fyz-ladder-problem.h"

int main(int argc, char *argv[]){

	for (int i = 0, j; NULL != *++argv; ){ // 循环处理输入参数

		printf("the number of stairs starts from %s.\n", *argv);

		j = atoi(*argv); // 字符串转换为数值

		if (i = fyz_ladder_problem(i, j)) { // 若符合阶梯数

			// 打印第一次符合的阶梯数
			printf("the number of the stairs is %d.\n", i);

			// 查找并打印所有符合的阶梯数
			while (i = fyz_ladder_problem(i + 1, j)) {
				printf("the number of the stairs is %d.\n", i);
			}

		}else { // 否则不符号阶梯数
			printf("the number of stairs %d does not meet the requirements.\n", j);
		}

		putchar('\n');
	}

	return 0;
}
