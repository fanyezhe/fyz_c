//+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-
//
// ʵ��005 3������С��������
//
//+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-

#include <stdio.h>
#include <stdlib.h>
#include "fyz-from-small-to-large.h"

int main(int argc, char *argv[]){
	
	if (4 != argc){ // �����벻��
		printf("[error] enter 3 integers: %s 10 22 33", argv[0]);
		return 0;
	}

	// �Ӳ�������ȡֵ
	int a = atoi(argv[1]), b = atoi(argv[2]), c = atoi(argv[3]);

	fyz_from_small_to_large(&a, &b, &c); // 3��������

	printf("from small to large is %d %d %d\n", a, b, c);
	
	return 0;
}
