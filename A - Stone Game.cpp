#include <bits/stdc++.h>
 
using namespace std;
 
 
void f(){
	int n,imin,imax;
	cin>>n;
	vector<int> v(n);
	int maximo = 0, minimo = 1e4;
	for(int i = 0; i<n; i++){
		cin>>v[i];
		if(maximo<v[i]){
			maximo = v[i];
			imax = i;
		}
		if(minimo>v[i]){
			minimo = v[i];
			imin = i;
		}
	}
	cout << min(min(max(imax, imin)+1, n-min(imax, imin)), min(n-imax+imin+1, n+imax-imin+1)) << endl;
}
 
int main(){
  int t;
  cin >> t;
 
  while(t--){
    f();
  }
}
