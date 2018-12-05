#include<bits/stdc++.h>
//volatile
using namespace std;
int main(){
	string d;
	int n;
	cin>>d>>n;
	int j;
	for(int cnt = 1 ; cnt < n ; cnt++){
		string t;
		for(int i = 0 ; i < d.size() ; i = j){
			for(j = i ; j<d.length()&&d[i]==d[j]; j++);
			t += to_string((d[i] - '0') * 10 + j - i);
		}
		d = t;
		
	}
	cout<<d<<endl;	
	return 0;
} 
