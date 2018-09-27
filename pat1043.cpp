#include <iostream>
#include <string>
using namespace std;

int main(int argc, char const *argv[])
{
	int P,A,T,e,s,t;
	P = A = T = e = s = t = 0;
	string input;
	cin >> input;

	for (int i = 0; i < input.size(); i++)
	{
		switch(input[i]){
			case 'P': P++ ; break;
			case 'A': A++ ; break;
			case 'T': T++ ; break;
			case 'e': e++ ; break;
			case 's': s++ ; break;
			case 't': t++ ; break;
		}
	}
	while ( P || A || T || e || s || t){
		if (P>0){
			cout << 'P' , P--;
		}
		if (A>0){
			cout << 'A' , A--;
		}
		if (T>0){
			cout << 'T' , T--;
		}
		if (e>0){
			cout << 'e' , e--;
		}
		if (s>0){
			cout << 's' , s--;
		}
		if (t>0){
			cout << 't' , t--;
		}
	}

	return 0;
}