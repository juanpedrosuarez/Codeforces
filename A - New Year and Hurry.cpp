#include <iostream>
 
using namespace std;
 
int main(){
	
	int n,k,s=0,c=0;
	cin>>n>>k;
	int t=240-k;
	
	
	for(int i = 1; i<=n; i++){
		s = s + 5*i;
		if(s>t){
			break;
		}
		c++;
	}
	cout<<c<<endl;
 
}
