#include <bits/stdc++.h>
 
using namespace std;
 
void f(){
    
    long long a, b, c;
    cin >> a >> b >> c;
 	
	/*
	vector<int> v;
	v.push_back(a);
	v.push_back(b);
	v.push_back(c);
	sort(v.begin(),v.end());
	a = v[0];
	b = v[1];
	c = v[2];
	*/
    if(a > b) swap(a, b);
    if(b > c) swap(b, c);
    if(a > b) swap(a, b);
 
    if(a < c) a++;
    if(a < c) c--;
    if(b < a) b++;
    if(b > c) b--;
 
	cout<<abs(a-b)+abs(a-c)+abs(b-c)<<endl;
	
}
 
int main(){
    
	int t;
	cin>>t;
	while(t--){
		f();
	}
 
}
