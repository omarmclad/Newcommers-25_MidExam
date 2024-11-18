#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long 
#define McLAD ios_base::sync_with_stdio(0); cin.tie(0);
signed main() {
    McLAD
    //loop through all numbers from 1 to n
    //for each number add their odd digits 
    // example 721 -> 1+7=8
    // if the sum of odd digits in number n is bigger than 15 ignore it 
    int n,z;
    cin>>n;
    int sum2=0;
    for(int i=1;i<n+1;i++){
        int x=i,sum=0;
        while(x>0)
        {   
            if((x%10)%2==1){
                sum+=(x%10);
            }
            x/=10;
        }
        if(sum<=15){
            sum2+=sum;
        }       
    }
    cout<<sum2<<endl;
    return 0;
}
