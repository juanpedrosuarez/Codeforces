#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
	
	int n,res=0,s=0;
	cin>>n;
	vector<int> v(n);
	for(int i = 0; i<n; i++){
		cin>>v[i];
		
	}
	sort(v.begin(),v.end());
 
	int vb=1;
	for(int i = 0;i<n; i++){
		if(v[i]>=vb){
			vb++;
		}
		
	}
	cout<<vb-1<<endl;
	
}
