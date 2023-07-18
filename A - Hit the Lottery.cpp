
#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
 
	int n,s=0;
	int v[]={100,20,10,5,1};
	cin>>n;
 
	for(int i = 0; i<5; i++){
		s = s + n/v[i];
		n = n%v[i];
	}
	cout<<s<<endl;
}
