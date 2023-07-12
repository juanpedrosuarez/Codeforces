#include <bits/stdc++.h>
 
using namespace std;
 
void f(){
    
	int n,l=0;;
	cin>>n;
	string s;
	cin>>s;
	for(int i = 0; i<n;i+=2){
		if(s[i]==s[i+1]){
			l++;
			if(s[i]=='a'){
				s[i+1] = 'b';
			}else{
				s[i+1] = 'a';
			}
		}
	}cout<<l<<endl<<s<<endl;
    
}
 
int main(){
    
     f();
 
}
