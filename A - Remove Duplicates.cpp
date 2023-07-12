#include <bits/stdc++.h>
 
using namespace std;
 
void f(){
    
 
	int n,a;
	cin>>n;
	set<int> s;
	vector<int> v1(n);
	for(int i = 0; i<n; i++){
		cin>>v1[i];
	}
	vector<int> v2;
	reverse(v1.begin(),v1.end());
	for(int i = 0; i<n; i++){
		if(s.find(v1[i])==s.end()){
			s.insert(v1[i]);
			v2.push_back(v1[i]);
		}
	}
	reverse(v2.begin(),v2.end());
	cout<<v2.size()<<endl;
	for(auto& i: v2){
		cout<<i<<" ";
	}
	
}
 
int main(){
    
	f();
 
}
