//+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-
//
// fyz any base to decimal head file.
//
//+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-

#ifndef FYZ_ANY_BASE_TO_DECIMAL_H
#define FYZ_ANY_BASE_TO_DECIMAL_H

// 功能: 任何进制转换为十进制
// 参数: (base)进制说明
// 参数: (buf)字符串形式的进制数值
// 参数: (decimal)存储将buf转换后的十进制数值
// 返回: 成功0, 失败-1
extern int fyz_any_base_to_decimal(int base, const char buf[], int *decimal);

#endif // FYZ_ANY_BASE_TO_DECIMAL_H
