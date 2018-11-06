#include<bits/stdc++.h>
using namespace std;
int isprime(int x){
	float temp;
	if(x<=1) return 0;
	temp = sqrt((double)x);
	for(int i = 2 ; i <= temp; i++){
		if(x%i == 0){
			return 0;
		}
	}
	return 1;
}
int main(){
	int n1;
	cin>>n1;
	map<string,int> id,mark;
	string temp;
	for(int i = 1; i <= n1; i++){
		cin>>temp;
		id[temp] = i;
		mark[temp] = 0;
	}
	int n2;
	cin>>n2;
	string que;
	for(int i = 1; i <= n2; i++){
		cin>>que;
		if(id.count(que)==0){
			cout<<que<<": Are you kidding?"<<endl;
		}else{
			if(mark[que]==0){
				mark[que] = 1;
				if(id[que] == 1){
					cout<<que<<": Mystery Award"<<endl;
				}else if(isprime(id[que])){
					cout<<que<<": Minion"<<endl;
				}else{
					cout<<que<<": Chocolate"<<endl;
				}
			}else{
				cout<<que<<": Checked"<<endl;
			}
		}
	}
	return 0;
} 

