#include <bits/stdc++.h>
   
using namespace std;
 
 
void f() {
 
  int n;
  cin >> n;
  string s;
  cin >> s;
  for(int i = 1; i <= n; i++) {
    if(n % i == 0) {
      reverse(s.begin(), s.begin() + i);
    }
  }
  cout<<s;
}
 
int main(){
 
    f();
 
}
→Judgement Protoc
