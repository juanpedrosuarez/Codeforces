#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
	
	string s,p;
	cin >> s;
	
	for(int i = 0; i<s.size();i++){
		if(s[i] != 'a' and s[i] != 'o' and s[i] != 'y' and s[i] != 'e' and s[i] != 'u' and s[i] != 'i' and s[i] != 'A' and s[i] != 'O' and s[i] != 'Y' and s[i] != 'E' and s[i] != 'U' and s[i] != 'I' ){
			p = p+'.';
			p = p + (char) tolower(s[i]);
		}
	}cout<<p;
	return 0;
	
}
