#include<iostream>
#include<map>
#include<string>
using namespace std;
string mar1[13] = {"tret","jan", "feb", "mar", "apr", "may", "jun", "jly", "aug", "sep", "oct", "nov", "dec"};
string mar2[13] ={"tret","tam", "hel", "maa", "huh", "tou", "kes", "hei", "elo", "syy", "lok", "mer", "jou"};
map<string,int> str2num;
string num2str[170];
void init(){
	for(int i = 0 ; i < 13 ; i++){
		num2str[i] = mar1[i];
		str2num[mar1[i]] = i; 
		num2str[i*13] = mar2[i];
		str2num[mar2[i]] = i*13;
	}
	for(int i = 1 ; i < 13 ; i++){
		for(int j = 1 ; j < 13 ; j++){
			string str = mar2[i]+" "+mar1[j];
			num2str[i*13 + j] = str;
			str2num[str] = i*13 + j;
		}
	}
}
int main(){
	int n;
//	cin>>n;
	init();
	scanf("%d%*c",&n);
	string temp;
//	getchar();
	for(int i = 0 ; i < n; i++){
		getline(cin,temp);
		if(temp[0]>='0' && temp[0]<='9'){
			int num = 0;
			for(int j = 0 ; j < temp.length() ; j++){
				num = num*10+(temp[j] - '0');
			}
			cout<<num2str[num]<<endl;
		}else{
			
//			cout<<temp<<endl;
			cout<<str2num[temp]<<endl;
		}
	}
	return 0;
}
