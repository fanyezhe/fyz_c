//+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-
//
// fyz assessment results source file.
//
//+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-

#include "fyz-assessment-results.h"

extern char fyz_assessment_results(int n){

	/* ��֪˭��

	if (60 > n){
		return 'E';

	}else if (70 > n){
		return 'D';

	}else if (80 > n){
		return 'C';

	}else if (90 > n){
		return 'B';

	}else {
		return 'A';
	}

	*/

	// ���ط�������
	return 'A' + (90 > n) + (80 > n) + (70 > n) + (60 > n);
}
