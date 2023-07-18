#include <iostream>
 
using namespace std;
 
int main(){
	
	int j;
	string s;
	cin>>s;
	
	for(int i = 0; i<s.size();i++){
		if(s[i]==s[i+1]){
			j++;
			if(j == 7){
				cout<<"YES"<<endl;
				return 0;
			}
		}else{
			j=1;
		}
	}
	cout<<"NO"<<endl;
	return 0;
	
}
