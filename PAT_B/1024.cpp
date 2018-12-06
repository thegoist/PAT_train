#include <iostream>
#include <cstdio>
#include <vector>
#include <cstring>
#include <string>
using namespace std;
int main (){
	string line;
	cin>>line;
//	line = "-1.2E+10"; 
	string num;
	if(line[0] == '-') cout<<'-';
	
	int pos = 0;
	while(line[pos] != 'E') pos++;
	
	int exp = 0;
	for(int i = pos+2 ; i < line.length(); i++){
		exp = exp*10 + line[i] - '0'; 
	} 
//	cout<<exp<<endl;
	if(exp == 0){
		for(int i = 1 ; i < pos ; i++){
			cout<<line[i];
		}
	}
	
	if(line[pos+1] == '-'){
		cout<<"0.";
		for(int i = 0 ; i < exp-1 ; i++){
			cout<<'0';
		}
		cout<<line[1];
		for(int i = 3 ; i < pos ; i++){
			cout<<line[i];
		}
	}else{               //指数为正的情况 
//		1.2334E+2
//		123.34
		for(int i = 1; i < pos ; i++){
			if(line[i] == '.') continue;
			cout<<line[i];
			if(i == exp+2 && pos-3 != exp) cout<<'.';
			
		}
		for(int i = 0 ; i < exp - pos + 3 ; i++){
				cout<<'0';
			}
	}
	
	
	
	return 0;
} 
