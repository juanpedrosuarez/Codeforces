#include <bits/stdc++.h>
     
using namespace std;
     
     
     
int main(){
 
	int t;
    cin >> t;
    for(int i = 0; i < t; i++){
    	vector <int> b(7);
     
        for(int i = 0; i < 7; i++){
        	cin >> b[i];
		}
     		cout << b[0] << ' ' << b[1] << ' ' << abs(b[6] - b[0] - b[1]) << endl;
		
	}
}
