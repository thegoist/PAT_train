#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;
int main(){
	int n,m;
	cin>>n>>m;
	int g2;
	
	for(int i = 0 ; i < n; i++){
		double g1 = 0.0;
		int temp = 0;
		int cnt = 0;
		int g1_arr[105] = {0};
		cin>>g2;
		
		int f = 0;
		for(int j = 0 ; j < n-1 ; j++){
			cin>>temp;
			if(temp<=m && temp>=0){
				g1_arr[f++] = temp;
			}
		}
		
		sort(g1_arr,g1_arr+f);
		for(int j = 1 ; j < f-1 ; j++){
			g1+=g1_arr[j];
		}
		g1 = (double)g1/(f-2);
		
		double ans = (g1+g2)/2;
		cout<<round(ans)<<endl;
	}
	return 0;
}
