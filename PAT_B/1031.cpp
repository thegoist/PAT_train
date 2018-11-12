#include<bits/stdc++.h>
#include<vector>
using namespace std;
int add[17] = {7,9,10,5,8,4,2,1,6,3,7,9,10,5,8,4,2};
char che[11] = {'1','0','X','9','8','7','6','5','4','3','2'};
bool check(string s,char key){
	char temp;
	int sum = 0;
	for(int i = 0; i < s.length()-1; i++){
		if(s[i]<='9' && s[i]>='0'){
//			cout<<s[i]<<" "<<s[i]-'0'<<endl;
			sum+= (s[i]-'0')*add[i];
		}else{
			return false;
		}
	}
//	cout<<che[sum%11]<<"  "<<key<<endl;
	if((che[sum%11]) == key){
		return true;
	}else{
		return false;
	}
}
int main(){
	int n;
	string str;
	cin>>n;
	vector<string> v1;
	int cnt = 0;
	for(int i = 0; i < n; i++){
		cin>>str;
//		cout<<str[17]<<endl;
		if(check(str,str[17])){
			cnt++;
//			cout<<cnt<<endl;
		}else{
			v1.push_back(str);
		}
		
	}
	if(cnt == n){
		cout<<"All passed"<<endl;	
	}
	else{
		for(vector<string>::iterator it = v1.begin(); it!= v1.end(); it++){
			cout<<*it<<endl;
		}
	}
	return 0;
}
