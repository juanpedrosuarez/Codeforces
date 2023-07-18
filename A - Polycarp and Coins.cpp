#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
 
	int n,x;
	cin>>n;
	for(int i = 0;i<n; i++){
		cin>>x;
		long long c1=x/3;
		long long c2=x/3;
		if(x%3 == 1){
			c1++;
		}
		else if(x%3==2){
			c2++;
		}
		cout<<c1<<" "<<c2<<endl;
	}
 
}
