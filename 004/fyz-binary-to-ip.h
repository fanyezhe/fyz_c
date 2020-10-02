//+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-
//
// fyz binary to ip head file.
//
//+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-

#ifndef FYZ_BINARY_TO_IP_H
#define FYZ_BINARY_TO_IP_H

// 功能: 将二进制转换为ip字符串
// 参数: (str)二进制字符串
// 参数: (buf)用于存储转换后的ip字符串
// 返回: 成功0， 失败-1
extern int fyz_binary_to_ip(const char str[], char buf[]);

#endif // FYZ_BINARY_TO_IP_H
