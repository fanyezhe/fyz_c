//+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-
//
// fyz decimal to hexadecimal head file.
//
//+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-

#ifndef FYZ_DECIMAL_TO_HEXADECIMAL_H
#define FYZ_DECIMAL_TO_HEXADECIMAL_H

#define FYZ_HEXADECIMAL_STRING "0123456789" "ABCDEF"

// ���ܣ���ʮ����ת��Ϊʮ������
// ������(decimal)ʮ����
// ������(buf)���ڱ���ת�����ʮ�������ַ���
// ���أ�ʮ�������ַ���buf
extern char* fyz_decimal_to_hexadecimal(int decimal, char buf[]);

#endif // FYZ_DECIMAL_TO_HEXADECIMAL_H
