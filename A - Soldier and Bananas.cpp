#include <iostream>
 
using namespace std;
 
int main(){
	
	int cb1,nd,n,t,s=0;
	cin >> cb1>> nd >> n;
	
	for(int i = 0; i<n; i++){
		s = (i+1)*cb1+s;
	}
	if(nd>s){
		cout<<0<<endl;
	}else{
	s = s-nd;
	cout<<s<<endl;
	}
}
