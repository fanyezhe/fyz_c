//+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-
//
// ʵ��009 ��������:
//
//     ������ǰ��һ�������Ľ���, �����ÿ����2��, ��ô���ʣ1��; �����ÿ����3��, 
// ��ô���ʣ2��; �����ÿ����5��, ��ô���ʣ4��; �����ÿ����6��, ��ô���ʣ5��; 
// ֻ�е���ÿ����7��ʱ, ������������, һ��Ҳ��ʣ. �����������������ж��ٽ�?(��
// ������λ������)
//
//+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-

#include <stdio.h>
#include <stdlib.h>
#include "fyz-ladder-problem.h"

int main(int argc, char *argv[]){

	for (int i = 0, j; NULL != *++argv; ){ // ѭ�������������

		printf("the number of stairs starts from %s.\n", *argv);

		j = atoi(*argv); // �ַ���ת��Ϊ��ֵ

		if (i = fyz_ladder_problem(i, j)) { // �����Ͻ�����

			// ��ӡ��һ�η��ϵĽ�����
			printf("the number of the stairs is %d.\n", i);

			// ���Ҳ���ӡ���з��ϵĽ�����
			while (i = fyz_ladder_problem(i + 1, j)) {
				printf("the number of the stairs is %d.\n", i);
			}

		}else { // ���򲻷��Ž�����
			printf("the number of stairs %d does not meet the requirements.\n", j);
		}

		putchar('\n');
	}

	return 0;
}
