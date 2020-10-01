//+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-
//
// fyz any base to decimal source file.
//
//+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-

#include "fyz-any-base-to-decimal.h"

static int binary_to_decimal(const char s[], int *p){

	for (*p = 0; '\0' != *s; ++s){ // ��ʼ��*p, ѭ������s 

		if ('0' != *s && '1' != *s){ // �������
			return -1; // ʧ�ܷ���
		}
		
		*p <<= 0x1, *p += *s - '0'; // ������ת����ֵ
	}

	return 0; // �ɹ�����
}

static int octal_to_decimal(const char s[], int *p){

	for (*p = 0; '\0' != *s; ++s){ // ��ʼ��*p, ѭ������s
		
		if ('0' > *s || '7' < *s){ // ����������
			return -1; // ʧ�ܷ���
		}

		*p <<= 0x3, *p += *s - '0'; // �˽���ת����ֵ
	}

	return 0; // �ɹ�����
}

static int hexadecimal_to_decimal(const char s[], int *p){
	
	// ������ʮ������ǰ׺��sƫ��+2
	'0' == *s && ('X' == *(s + 1)  || 'x' == *(s + 1)) ? s += 2 : 0;

	for (*p = 0; '\0' != *s; ++s){ // ��ʼ��*p, ѭ������s
		
		// ����������
		if ('0' > *s || '9' < *s && 'A' > *s || 'F' < *s && 'a' > *s || 'f' < *s){
			return -1; // ʧ�ܷ���
		}

		// ʮ������ת����ֵ
		*p *= 0x10, *p += *s - ('A' > *s ? '0' : ('a' > *s ? 'A' : 'a') - 0xA);
	}
	
	return 0; // �ɹ�����
}

extern int fyz_any_base_to_decimal(int base, const char buf[], int *ptr){

	switch (base){ // ����ѡ��

		// ������ת��Ϊ��ֵ
		case 0x2:  return binary_to_decimal(buf, ptr);
				   break;
		// �˽���ת��Ϊ��ֵ
		case 0x8:  return octal_to_decimal(buf, ptr);
				   break;
		// ʮ������ת��Ϊ��ֵ
		case 0x10: return hexadecimal_to_decimal(buf, ptr);
				   break;
	}

	return -1; // ʧ�ܷ���
}
