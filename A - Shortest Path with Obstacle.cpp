#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
  int t;
  cin >> t;
 
  while(t--){
    int xa, ya, xb, yb, xf, yf;
    cin >> xa >> ya >> xb >> yb >> xf >> yf;
 
    int r = abs(xa - xb) + abs(ya - yb);
 
    if(xa == xb){
      if(ya > yb) swap(ya, yb);
      if(xf == xa and ya < yf and yf < yb) r += 2;
    }
 
    if(ya == yb){
      if(xa > xb) swap(xa, xb);
      if(yf == ya and xa < xf and xf < xb) r += 2;
    }
 
    cout<<r<<endl;
  }
}
