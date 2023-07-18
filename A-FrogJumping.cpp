#include <bits/stdc++.h>
 
using namespace std;
 
void f(){
	
	long long a,b,c;
	cin>>a>>b>>c;
	if (c%2==0) {
		cout << a * (c / 2) - b * (c / 2)<<endl;
	}
	else{
		cout << a * (c / 2 + 1) - b * (c / 2)<<endl;
	}
}
 
int main(){
	
	int t;
	cin>>t;
	while(t--){
		f();
	}
	
}
