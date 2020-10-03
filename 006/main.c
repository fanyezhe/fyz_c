//+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-
//
// ʵ��006 ���Ҫ��: ��������a��b, ��a��ƽ��+b��ƽ������100, �����a��ƽ��+b��ƽ��
// 	   ��ֵ, �����a+b�Ľ��.
//
//+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-

#include <stdio.h>
#include <stdlib.h>
#include "fyz-square-plus-square.h"

int main(int argc, char *argv[]){
	
	// ѭ����������Ĳ���
	for (int a, b, c; NULL != argv[1] && NULL != argv[2]; argv += 2){
		
		// ת��Ϊ��ֵ, ÿ�δ�����������
		a = atoi(argv[1]), b = atoi(argv[2]);
		
		// ���ɹ�, �����(a)��ƽ��+(b)��ƽ��
		if (0 == fyz_square_plus_square(a, b, &c)){
			printf("%d * %d + %d * %d = %d\n", a, a, b, b, c);

		}else { // ��ʧ��, �����(a)+(b)
			printf("%d + %d = %d\n", a, b, c);
		}
	}

	return 0;
}
