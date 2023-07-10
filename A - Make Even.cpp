#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        if((s[s.size()-1]-'0') % 2 == 0) {
            cout <<"0"<<endl;
            continue;
        }
        if((s[0] - '0') % 2 == 0) {
            cout << "1"<<endl;
            continue;
        }
        int cnt1 = count(s.begin(), s.end(), '2');
        int cnt2 = count(s.begin(), s.end(), '4');
        int cnt3 = count(s.begin(), s.end(), '6');
        int cnt4 = count(s.begin(), s.end(), '8');
        if(cnt1 > 0 or cnt2 > 0 or cnt3 > 0 or cnt4 > 0) {
            cout << "2"<<endl;
            continue;
        }
        cout << "-1"<<endl;
    }
    return 0;
}
 
