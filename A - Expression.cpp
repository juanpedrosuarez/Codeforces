
#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
 
	int a,b,c;
	cin>>a>>b>>c;
	
	int s1,s2,s3,s4,s5,s6;
	
	s1 = a*b*c;
	s2 = a*(b+c);
	s3 = (a+b)*c;
	s4 = a+b+c;
	s5 = a+b*c;
	s6 = a*b+c;
	int v[6] = {s1,s2,s3,s4,s5,s6};
	sort(v,v+6);
	cout<<v[5];
}
