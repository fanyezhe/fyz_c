//+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-
//
// fyz integer multiple source file.
//
//+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-

#include "fyz-integer-multiple.h"

extern int fyz_integer_multiple(int num){
	
	// 若(num)既是5又是7的整倍数返回0, 否则返回-1
	return 0 == num % 5 && 0 == num % 7 ? 0 : -1;
}
