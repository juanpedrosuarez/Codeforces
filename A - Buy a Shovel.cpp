#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
 
	int k, r,h, s=0;
	cin>>k>>r;
	bool b = true;
	while(b){
		s++;
		h = k*s;
		if(h%10 == 0 or h %10 == r){
			b = false;
		}
			
	}
	cout<<s<<endl;
}
→Judgeme
