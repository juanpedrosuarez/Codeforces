#include <iostream>
 
using namespace std;
 
int main(){
	
	int n,x,s=0;
	cin>>n;
	for(int i = 0;i<n; i++){
		cin>>x;
		s = x/2;
		if(x%2==1){
		s++;
		}
		cout<<s<<endl;
	}
 
}
