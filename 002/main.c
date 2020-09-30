//+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-
//
// ʵ��002 ʮ����ת��Ϊ������
//
//+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-

#include <stdio.h>
#include <stdlib.h>
#include "fyz-decimal-to-binary.h"

int main(int argc, char *argv[]){

	if (2 > argc){ //��δ����������˳�
		return 0;
	}

	char buf[sizeof(int) * 8 + 1]; // �洢ת����Ķ������ַ���

	for (int i = 1, n; i < argc; ++i){ // ѭ����������Ĳ���
		
		n = atoi(argv[i]); // ��ʮ�����ַ���ת��Ϊʮ������ֵ

		// ת������ӡת����Ķ������ַ���
		printf("decimal %d to binary is %s.\n", n, fyz_decimal_to_binary(n, buf));
	}

	return 0;
}
