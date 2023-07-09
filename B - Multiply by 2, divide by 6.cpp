#include <iostream>
 
using namespace std;
 
int main(){
	
	int n,x,s,y;
	cin>>n;
	
	for(int i = 0; i<n; i++){
		s=0;
		cin>>x;
		while(x%6==0){
			x = x/6;
			s++;
		}
		while(x%3==0){
			x = x/3;
			s+=2;
		}
		if(x==1){ 
			cout<<s<<endl;	 
		}
		else cout<<-1<<endl;
		
	}
 
}
→Judgement Protocol
