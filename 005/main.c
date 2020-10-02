//+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-
//
// 实例005 3个数由小到大排序
//
//+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-

#include <stdio.h>
#include <stdlib.h>
#include "fyz-from-small-to-large.h"

int main(int argc, char *argv[]){
	
	if (4 != argc){ // 若输入不当
		printf("[error] enter 3 integers: %s 10 22 33", argv[0]);
		return 0;
	}

	// 从参数里面取值
	int a = atoi(argv[1]), b = atoi(argv[2]), c = atoi(argv[3]);

	fyz_from_small_to_large(&a, &b, &c); // 3个数排序

	printf("from small to large is %d %d %d\n", a, b, c);
	
	return 0;
}
