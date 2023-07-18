#include<bits/stdc++.h>
using namespace std;
int main(){
	int n, x, y; cin >> n >> x >> y;
	string num; cin >> num;
	string target = "1";
	for(int i = 0; i < y; i++){
		target += "0";	
	}
 
	reverse(num.begin(), num.end());
	reverse(target.begin(), target.end());
	while(target.size() < x){
		target += "0";
	}
	int resp = 0;
	for(int i = 0; i < target.size(); i++){
		if(num[i] != target[i]) resp++;	
	}
	cout << resp << endl;
	return 0;
}
