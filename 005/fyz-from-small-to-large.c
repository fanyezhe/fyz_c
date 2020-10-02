//+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-
//
// fyz from small to large source file.
//
//+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-

#include "fyz-from-small-to-large.h"

extern void fyz_from_small_to_large(int *min, int *med, int *max){

	int swap; // 交换暂存
	
	if (*min > *med){ // min与med争小
		swap = *min;
		*min = *med;
		*med = swap;
	}

	if (*min > *max){ // min与max争小
		swap = *min;
		*min = *max;
		*max = swap;
	}

	if (*med > *max){ // med与max争小
		swap = *med;
		*med = *max;
		*max = swap;
	}
}
