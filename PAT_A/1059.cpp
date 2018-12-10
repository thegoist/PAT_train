#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;
int a[10000];
bool is_prime(int n){
	if(n < 2) return false;
	for(int i = 2 ; i < sqrt(n) ; i++ ){
		if(n % i == 0) return false;
	}
	return true;
}
int main(){
	int k = 0;
	for(int i = 2 ; i <= 100100 ; i++){
		if(is_prime(i)){
			a[k++] = i;
		}
	}
	int num,b[99999];
	cin>>num;
	k = 0;
	for(int i = 0 ; num > 1 ; i++){
		if(num % a[i] == 0 && num>1){
			b[k++] = 0;
			num = num / a[i];
		}
	}
	return 0;
} 
