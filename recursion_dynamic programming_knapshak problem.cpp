
#include<bits/stdc++.h>
using namespace std;

int dp[21][101];
int weight[21], value[21];

int knapsack(int n, int w)
{
    if(n == 0 || w == 0)
        return 0;
    if(dp[n][w] != -1)
        return dp[n][w];
    if(weight[n-1] <= w)
        return dp[n][w] = max(value[n-1] + knapsack(n-1, w-weight[n-1]), knapsack(n-1, w));
    else
        return dp[n][w] = knapsack(n-1, w);
}

int main()
{
    int n, w;
    cin >> n >> w;
    for(int i=0; i<n; i++)
        cin >> weight[i] >> value[i];
    memset(dp, -1, sizeof(dp));
    cout << knapsack(n, w) << endl;
    return 0;
}
 
