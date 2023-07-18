#include <iostream>
#include<vector>
#include<algorithm>
 
using namespace std;
 
 
int main(){
	int q; cin>> q;
	while(q--){
	
	 int n; cin>> n;
	 vector<int>v(n);
		
		for(int i = 0; i<n; i++){
			cin>> v[i];
 
		}
		sort(v.begin(), v.end());
		int a = 1;	
		for(int i = 0; i<v.size()-1; i++){
			if(v[i+1] - v[i]== 1 or v[i+1] - v[i]== -1 ){
				a= 2;
			} 
		}
		cout<< a<< endl;
	}
}
