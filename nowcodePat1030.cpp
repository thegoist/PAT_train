#include<bits/stdc++.h>
using namespace std;

int main(){
	char c; int p=0, pa=0, pat=0;
   	while(scanf("%c", &c) && c!=' ' && c!='\n') {
        if(c == 'P') {
            p++;
        } else if(c == 'A') {
            pa += p;
            pa = pa%1000000007;
        } else {
            pat += pa;
            pat = pat%1000000007;
        }
    }
    printf("%d\n", pat);
	
	return 0;
} 
