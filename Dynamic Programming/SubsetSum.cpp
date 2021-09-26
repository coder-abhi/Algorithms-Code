#include<iostream>
using namespace std;
bool dp[11][101];
// int max(int a,int b){return a > b ? a : b;}

bool DP(int W,int wt[],int n)
{
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
    return dp[n][W];
}

int main()
{
    int W=10;
    int wt[]={1,7,3};

    int n = 3;
    cout<<"Ans is : "<<DP(W,wt,n);
    cout<<false;
    // cout<<false;
}