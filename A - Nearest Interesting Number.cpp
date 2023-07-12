#include <bits/stdc++.h>
 
using namespace std;
 
int soma(int n){
	
	int s=0;
	while(n>0){
		s += n%10;
		n /= 10;
	}
	return s;
	
}
 
int main(){
	
	int n;
	cin>>n;
	while(soma(n)%4 != 0){
		n++;
	}
	cout<<n<<endl;
}
