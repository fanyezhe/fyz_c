//+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-
//
// ʵ��010 �����ɼ�: ��̶�����ķ�������, �������ڵ���90ΪA, 80 - 89ΪB, 70 - 79
//         ΪC, 60 - 69ΪD, 60������ΪE.
//
//+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-

#include <stdio.h>
#include <stdlib.h>
#include "fyz-assessment-results.h"

int main(int argc, char *argv[]){

	for (int n; NULL != *++argv; ){ // ѭ����������ķ���

		n = atoi(*argv); // �ַ���ת��Ϊ��ֵ

		// ��ӡ��������
		printf("%c score of %s points.\n", fyz_assessment_results(n), *argv);
	}

	return 0;
}
