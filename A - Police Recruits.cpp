#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
	
	int n,s1=0,s2=0;
	cin>>n;
	int v;
	
	for(int i = 0; i<n; i++){
		cin>>v;
		if(v>0){
			s1 = s1 + v;
		}else{
			if(s1<1){
				s2++;
			}else{
				s1--;
			}
		}
	}
	cout<<s2<<endl;
	return 0;
}
