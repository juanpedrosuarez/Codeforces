#include <iostream>
using namespace std;
 
int main(){
	int t; cin>>t;
	while(t--){
		int a, b, c, dog, cat; 
		a=b=c=dog=cat=0;
		cin>>a>>b>>c>>dog>>cat;
		
		if(a>dog){
			dog=0; 
		}else{
			dog-=a;
		}
 
		if(b>cat){
			cat=0; 
		}else{
			cat-=b;
		}
		
		if(c>=cat+dog){
			cout<<"YES"<<endl;
		}else{
			cout<<"NO"<<endl;
		}
	}
	return 0;
}
