//+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-
//
// ʵ��001 ʮ����ת��Ϊʮ������
//
//+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-

#include <stdio.h>
#include <stdlib.h>
#include "fyz-decimal-to-hexadecimal.h"

int main(int argc, char *argv[]){
	
	if (2 > argc){ //��δ����������˳�
		return 0;
	}
	
	char buf[32]; //���ڱ���ת�����ʮ�������ַ���

	//�������ʮ���Ʋ���ѭ��ת�������
	for (int i = 1, n; i < argc; ++i){
		n = atoi(argv[i]); //���ַ���ת��Ϊʮ����
		//ת�������ʮ�������ַ���
		printf("decimal %d to hexadecimal is " "%s"  ".\n", n, 
					fyz_decimal_to_hexadecimal(n, buf));				
	}

	return 0;
}
