#include<iostream>
#include<cstdio>
#include<string>
using namespace std;
//理解错误，较大的数就不对了 
bool check(int n){
//	cout<<"test\n";
	int n1 = 0;
	int n2 = n;
	while(n != 0){
		n1 = n1*10 + n%10;
		n = n/10;
	}
	if(n2 == n1){
//		cout<<n1<<" "<<n<<endl;
		return true;
	}else{
		return false;
	}
}
long long  to_int(string str){
	int n = 0;
	for(int i = str.length() - 1; i >= 0 ;  i--){
		n = n*10 + str[i] - '0';
	}
	return n;
}
int main(){
	string num ;
	string num2;
	int cnt = 0;
	cin>>num;
//	check(25552);
	while(cnt<10){
		long long  n1 = to_int(num);
		for(int i = num.length()-1 ;  i >= 0 ; i--){
			num2 += num[i];
		}
		long long n2 = to_int(num2);
		cout<<n1<<" + "<<n2<<" = "<<n2+n1<<endl; 
		if(check(n2+n1)){
			cout<<n2+n1<<" is a palindromic number."<<endl;
			break;
		}
		
//		cout<<"???"<<n2+n1<<endl;
		num = to_string(n2+n1);
		num2.clear();
		cnt++;
	}
	if(cnt == 10) cout<<"Not found in 10 iterations."<<endl;
	return 0;
} 
