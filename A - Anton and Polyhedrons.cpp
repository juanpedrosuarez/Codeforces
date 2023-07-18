#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
	
	int n,c=0;
	cin>>n;
	string s;
	
    for (int i = 0; i<n; i++){
        cin>>s;
		if(s == "Icosahedron"){
			c = c + 20;
		}
		if(s == "Dodecahedron"){
			c = c + 12;
		}
		if(s == "Octahedron"){
			c = c + 8;
		}
		if(s == "Cube"){
			c = c + 6;
		}
		if(s == "Tetrahedron"){
			c = c + 4;
		}
	}
	cout<<c<<endl;
	
}
