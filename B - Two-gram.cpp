#include <bits/stdc++.h>
#define pb push_back
 
using namespace std;
 
 
int main(){
    
        int n;
        cin>>n;
        string s;
        map<string,int> m;
        cin>>s;
 
        int resp = 0;
  		for (int i = 0; i < n-1; ++i)
  		{
        	string x;
  			x.pb(s[i]);
  			x.pb(s[i+1]);
  			m[x]++;
  		}
  		for(auto y : m)
  			resp = max(resp,y.second);
  		for(auto y : m)
  			if(y.second == resp) {
  				cout << y.first << endl;
  				return 0;
  			}
        return 0;  
 
}
