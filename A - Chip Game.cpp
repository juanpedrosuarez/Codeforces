#include <iostream>
using namespace std;
int main(){
    int z;
    cin>> z;
    while(z--){
        int n, m;
        cin >> n >> m; 
        if((n + m)%2 == 0){
            cout <<"Tonya" << endl;
        }else{
            cout << "Burenka" << endl;
        }
    
    }
    return 0;
}
