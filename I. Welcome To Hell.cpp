#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
#define no {cout << "NO\n";}
#define McLAD ios_base::sync_with_stdio(0); cin.tie(0);
signed main() {
    McLAD
    int x,y;
    cin>>x>>y;
    //check if x is divisible by y
    //note I defined int as long long so it may appear as an int but it is long long
    if (x%y==0) {
        cout<<"avoid";
    } else {
        cout<<"solve";
    }
    return 0;
}
