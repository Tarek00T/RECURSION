#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

ll log2(ll n)
{
    if(n==1)
        return 0;
    return 1+ log2(n/2);
}


int main ()
{
    ll n;
    cin >>n;
    cout<<log2(n)<<endl;
}
