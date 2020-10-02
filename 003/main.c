//+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-
//
// ʵ��003 �κν���ת��Ϊʮ����
//
//+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-

#include <stdio.h>
#include <stdlib.h>
#include "fyz-any-base-to-decimal.h"

int main(int argc, char *argv[]){

	if (2 > argc){ // ������������������˳�
		printf("input error\n");
		return 0;
	}
	
	// decimal���ڴ洢ת�����ʮ������ֵ, base��ת�����Ƶ�˵��
	int decimal, base = atoi(argv[1]); 
	
	for (int i = 2; NULL != argv[i]; ++i){
		// ������������ת���ɹ�
		if (0 == fyz_any_base_to_decimal(base, argv[i], &decimal)){
			printf("[int: %d bit] %s base %s to decimal is %d.\n", 
						sizeof(int) * 8, argv[1], argv[i], decimal);

		} else{ // �������
			printf("this %s is input error\n", argv[i]);
		}
	}
	return 0;
}
