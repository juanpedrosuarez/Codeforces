#include <iostream>
 
using namespace std;
 
int main(){
	
	int n,s=0;
	string p;
	cin>>n;
	
	for(int i = 0; i<n;i++){
		cin>>p;
		if(p == "++X" or p == "X++"){
			s++;
		}if(p == "--X" or p == "X--"){
			s--;
		}
	}
	cout<<s<<endl;
}
