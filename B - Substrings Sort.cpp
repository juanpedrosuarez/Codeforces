#include <bits/stdc++.h>
#define pb push_back
 
using namespace std;
 
 
bool cmp(string &a,string &b){
	return a.size()<b.size();
}
 
void f(){
 
	int n;
	cin>>n;
	vector<string>a(n);
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	sort(a.begin(),a.end(),cmp);
	int f=0;
	for(int i=0;i<n-1;i++){
		if(a[i+1].find(a[i])==-1)
			f=1;
	}
	if(f==1)
		cout<<"NO"<<endl;
	else{
		cout<<"YES"<<endl;
		for(string i:a)
			cout<<i<<endl;
	}
}
 
int main(){
    
	f();
 
}
