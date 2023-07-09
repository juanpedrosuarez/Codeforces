#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
	long long n,a,b,c,sa,sb,sc;
	cin>>n;
	for(int i = 0; i<n; i++){
		cin>>a>>b>>c;
		sa = max(a,max(b,c)+1)-a;
		sb = max(b,max(a,c)+1)-b;
		sc = max(c,max(a,b)+1)-c;
		cout<<sa<<' '<<sb<<' '<<sc<<endl;
	}
}
