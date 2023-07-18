#include <iostream>
#include <vector>
using namespace std;
 
int main(){
 
	int n,d;
	cin>> n;
	
	for(int i = 0; i<n; i++){
		cin >>d;
		if(d == 1){
			cout<<"HARD"<<endl;
			return 0;
		}
		
	}
	cout<<"EASY"<<endl;
	
}
