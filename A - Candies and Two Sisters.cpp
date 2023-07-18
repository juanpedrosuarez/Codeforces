
#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
	
	double d;
	long long s,n;
	cin>>n;
	
    for (int i = 0; i<n; i++){
		cin>>d;
		s = ceil((d/2)-1);
		cout<<s<<endl;
	}
	return 0;
}
