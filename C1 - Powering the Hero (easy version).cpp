#include <bits/stdc++.h>
 
using namespace std;
 
 
void f(){
    
    priority_queue <long long> pq;
    long long ans = 0;
    long long n;
    cin >> n;
    for (long long i = 1; i <= n; i++)
    {
        long long x;
        cin >> x;
        if (x != 0)
        {
            pq.push(x);
        }
        else
        {
            if (!pq.empty())
            {
                ans += pq.top();
                pq.pop();
            }
        }
    }
    cout <<ans<<endl;
    
}
 
int main() {
    int t;
    cin>>t;
    while(t--){
        f();
    }
    
    
    
}
