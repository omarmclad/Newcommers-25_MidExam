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
    //for every number from 1 to x that x is divisible by, print it
    for (int i=1;i<=x;i++) {
        if (x%i==0) {
            cout<<i<<" ";
        }
    }
    return 0;
}
