//+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-
//
// fyz decimal to binary source file.
//
//+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-

#include "fyz-decimal-to-binary.h"

extern char* fyz_decimal_to_binary(int decimal, char buf[]){
	
	// i=�ƴ�, n=ʮ������, s=������λ��
	int i = 0, n = decimal, s = sizeof(decimal) * 8;

	while (0 < s--){ // ִ��s�ν�n�Ķ�����λ�Ӹ�λ����λд��buf
		buf[i++] = (0x1 & (n >> s)) + '0';
	}
	buf[i] = '\0'; // ����������ַ���β

	return buf;
}
