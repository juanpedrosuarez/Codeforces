#include <iostream>
 
 
using namespace std;
 
 
int main(){
 
	int n;
	cin >> n;
	
	
	for(int i = 0; i<n;i++){
		string s;
		cin>> s;
		if(s.size()>10){
			cout << s[0];
			cout << s.length()-2;
			cout << s[s.size()-1]<<endl;
			
		}else{
			cout << s<<endl;
		}
		
	}
	
	
}
