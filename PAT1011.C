#include <stdio.h>
#include <stdlib.h>
int main(int argc, char const *argv[])
{
	char Num[1001] = {'0'};
	int a;
	//scanf("%s",&Num);
	a = sizeof(Num);
	printf("a = %d\n",a );
	printf("%s\n",Num);
	return 0;
}