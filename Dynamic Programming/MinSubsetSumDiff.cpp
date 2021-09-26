#include<iostream>
using namespace std;
// int max(int a,int b){return a > b ? a : b;}

int DP(int wt[],int n)
{
    int W = 0;
    for(int i=0;i<n;i++){
        W += wt[i];
    }
    bool dp[n+1][W+1];
    int i,j;
    for(i=0;i<=W;i++)
    {
        dp[0][i]=false;
    }
    for(i=0;i<=n;i++)
    {
        dp[i][0]=true;
    }
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=W;j++)
        {
            if(wt[i-1] <= j)
            {
                dp[i][j] = dp[i-1][j-wt[i-1]] || dp[i-1][j] ;
            }
            else
            {
                dp[i][j] = dp[i-1][j];
            }
        }
    }
    for(int i=0;i<=n;i++){
    for(int j=0;j<=W;j++){
        cout<<dp[i][j]<<" ";
    }
    cout<<endl;
    }
    int mn = W;
    for(i=0;i<=W/2;i++){
        if(dp[n][i] == true){
            mn = min(mn,W-(2*i));
        }
    }
    // return dp[n][W];
    return mn;
}

int main()
{
    int W=10;
    int wt[]={1,2,7};

    int n = sizeof(wt)/sizeof(wt[0]);
    cout<<"Ans is : "<<DP(wt,n);
    // cout<<max(4,5);
    // cout<<false;
    // cout<<false;
}