#include <iostream>
 
using namespace std;
 
int main(){
 
	int x,s=0;
	cin >> x;
	
	while(x){
		if(x==1 or x == 2 or x == 3 or x ==4 or x == 5){
			s = s + 1;
			cout<<s<<endl;
			return 0;
		}
		x = x - 5;
		s++;
	}
	
	
}
