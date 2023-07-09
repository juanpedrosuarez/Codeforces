#include <bits/stdc++.h>
#define ll long long
#define len length
#define pb push_back
#define bn begin
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		string s;
		cin>>s;
		vector<char>v;
		for(int i=0; i<n; i++){
			if(s[i]!=s[i+1]){
				v.pb(s[i]);
			}
		}
		int cn=0;
		sort(v.bn(), v.end());
		for(int i=1; i<v.size(); i++){
			if(v[i]==v[i-1]){
				cn++;
			}
		}
		if(cn>=1){
			cout<<"NO\n";
		}
		else cout<<"YES\n";
	}
}
