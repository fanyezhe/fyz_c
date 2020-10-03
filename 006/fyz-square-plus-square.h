//+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-
//
// fyz square plus square head file.
//
//+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-

#ifndef FYZ_SQUARE_PLUS_SQUARE_H
#define FYZ_SQUARE_PLUS_SQUARE_H

// 功能: 将(a)与(b)的运算结果存储(c)指向的内存
// 参数: (a)操作数
// 参数: (b)操作数
// 参数: (c)指向用于存储(a)与(b)运算结果的内存
// 返回: 成功0, 失败-1
extern int fyz_square_plus_square(int a, int b, int *c);

#endif // FYZ_SQUARE_PLUS_SQUARE_H
