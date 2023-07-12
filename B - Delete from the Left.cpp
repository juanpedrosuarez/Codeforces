#include <bits/stdc++.h>
 
using namespace std;
 
 
void f(){
	  string s1,s2;
      cin >> s1 >> s2;
 
      int n = min(s1.size(), s2.size());
      int x = s1.size() - 1;
      int y = s2.size() - 1;
      int count = 0;
 
      while(n--){
            if(s1[x] == s2[y]){
                  count++;
                  x--;
                  y--;
            }
            else break;
      }
 
      cout << (s1.size() + s2.size() - (2*count) ) << endl;
}
 
int main(){
 
	f();
 
}
