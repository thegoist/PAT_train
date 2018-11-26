#include<bits/stdc++.h>
using namespace std;
int main(){
	int sum = 0;
	string str;
	getline(cin,str);
	char temp;
	for(int i = 0 ; i < str.size() ; i++){
		if(str[i]<='z' && str[i]>='a') sum += str[i] - 'a'+1;
		if(str[i]<='Z' && str[i]>='A') sum += str[i] - 'A'+1;
	}
//	cout<<sum<<endl;
	int cnt1 = 0, cnt0 = 0;
	while(sum>0){
		if(sum%2 == 0 ) cnt0++;
		else cnt1++;
		sum = sum/2;
	}
	cout<<cnt0<<" "<<cnt1<<endl;
	return 0;
} 
