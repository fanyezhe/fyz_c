//+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-
//
// fyz assessment results source file.
//
//+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-

#include "fyz-assessment-results.h"

extern char fyz_assessment_results(int n){

	// 返回分数评级
	return 'A' + (90 > n) + (80 > n) + (70 > n) + (60 > n);
}
