#include <iostream>
#include <vector>
#include <algorithm>
 
using namespace std;
 
int busca(int n, vector <int> &v){
    if(n>v.back()){
        return -1;
    }else{
        int i, f;
        i = 0;
        f = v.size()-1;
        int meio = 0;
        int resposta = 0;
    
    while(i<=f){
        meio = (i+f)/2;
        if(v[meio]<n){
            i=meio+1;
        }else{
            resposta=meio;
            f=meio-1;
        }
    }
	return resposta+1;
}
    
 
}
int main(){
    int t;
    cin>>t;
 
    while(t--){
        int n,q;
        cin>>n>>q;
 
        vector<int> nums;
 
        for(int i = 0;i<n; i++){
            int num;
            cin >> num;
            nums.push_back(num);
        }
        sort(nums.begin(), nums.end());
 
        reverse(nums.begin(), nums.end());
 
        vector<int> somas(n);
 
        somas[0] = nums[0];
 
        int aux = nums[0];
        for(int j = 1; j < nums.size(); j++){
            aux+=nums[j];
            somas[j]=aux;
        }
        while(q--){
            int valor;
            cin>> valor;
            cout<< busca(valor, somas)<<endl;
        }
    }
    return 0;
 
}
 
