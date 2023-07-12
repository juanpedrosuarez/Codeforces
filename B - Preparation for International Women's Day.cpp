#include <bits/stdc++.h>
 
using namespace std;
 
void f(){
        int n,k;
        cin>>n>>k;
        int f[103],a[200003];;
        for(int i=1;i<=n;i++){
                cin>>a[i];
                f[a[i]%k]++;
        }
	int s=f[0]/2;
	for(int i=1;i<=k/2;i++){
		int u=k-i;
		if(i==u)s+=f[i]/2;
		else s+=min(f[i],f[u]);
	}
	cout<<s*2;
	return; 
        
}
 
int main(){
    
        ios_base::sync_with_stdio(false);cout.tie(NULL);
        cin.tie(NULL);
        f();
 
}
