//+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-
//
// fyz any base to decimal head file.
//
//+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-

#ifndef FYZ_ANY_BASE_TO_DECIMAL_H
#define FYZ_ANY_BASE_TO_DECIMAL_H

// ����: �κν���ת��Ϊʮ����
// ����: (base)����˵��
// ����: (buf)�ַ�����ʽ�Ľ�����ֵ
// ����: (decimal)�洢��bufת�����ʮ������ֵ
// ����: �ɹ�0, ʧ��-1
extern int fyz_any_base_to_decimal(int base, const char buf[], int *decimal);

#endif // FYZ_ANY_BASE_TO_DECIMAL_H
