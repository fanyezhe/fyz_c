//+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-
//
// fyz ladder problem source file.
//
//+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-

#include "fyz-ladder-problem.h"

extern int fyz_ladder_problem(int begin, int end){

	for (int i = begin, j = end; i < j; ++i){ // ѭ�����Ҳ����ط��ϵĽ�����
		
		if (1 == i % 2 && 2 == i % 3 && 4 == i % 5 && 5 == i % 6 && 0 == i % 7){
			return i;
		}

	}

	return 0;
}
