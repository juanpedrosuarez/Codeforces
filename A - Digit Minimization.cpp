 
#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
 
 
  int n;
  cin >> n;
  for(int i = 0; i<n; i++){
    string s;
    cin >> s;
    if (s.size() == 2) {
      cout << s[1] <<endl;
    }else{
      cout << *min_element(s.begin(), s.end())<<endl;
    }
  }
  return 0;
}
