//+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-
//
// 实例010 评定成绩: 编程对输入的分数评级, 分数大于等于90为A, 80 - 89为B, 70 - 79
//         为C, 60 - 69为D, 60分以下为E.
//
//+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-

#include <stdio.h>
#include <stdlib.h>
#include "fyz-assessment-results.h"

int main(int argc, char *argv[]){

	for (int n; NULL != *++argv; ){ // 循环处理输入的分数

		n = atoi(*argv); // 字符串转换为数值

		// 打印分数评级
		printf("%c score of %s points.\n", fyz_assessment_results(n), *argv);
	}

	return 0;
}
