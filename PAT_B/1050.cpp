#include<iostream>
#include<algorithm>
#include<vector>
#include<cmath>
#include<cstring>
//https://blog.csdn.net/sinat_40872274/article/details/81275003
using namespace std;
vector<int> nums;
int n,m;
int N;
int out[1005][1005];
bool cmp(int x,int y){
	return x>y;
}
int func(int N) {
    int i = sqrt((double)N);
    while(i >= 1) {
        if(N % i == 0)
            return i;
        i--;
    }
    return 1;
}

void in_arr(){

	int t = 0;
	int level = m / 2 + m % 2;
	for (int i = 0; i < level; i++) {
        for (int j = i; j <= n - 1 - i && t <= N - 1; j++) {
            out[i][j] = nums[t++];
        }
        for (int j = i + 1; j <= m - 2 - i && t <= N - 1; j++) {
            out[j][n - 1 - i] = nums[t++];
        }
        for (int j = n - i - 1; j >= i && t <= N - 1; j--) {
            out[m - 1 - i][j] = nums[t++];
        }
        for (int j = m - 2 - i; j >= i + 1 && t <= N - 1; j--) {
            out[j][i] = nums[t++];
        }
    }
}
int main(){

	cin>>N;

	n = func(N);
    m = N / n;

	int temp ;
	for(int i = 0 ; i < N; i++){
		cin>>temp;
		nums.push_back(temp);
	}
	sort(nums.begin(),nums.end(),cmp);
	memset(out,0,sizeof(out));
	
	in_arr();
	
	for(int i = 1; i <= m; i++){
		for(int j = 1; j <= n; j++){
			printf("%02d",out[i][j]);
			if(j != n)
				printf(" ");
		}
		printf("\n");	
	}

	return 0;
} 
