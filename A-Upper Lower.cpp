#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long 
#define McLAD ios_base::sync_with_stdio(0); cin.tie(0);
signed main() {
    McLAD
    char c;
    cin>>c;
    //                                                'a'-'z'
    //checking if my character is in lower_case from (97-122)
    //                                 'A'-'Z'
    //subtracting 32 from my character (65-90) 
    // make sure to use char() to switch back from a number to char 
    if(c>='a'&&c<='z'){
        cout<<char(c-32);
    }
    // and the opposite
    else{
        cout<<char(c+32);
    }
    return 0;
}