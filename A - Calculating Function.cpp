#include <iostream>
#include <cmath>
using namespace std;
 
int main(){
	
	long long n,s=0;
	cin>>n;
	
	if(n%2 == 0){
		s = n/2;	
	}else{
		s = ((n+1)/2*-1);
	}
	cout<<s<<endl;
 
}
