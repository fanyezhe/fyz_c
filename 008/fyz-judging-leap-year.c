//+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-
//
// fyz judging leap year source file.
//
//+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-

#include "fyz-judging-leap-year.h"

extern int fyz_judging_leap_year(int year){
	
	// �ж�(year)�Ƿ�������
	return 0 == year % 400 || 0 == year % 4 && 0 != year % 100 ? 0 : -1;
}
