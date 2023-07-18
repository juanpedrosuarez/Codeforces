#include <iostream>
 
using namespace std;
 
int main(){
	
	int n1=0,n2=0;
	string s;
	getline(cin,s);
	
	for(int i = 0; i<s.size(); i++){
		if(s[i] > 64 and s[i]<91){
			n1++;
		}
		if(s[i] > 96 and s[i]<123){
			n2++;		
	}
}
	for(int i = 0; i<s.size(); i++){
		if(n1 <= n2 and s[i] > 64 and s[i]<91){
			s[i] = s[i] + 32;
		}
		if(n1 > n2 and s[i] > 96 and s[i]<123){
			s[i] = s[i] - 32;
		}
	}
	cout<<s<<endl;
}
