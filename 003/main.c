//+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-
//
// ʵ��003 �κν���ת��Ϊʮ����
//
//+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-

#include <stdio.h>
#include <stdlib.h>
#include "fyz-any-base-to-decimal.h"

int main(int argc, char *argv[]){

	if (3 != argc){ // ������������������˳�
		printf("input error\n");
		return 0;
	}
	
	// decimal���ڴ洢ת�����ʮ������ֵ, base��ת�����Ƶ�˵��
	int decimal, base = atoi(argv[1]); 
	
	// ������������ת���ɹ�
	if (0 == fyz_any_base_to_decimal(base, argv[2], &decimal)){
		printf("[int: %d bit] %s base %s to decimal is %d.\n", 
					sizeof(int) * 8, argv[1], argv[2], decimal);

	} else{ // �������
		printf("input error\n");
	}

	return 0;
}
