#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	int a_g,a_s,a_k;
	int p_g,p_s,p_k;
	int a,p;
	int out = 0;

	scanf("%d.%d.%d %d.%d.%d",&a_g,&a_s,&a_k,&p_g,&p_s,&p_k);
	p = p_g*17*29+p_s*29+p_k;
	a = a_g*17*29+a_s*29+a_k;
	out = p - a;
	if (out>0)
	{
		cout<<out/(17*29)<<'.'<<out/29%17<<'.'<<out%29<<endl;

	}else if (out==0)
	{
		cout<<0<<'.'<<0<<'.'<<0<<endl;
	}else if (out<0)
	{
		out = -out;
		cout<<'-'<<out/(17*29)<<'.'<<out/29%17<<'.'<<out%29<<endl;
	}
	return 0;
}