//+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-
//
// fyz binary to ip source file.
//
//+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-

#include "fyz-binary-to-ip.h"

static int fyz_strlen(const char s[], int *p){
	
	// �����ַ���s�ĳ���
	for (*p = 0; '\0' != s[*p]; ++*p){
		// �������Ƿ�Ƿ�
		if ('0' > s[*p] || '1' < s[*p]){
			return -1; // �Ƿ�����
		}
	}

	return 0; // ��ȷ����
}

static char* fyz_decimal_to_string(int n, char *s){
	
	char *t = s; // s=��Ϊ�ַ�����ʼ
	
	do { // ����ֵת���ַ�����ʽdo�պý�0��������
		
		*s++ = n % 10 + '0';
		n /= 10;

	} while (0 < n);

	char *ret = s--; // ���ڷ��ص��ַ���β
	
	for (char c; t < s; ++t, --s){ // ��ת�ַ���
		c = *t; *t = *s; *s = c;
	}

	return ret; // �����ַ���β
}

extern int fyz_binary_to_ip(const char str[], char buf[]){

	int k, h = 0, n = h; // k=�ַ�������, h=�ƴ�4, n=��ֵ

	if (0 != fyz_strlen(str, &k) || 32 < k){ // ����ַ�����ȡ�ַ�������
		return -1;
	}

	char *p = buf; // p=��Ч������������

	for (int i = (32 - k) / 8; 0 < i; --i){ // ����ĵط������
		*p++ = '0'; *p++ = '.';
		++h;
	}
	
	const char *t = str; // t=ѭ������������

	for (int i = 0, s = 1; 0 < k; ){ // �����ַ���str

		n += s * (t[--k] - '0'); // ��ֵ����

		if (8 == ++i){ // ������8��λ
			p = fyz_decimal_to_string(n, p); // ��ֵת��Ϊ�ַ���

			if (3 > h){ // �������Լ��ϵ�
				*p++ = '.';
			}

			i = n = 0, s = 1, ++h; // ��ʼ������
			continue; // s��������
		}

		s <<= 0x1; // s*=2
	}

	if (4 > h){ // ������ĩ��
		p = fyz_decimal_to_string(n, p); // ��ֵת��
	}
	*p = '\0'; // �������ַ���β

	return 0;
}
