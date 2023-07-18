
#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
 
	int n,a,b,c;
	cin>>n;
	for(int i = 0; i<n; i++){	
		cin>>a>>b>>c;
		int x = abs(b-c) + abs(c-1);
		int y = abs(a-1);
		if(x>y) cout<<1<<endl;
		else if(x<y) cout<<2<<endl;
		else cout<<3<<endl;
	}	
}
