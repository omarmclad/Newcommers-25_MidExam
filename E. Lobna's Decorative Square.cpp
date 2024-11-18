#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long 
#define McLAD ios_base::sync_with_stdio(0); cin.tie(0);
signed main() {
    McLAD
   int x;
   cin>>x;
   for(int i=0; i<x; i++){
    for(int j=0; j<x; j++){
        if(i==0 ||i== x-1|| j==0||j==x-1){
            cout<<'#';
        }
        else{
            cout<<x;
        }
    }
    cout<<endl;
   }
    return 0;
}
