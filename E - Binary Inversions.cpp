#include <bits/stdc++.h>
 
using namespace std;
 
 
long long s(int v[], int  n) {
	long long ones = 0, total=0;
	for (int i = 0; i < n; i++) {
		if (v[i] == 0)
			total += ones;
		if (v[i] == 1)
			ones++;
 
	}
	return total;
}
 
void f(){
	
    int n,resp;
    cin>>n;
    int v[n];
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
		long long total = 0;
		total = s(v, n);
 
		for (int i = n - 1; i >= 0; i--) {
			if (v[i] == 1) {
				v[i] = 0;
				total = max(s(v, n),total);
				v[i] = 1;
				break;
			}
		}
 
		for (int i = 0; i <= n; i++) {
			if (v[i] == 0) {
				v[i] = 1;
				total = max(s(v, n), total);
				v[i] = 0;
				break;
			}
		}
		cout<<total<<endl;
	}
 
 
int main(){
	
	int t;
	cin>>t;
	while(t--){
		f();
	}
}
