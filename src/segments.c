#pragma target(project)

#pragma data_seg(Data)
#pragma code_seg(Code)

#include "f1.h"

int main(int argc, char** argv) {
	char const *MEM = (char *) 0x8000;
	int v0 = f1(argc);
	int v1 = f1(1);
	int v2 = f1(2);
	int v3 = f1(10);
	
	*MEM       = (char) v1;
	*(MEM + 1) = (char) v2;
	*(MEM + 2) = (char) v3;
	*(MEM + 9) = (char) v0;
	return 0;
}

//#pragma code_seg(Code2)
//int f1(int a) {
	//return a + 1;
//}
