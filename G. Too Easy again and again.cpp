#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
#define no {cout << "NO\n";}
#define McLAD ios_base::sync_with_stdio(0); cin.tie(0);
signed main() {
    McLAD
    int x;
    cin>>x;
    //check if x is odd or even
    if(x%2==0){
        x--;
    }
    //print the number with 2 decreasing steps
    for(int i=x;i>0;i-=2){
        cout<<i<<" ";
    }
    return 0;
}
