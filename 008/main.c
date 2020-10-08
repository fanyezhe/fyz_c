//+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-
//
// 实例008 判断闰年
//
//+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-

#include <stdio.h>
#include <stdlib.h>
#include "fyz-judging-leap-year.h"

int main(int argc, char *argv[]){

	for (int n; NULL != *++argv; ){ // 循环处理输入的参数

		n = atoi(*argv); // 字符串转换为数值

		if (0 == fyz_judging_leap_year(n)){ // 若(n)是闰年
			printf("%s年是闰年!\n", *argv);

		}else { // 则(n)是平年
			printf("%s年是平年!\n", *argv);
		}

	}

	return 0;
}
