#include "stdio.h"
#include "string.h"
#include "stdlib.h"
void mystrcpy(char *from,char *to)
{
	for(; *from!='\0'; from++,to++)
	{
		*to = *from;
	}
	*to = '\0';
}
void mystrcpy2(char *from,char *to)
{
	while((*to++ = *from++));
}

int main(int argc, const char *argv[])
{
	
	char a[] = "i am a student";
	char b[64];
	printf("b[%s]\n",a);
	// int i = 0 ;
	// for(i = 0;a[i]!='\0';i++)
	// {
	// 	b[i] = a[i];
	// 	printf("a:%c\n",a[i]);
	// 	printf("b:%c\n",b[i]);
	// }
	// b[i] = '\0';
	// printf("a:%s\n",a);
	// printf("b:%s\n",b);
	mystrcpy2(a,b);
	printf("b[%s]\n",a);
	return 0;
}
