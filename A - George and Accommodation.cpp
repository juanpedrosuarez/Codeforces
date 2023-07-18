#include <iostream>
 
using namespace std;
 
int main(){
	
	int n,pi,qi,s=0;
	cin>>n;
	
	for(int i = 0; i<n; i++){
		cin>>pi>>qi;
		if(pi+2<=qi){
			s++;
		}
	}
	cout<<s<<endl;
 
}
