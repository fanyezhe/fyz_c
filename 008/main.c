//+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-
//
// ʵ��008 �ж�����
//
//+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-

#include <stdio.h>
#include <stdlib.h>
#include "fyz-judging-leap-year.h"

int main(int argc, char *argv[]){

	for (int n; NULL != *++argv; ){ // ѭ����������Ĳ���

		n = atoi(*argv); // �ַ���ת��Ϊ��ֵ

		if (0 == fyz_judging_leap_year(n)){ // ��(n)������
			printf("%s��������!\n", *argv);

		}else { // ��(n)��ƽ��
			printf("%s����ƽ��!\n", *argv);
		}

	}

	return 0;
}
