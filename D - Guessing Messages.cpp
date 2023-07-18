#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
	
		string s, s2; cin >> s>> s2;
		int count =0, tam = s.size();
		for(int i = 0; i < tam; i++){
			if(s2[count] == s[i]) count++;
		}
		if(count == s2.size()){
			cout << "YES" << endl;
		}else cout << "NO" << endl;
			
	
	return 0;
}
