#include<bits/stdc++.h>
using namespace std;
int main(){
	string str;
	getline(cin,str);
	map<char,int> str_mp;
	for(int i = 0; i < str.length() ; i++){
		if(str[i]<='Z'&&str[i]>='A'){
			str_mp[str[i]+32]++;
		}
		if(str[i]<='z'&&str[i]>='a'){
			str_mp[str[i]]++;
		}
	}
//	cout<<str_mp.begin()->first<<" "<<str_mp.begin()->second<<endl;
	int max_num = 0;
	char max_ch;
	for(map<char,int>::iterator it = str_mp.begin(); it != str_mp.end(); it++){
		if(it->second>max_num){
			max_ch = it->first;
			max_num = it->second;
		}
//		cout<< it->first<<" "<<it->second<<endl;	
	}
	cout<<max_ch<<" "<<max_num<<endl;
	return 0;
} 
