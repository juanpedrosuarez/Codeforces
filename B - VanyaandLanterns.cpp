#include <iostream>
#include <algorithm>
using namespace std;
 
int main(){
	
    int n, l, r;
    cin >> n >> l;
    int v[n];
 
    for (int i = 0; i < n; i++){
        cin >> v[i];
	}
    sort(v, v + n);
    r = max(v[0], l - v[n - 1]) * 2;
 
    for (int i = 0; i < n - 1; i++){
        r = max(r, v[i + 1] - v[i]);
	}
    cout.precision(20);
    cout << fixed << r / 2.0 << endl;
    return 0;
}
