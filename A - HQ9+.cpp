#include <iostream>
using namespace std;
 
int main() {
	string s;
	cin>>s;
	int soma=0;
	for(int i=0;i<s.size();i++){
	    if(s[i]>=33 and s[i]<=126){
	        if(s[i]== 'H' or s[i]=='Q' or s[i]=='9'){
	            soma=1;
            }
    	}
	}
	if(soma==1){
	    cout<<"YES";
	}else{
	    cout<<"NO";
	}
	return 0;
}
