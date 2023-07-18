#include <bits/stdc++.h>
 
using namespace std;
 
typedef long long          ll;
typedef vector<int>        vi;
typedef vector<vi> 		matriz;
typedef vector<bool>       vb;
typedef pair<int, int>     ii;
 
#define mp make_pair
#define F first
#define S second
 
 
int main() {
	ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
	int t; cin >> t;
 
	while(t--){
		ii sleep, acorda;
		int n; cin >> n;
		vi cont(n+1, 0), poly;
		int count = 0, atual;
		for(int i = 0; i < n; i++){
			cin >> atual;
			poly.push_back(atual);
			cont[atual]++;
			if(cont[atual]>1) count++;
		}
		int aux = 0;
		while(count>0){
			if(cont[poly[aux]] > 1) count--;
			cont[poly[aux]]--;
			aux++;
		}
		cout << aux << endl;
	}
	  
}
