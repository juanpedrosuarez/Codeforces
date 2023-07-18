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
		int n; cin >> n >> sleep.F >> sleep.S;
		vector<pair<int, int>> alarmes(n);
		for(auto &a : alarmes){ 
			cin >> a.F >> a.S;
		}
		sort(alarmes.begin(), alarmes.end());
		bool check = false;
		for(int i = 0; i < n; i++){
			if(alarmes[i].F > sleep.F or (alarmes[i].F == sleep.F and alarmes[i].S >= sleep.S)){
				acorda = alarmes[i];
				check = true;
				break;
			}
		}
		if(!check) acorda = alarmes[0];
		
		acorda.F -= sleep.F;
		if(acorda.F < 0) acorda.F += 24;
		acorda.S -= sleep.S;
		if(acorda.S < 0){
			acorda.S += 60;
			if(acorda.F == 0) acorda.F = 23;
			else acorda.F -= 1;
		}
		cout << acorda.F << " " << acorda.S << endl;
		
	}
	  
}
