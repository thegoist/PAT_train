#include<bits/stdc++.h>
//#include<iostream>
//#include<string>
using namespace std;

int main(){
	int n;
	int counter = 0;
	string start1 = "1814/09/06";
	string end1 = "2014/09/06";
	string name,birth;
	string maxName = " ",minName = " ";
	string maxBirth ="1814/09/06" ,minBirth = "2014/09/06";
	cin>>n;
	for(int i = 0; i < n; i++){
		cin>>name>>birth;
		if((birth>=start1) && (birth<=end1)){
			
			counter++;
			if(maxBirth < birth){
				maxBirth = birth;
				maxName = name;
			}
			if(minBirth > birth){
				minBirth = birth;
				minName = name;
			}
		}
	}
	/*
找到问题所在！当所以数据都不在范围内的时候需要特判一下
*/
	if(counter == 0){
		cout<<counter<<endl;
		
	}else{
		cout<<counter<<" "<<minName<<" "<<maxName<<endl;
	}
	return 0;
} 
