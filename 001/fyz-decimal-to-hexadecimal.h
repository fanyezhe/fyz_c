//+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-
//
// fyz decimal to hexadecimal head file.
//
//+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-

#ifndef FYZ_DECIMAL_TO_HEXADECIMAL_H
#define FYZ_DECIMAL_TO_HEXADECIMAL_H

#define FYZ_HEXADECIMAL_STRING "0123456789" "ABCDEF"

// 功能：将十进制转换为十六进制
// 参数：(decimal)十进制
// 参数：(buf)用于保持转换后的十六进制字符串
// 返回：十六进制字符串buf
extern char* fyz_decimal_to_hexadecimal(int decimal, char buf[]);

#endif // FYZ_DECIMAL_TO_HEXADECIMAL_H
