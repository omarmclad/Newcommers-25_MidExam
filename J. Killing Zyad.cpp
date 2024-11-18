#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
#define no {cout << "NO\n";}
#define McLAD ios_base::sync_with_stdio(0); cin.tie(0);
signed main() {
    McLAD
    //k:price of the first knife
    //n:initial money you got
    //w:number of knifes u need to buy
    int k,n,w;
    cin>>k>>n>>w;
    //since the price of the knife is increasing
    //example 3,17,4
    // 3+6+9+12=30
    //we can take 3 as common factor 3*(1+2+3+4)=30
    //we can notice that it is the summation of (1 to N)*the price of the initial knife
    int ans=0;
    ans=k*(w*(w+1)/2);
    //check if u have enough money
    if(ans<=n){
        cout<<0;
    } 
    else{
        cout<<ans-n;
    }
    return 0;
}
