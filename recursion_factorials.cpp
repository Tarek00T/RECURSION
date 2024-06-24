#include<bits/stdc++.h>
using namespace std ;
long long fact(long long n )
{
    if(n==0 || n==1)
        return 1;
    else
        return n*fact(n-1);
}
int main ()
{
    int n;
    cin >>n;
    cout<<fact(n)<<endl;
}

//#include<bits/stdc++.h>
//using namespace std ;
//long long fact(long long n )
//{
//    if(n==0 || n==1)
//        return 1;
//    else
//        return n*fact(n-1);
//}
//int main ()
//{
//    int t;
//    cin >>t;
//    while(t--)
//    {
//        for(int i=0; i<t; i++)
//        {
//            cout<<fact(i)<<" ";
//        }
//    }
//    cout<<endl;
//}
