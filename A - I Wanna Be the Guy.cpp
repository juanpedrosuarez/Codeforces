
#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int v[1000];
    int n , p , q,s=0;
    cin >> n >> p;
   
 
    for(int i =  0 ; i < p ; i++){
        cin >> v[i];
    }
    cin >> q;
    for(int i = p ; i < p + q ; i++){
        cin >> v[i];
    }
	sort(v , v+(p+q));
 
    for(int i = 0 ; i < p+q ; i++){
        if(v[i] != v[i+1]){
            s++;
        }
    }
 
    if(n == (s)){
        cout << "I become the guy." <<endl;
    }else{
        cout << "Oh, my keyboard!" << endl;
    }
 
    return 0;
}
