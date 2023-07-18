#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
 
    int n,m,c=1,p;
    cin>>n>>m;
	long long t=0;
    for(int i = 0; i<m; i++){    
        cin>>p;
		if(p >= c){
			t = t + p - c;
		}else{
			t = t + n - (c-p);
		}
		c = p;
    }
	cout<<t<<endl;
}
