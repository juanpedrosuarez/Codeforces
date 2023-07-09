#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	int n; cin >> n;
	vector<vector<pair<int, int>>> ns(2e5 + 5);
	for(int i = 0; i < n; i++){
		int val, cor;
		cin >> val >> cor;
		ns[cor].push_back({val, i});
		
	}
	vector<ll> tam(2e5 + 5);
	bool da = true;
	for(int i = 0; i < 2e5; i++){
		sort(ns[i].begin(), ns[i].end());
		tam[i]=ns[i].size();
	}
	for(int i = 0; i < 2e5; i++){
		for(int j = 0; j < tam[i] - 1; j++){
			if(ns[i][j].second > ns[i][j + 1].second){
				da = false;
				break;
			}
		}
	}
	if(da){
		cout << "YES";
	}else{
		cout << "NO";
	}
	return 0;
}
