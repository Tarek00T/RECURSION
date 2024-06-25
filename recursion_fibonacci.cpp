#include<bits/stdc++.h>
using namespace std ;
long long fibo(long long n )
{
    if(n==0) return 0;
    if(n==1) return 1;
    else     return fibo(n-1)+fibo(n-2);
}
int main ()
{
    int n;
    cin >>n;
    cout<<fibo(n)<<endl;
//    for(int i=0; i<n; i++)
//        cout<<fibo(i)<<" ";
//    cout<<endl;
}

