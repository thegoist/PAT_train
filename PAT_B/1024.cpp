#include <iostream>
#include <cstdio>
#include <vector>
#include <cstring>
#include <string>
using namespace std;
int main (){
	string line;
	cin>>line;
	string num;	
	for(int i = 1 ; i < line.length() ; i++){
		if(line[i] == 'E') break;
		if(line[i] != '.') num+=line[i];
	}
	int move = 0;
	int flag = 0;
	for(int i = 1 ; i < line.length() ; i++){
		if(line[i] == 'E'){
			flag = i+1;
//			continue;
			i++;
		} 
		if(flag && line[i]!='+' &&line[i]!='-'){
//			cout<<line[i]<<endl;
			move = move*10 + line[i] - '0';
		} 
	}
	
	if(line[flag] == '-'){
		for(int i = 0 ; i < move ; i++){
			num = '0'+num;
		}
		if(line[0] == '-') num = line[0]+num;
		for(int i = 0 ; i < num.length() ; i++){
			if(i == 1){
				cout<<'.';
			}
			cout<<num[i];
		}
		cout<<endl;
	}else{
		
	}
	
	
	return 0;
} 
