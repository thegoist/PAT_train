#include<iostream>
#include<cstdio>
#include<string>
using namespace std;
string mar1[12] = {"jan", "feb", "mar", "apr", "may", "jun", "jly", "aug", "sep", "oct", "nov", "dec"};
string mar2[12] ={"tam", "hel", "maa", "huh", "tou", "kes", "hei", "elo", "syy", "lok", "mer", "jou"};
bool judge(string s){
//	cout<<s[0]<<endl;
	if(s[0]<='9' && s[0]>='0') return true;
	else return false;
}
void m2e(string str){
//	cout<<str.size()<<" "<<str<<"??"<<endl;
	if(str.size() == 3){
		for(int i = 0 ; i < 13 ; i++){
			if(mar2[i] == str){
				cout<<(i+1)*13<<endl;
				break;
			}
		}
	}else{
		string a,b;
		a = str.substr(0,3); //ʮλ 
		b = str.substr(4,3);
//		cout<<a<<" ?? "<<b<<endl;
		int e1 = 0,e2 = 0;
		for(int i = 0; i < 13;i++){
			if(mar2[i] == a) {
				e1 = i+1;
				break;	
			}
		}
		for(int i = 0; i < 13;i++){
			if(mar1[i] == b){
				e2 = i+1;
				break;
			}
		}
		int e;
		e = e1*13 + e2;
		cout<<e<<endl;
	}	
}
void e2m(string str){
	int e = 0;
	for(int i = 0 ; i < str.size() ; i++){
		e = e*10 + str[i]-'0';
//		cout<<i<<" "<<str[i]<<endl;
	}
//	cout<<e<<endl;
	int a,b;
	b = e%13;
	a = (e - b) / 13;
//	cout<<"a: "<<a<<" b: "<<b<<endl;
	a = a-1;
	b = b-1;
	if(a > 0) cout<<mar2[a]<<" "<<mar1[b]<<endl;
	else cout<<mar1[b]<<endl;
}
int main(){
	int n;
	cin>>n;
	
//	getline(cin,temp);
	getchar();
	for(int i = 0 ; i < n ; i++){
		string temp;
		getline(cin,temp);
//		cout<<temp<<endl;
//		getchar();
		if(judge(temp)){
//			cout<<temp<<" in\n";
			e2m(temp);
		}
		else m2e(temp);
	}
	return 0;
} 
