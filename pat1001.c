#include <stdio.h>
int compare(long a,long b,long c);
int main(int argc, char const *argv[])
{
	long A,B,C;
	int T,out,i=1;
	
	scanf("%d",&T);
	while(i<=T){
		scanf("%ld%ld%ld",&A,&B,&C);
			


		out = compare(A,B,C);
		if(out == 1)
			printf("Case #%d: true\n",i );
		else{
			printf("Case #%d: false\n", i);
		}
		i++;
	}

	return 0;
}
int compare(long a,long b,long c){
	long long temp;
	temp = a+b ;
	if (temp > c)
	{
	return 1;
	}
	else {
		return 0;
	}
}
