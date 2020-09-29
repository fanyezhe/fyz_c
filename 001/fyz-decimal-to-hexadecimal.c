//+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-
//
// fyz decimal to hexadecimal source file.
//
//+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-

#include "fyz-decimal-to-hexadecimal.h"

static void decimal_to_hexadecimal(int n, char *p[]){

	if (0 < n){ // �ݹ��ȴ洢ʮ�����Ƹ�λ
		decimal_to_hexadecimal(n >> 4, p);
		*(*p)++ = FYZ_HEXADECIMAL_STRING[0xF & n];	
	}
}

extern char* fyz_decimal_to_hexadecimal(int decimal, char buf[]){
	
	buf[0] = '0'; buf[1] = 'x'; // ����ʮ������ǰ׺

	if (0 < decimal){ // ��С��0ʱ�õݹ鴦��
		char *ptr = buf + 2;
		decimal_to_hexadecimal(decimal, &ptr);
		*ptr = '\0';

	} else if (0 > decimal){ // С��0ʱ��ѭ������
		char *p = buf + 2;
		for (int i = decimal, n = sizeof(decimal) * 8; 0 < n; ++p){
			*p = FYZ_HEXADECIMAL_STRING[0xF & (i >> (n -= 4))];
		}
		*p = '\0';

	}else{ // dacimal����0ʱ...
		buf[2] = '0', buf[3] = '\0';
	}
	
	return buf;
}
