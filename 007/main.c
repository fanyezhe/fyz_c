//+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-
//
// ʵ��007 ������
//
// ���Ҫ��: ����ж���������Ƿ����5����7�ı���, ��������yes, �������no.
//
//+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-

#include <stdio.h>
#include <stdlib.h>
#include "fyz-integer-multiple.h"

int main(int argc, char *argv[]){

	for (int n; NULL != *++argv; ){ // ѭ����������Ĳ���

		n = atoi(*argv); // �ַ���ת��Ϊ��ֵ

		if (0 == fyz_integer_multiple(n)){ // ����(n)������
			printf("yes! %s is integer multiple.\n", *argv);

		}else { // ��(n)����������
			printf("no! %s not\'s integer multiple.\n", *argv);
		}
	}

	return 0;
}
