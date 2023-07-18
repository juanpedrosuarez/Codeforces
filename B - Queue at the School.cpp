#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
	
	int n,t;
	string s;
    cin >>n>>t>>s;
    for(int i = 0; i < t; i++){
		for(int i = 1; i < n; i++){
			if(s[i] == 'G' and s[i-1] == 'B'){
				s[i] = 'B';
				s[i-1] = 'G';
				i++;
			}
		}
    }
	cout<<s<<endl;
}
