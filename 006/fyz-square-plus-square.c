//+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-
//
// fyz square plus square source file.
//
//+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-

#include "fyz-square-plus-square.h"

extern int fyz_square_plus_square(int a, int b, int *c){
	
	// 将(a)的平方+(b)的平方的值存储于(*c)且若值大于100, 返回0,
	// 否则将(a)+(b)的值存储与(*c), 返回-1.
	return 100 < (*c = a * a + b * b) ? 0 : (*c = a + b, -1);
}
