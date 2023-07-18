#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
long long inf = 1e18;
long long soma(long long l, long long r, vector<long long> &ac){
	if(l-1>=0) return ac[r]-ac[l-1];
	else return ac[r];
 
}
 
long long multa(long long i, long long j, long long c,vector<long long> &v, vector<long long> &ac){
	
	return (v[j]*(j-i+1) - soma(i,j,ac))*c;
	
	
}
 
 
int main(){
 
	long long n, c, d;
	cin >> n>> d >>c;
	vector<long long> v(n);
	
	for(int i = 0; i<n; i++){
		cin >> v[i];
	}
	vector<long long> ac = v;
	for(int i = 1; i<n; i++){
		ac[i] += ac[i-1];
	}	
	vector<long long> dp(n + 10);
	for(int i=n-1;i>=0;i--){
		long long custo = inf;
		for(int j = i; j<n; j++){
			custo = min(custo,multa(i,j,c,v,ac)+dp[j+1]);
			
		}
		dp[i] = custo + d;
		
	}
	cout << dp[0]<<endl;	
}
