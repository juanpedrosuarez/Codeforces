#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
	
	int n,sc=0,sve=0;
	cin>>n;
	vector<int> c(n);
	vector<int> ve(n);
	for(int i = 0; i<n; i++){
		cin>>c[i];
	}
	for(int i = 0; i<n; i++){
		cin>>ve[i];
	}
	for(int i = 0; i<n; i++){
		sc +=c[i];
		sve +=ve[i];
	}
	if(sc-sve==0) cout<<"Sim"<<endl;
	else cout<<"Nao"<<endl;
 
}
