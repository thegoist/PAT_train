#include <stdio.h>
int main(int argc, char const *argv[])
{
	int A,A1Sum=0,A2Sum,A3Sum,A4Sum,A4Count,A5Sum,A2count;
	float A4Out;
	A1Sum =0;
	A2Sum = 0;
	A2count = 1;
	A3Sum=0;
	A4Count=0;
	A4Sum = 0;
	A5Sum=0;

	while(scanf("%d",&A) != 0){
		if (A%10==0)//A1
		{
			A1Sum += A;
		}
		if (A%5 == 1) //A2
		{
			if (A2count % 2==0)
			{
				A2Sum += -1*A;
			}
			else{
				A2Sum +=A;
			}
			A2count++;
		}
		if (A%5==2) //A3
		{
			A3Sum++;
		}
		if (A%5 == 3)//A4
		{
			A4Count++;
			A4Sum += A;

		}
		if (A%5 ==4 ) //A5
		{
			if (A>A5Sum)
			{
				A5Sum = A;
			}
		}

	}
	A4Out = A4Sum/A4Count;
	printf("%d %d %d %.1f %d\n",A1Sum,A2Sum,A3Sum,A4Out,A5Sum);
	return 0;
}


