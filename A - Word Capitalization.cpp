#include <iostream>
#include <string>
using namespace std;
 
int main(){
	
	string s;
	getline(cin,s);
	
	if(s[0]>96 and s[0]<123){
		s[0] = s[0] -32;
	}
	for(int i = 0; i<s.size(); i++){
		if(s[i]==' '){
			s[i+1] = toupper(s[i+1]);
		}
	
	}
	
	cout<<s<<endl;
}
