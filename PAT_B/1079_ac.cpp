#include<iostream>
#include<algorithm>
using namespace std;
string add(string s1 , string s2){
	int carry = 0 ;
	string s = s1; 
	for(int i = s1.length()-1 ; i >= 0 ; i--){
		s[i] = (s1[i] - '0' + s2[i] - '0' + carry)%10 + '0';
		carry = (s1[i] - '0' + s2[i] - '0' + carry)/10;
	}
	if(carry > 0) s = "1"+s;
	return s;
}
string rev(string s){
	reverse(s.begin() , s.end());
	return s;
}
int main(){
	string s ,sum;
	int cnt = 0;
	cin>>s;
	if (s == rev(s)) {
        cout << s << " is a palindromic number.\n";
        return 0;
    }
	while(cnt<10){
		sum = add(s, rev(s));
        cout << s << " + " << rev(s) << " = " << sum << endl;
        if (sum == rev(sum)) {
            cout << sum << " is a palindromic number.\n";
            return 0;
        }
        s = sum;
        cnt++;
	}
	cout << "Not found in 10 iterations."<<endl;
	return 0;
}
