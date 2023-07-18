#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int n;
    cin>>n;
 
    map<string, int> dt;
    string s;
    for(int i = 0; i<n; i++){
        cin >> s;
        if (dt.count(s) == 0){
            cout << "OK" << endl;
            dt[s] = 1;
        }else{
            cout << s << dt[s] << endl;
            dt[s] += 1;
        }
    }
    return 0;
}
