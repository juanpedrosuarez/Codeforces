By papainoeldrugs, contest: Codeforces Round 744 (Div. 3), problem: (A) Casimir's String Solitaire, Accepted, #, Copy
#include <bits/stdc++.h>
 
using namespace std;
 
 
 
int main(){
	
	int n,a=0,b=0,c=0,z;
    cin >>n;
	string s;
    for(int i = 0; i<n; i++){
     	cin>>s;  
 
		for(int i = 0; i<s.size(); i++){
			if(s[i] == 'A'){
				a++;
			}else if(s[i] == 'B'){
				b++;
			}else{
				c++;
			}
		}
		
	 	if(b == a+c){
			cout<<"YES"<<endl;
			a=0;
			b=0;
			c=0;
			continue;
		}
		cout<<"NO"<<endl;
		a=0;
		b=0;
		c=0;
 
		
	}			
}
