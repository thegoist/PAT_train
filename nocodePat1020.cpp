//#include<bits/stdc++.h>
#include<cstdio>
#include<algorithm>
using namespace std;
int a[100005];
int main(){
	int n;
	long long p;
	int m;
	long long M;
	int flag = 0;
	int counter = 0;
	int temp = 0;
    scanf("%d%d", &n, &p);
    for(int i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }
	counter = 0;
	sort(a,a+n);
	
//	int i;	
	for(int j = 0; j < n; j++){
		int i = upper_bound(a+j+1, a+n, (long long)a[j]*p) - a;	
		counter = max(counter,i-j);
	}
	printf("%d\n",counter);	
	return 0;
} 
