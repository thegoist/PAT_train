#include<iostream>
#include<cctype>

using namespace std;
int main(){
	string bad,input;
	getline(cin,bad);
	getline(cin,input);
	int length = input.length();
	for(int i = 0; i < length; i++){
		if(bad.find(toupper(input[i])) != string::npos ) continue;
		if((isupper(input[i])) && bad.find('+')!=string::npos) continue;
		cout<<input[i];
	}
	return 0;
}
