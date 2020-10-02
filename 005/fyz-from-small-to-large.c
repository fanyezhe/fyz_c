//+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-
//
// fyz from small to large source file.
//
//+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-

#include "fyz-from-small-to-large.h"

extern void fyz_from_small_to_large(int *min, int *med, int *max){

	int swap; // �����ݴ�
	
	if (*min > *med){ // min��med��С
		swap = *min;
		*min = *med;
		*med = swap;
	}

	if (*min > *max){ // min��max��С
		swap = *min;
		*min = *max;
		*max = swap;
	}

	if (*med > *max){ // med��max��С
		swap = *med;
		*med = *max;
		*max = swap;
	}
}
