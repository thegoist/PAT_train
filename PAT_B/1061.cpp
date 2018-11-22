#include<iostream>
#include<vector>
using namespace std;
int main(){
	int n,m;
	cin>>n>>m;
	vector<int> score(m);
	vector<int> ans(m);
	for(int i = 0; i < m ; i++) cin>>score[i];
	for(int i = 0; i < m ; i++) cin>>ans[i];
	for(int i = 0; i < n ; i++){
		int sum = 0;
		int temp = 0;
		for(int j = 0 ; j < m; j++){
			cin>>temp;
			if(ans[j] == temp) sum+=score[j];
			else sum+=0;
		}
		cout<<sum<<endl;
	}	
	return 0;
} 
