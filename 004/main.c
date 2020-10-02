//+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-
//
// ʵ��004 ��������IP��ʽ���
//
//+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-

#include <stdio.h>
#include "fyz-binary-to-ip.h"

int main(int argc, char *argv[]){

	if (1 > argc){ // ��δ�������
		printf("please enter binary paeameters\n");
		return 0;
	}

	char buf[sizeof(int) * 8 + 4]; // ���ڴ洢ip��ַ

	for (int i = 1; NULL != argv[i]; ++i){
		
		// ��ת���ɹ����ӡip��ַ
		if (0 == fyz_binary_to_ip(argv[i], buf)){
			printf("binary %s to ip is [%s]\n", argv[i], buf);

		} else{
			printf("this binary %s input error\n", argv[i]);
		}
	}

	return 0;
}
