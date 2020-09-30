//+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-
//
// fyz decimal to binary head file.
//
//+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-

#ifndef FYZ_DECIMAL_TO_BINARY_H
#define FYZ_DECIMAL_TO_BINARY_H

// 功能: 将十进制转换位二进制
// 参数: (decimal)十进制数值
// 参数: (buf)存储二进制字符串的缓冲区
// 返回: 缓冲区地址buf
extern char* fyz_decimal_to_binary(int decimal, char buf[]);

#endif //FYZ_DECIMAL_TO_BINARY_H
