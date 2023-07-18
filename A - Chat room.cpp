#include <iostream>
 
using namespace std;
 
int main(){
	
	string s,h="hello";
	cin>>s;
	int soma=0,j=0;
	
	for(int i = 0; i<s.size(); i++){
		if(s[i]== h[j]){
			j++;
			soma++;
		}
	}
	if(soma>=5){
		cout<<"YES"<<endl;
	}else{
		cout<<"NO"<<endl;
	}
	
}
