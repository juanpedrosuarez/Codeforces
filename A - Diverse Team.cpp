#include <bits/stdc++.h>
 
using namespace std;
 
void f(){
   	int n, k;
	cin >> n >> k;
	set<int> s;
	vector<int> v;
	for (int i = 0; i < n; ++i){
		int x;
		cin >> x;
		if(!s.count(x)){
			v.push_back(i);
			s.insert(x);
		}
	}
 
	if(int(v.size())<k){
		cout<<"NO"<<endl;
	}else{
		cout<<"YES"<<endl;
		for (int i = 0; i < k; ++i){
			cout<<v[i]+1<<" ";
		}
		cout<<endl;
	}
	
}
 
int main(){
	
	f();
	
}
