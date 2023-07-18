#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
	
	int n;
	cin>>n;
	int v;
	double s=0.0,z=0.0;
	for(int i = 0; i<n; i++){
		cin>>v;
		s = v + s;
	}
	z = s/n;
	cout<<fixed<<setprecision(12)<<z<<endl;
		
}
