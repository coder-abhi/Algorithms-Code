#include<iostream>
using namespace std;
int max(int a,int b){return a>b ? a : b;}

// int dp[10][101];
int KP(int wt[],int val[],int W,int n) 
{ 
    // Your code here
    int dp[n+1][W+1];
    for(int i=0;i<=n;i++){
        dp[i][0] = 0;
    }
    for(int i=0;i<=W;i++){
        dp[0][i] = 0;
    }

    // for(int i=0;i<=n;i++){
    //     for(int j=0;j<=W;j++){
    //         cout<<dp[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }

    for(int i=1;i<=n;i++){
        for(int j=1;j<=W;j++){
            if(wt[i-1] <= j){
                dp[i][j] = max((val[i-1] + dp[i][j-wt[i-1]]),dp[i-1][j]);
            }
            else{
                dp[i][j] = dp[i-1][j];
            }
            // dp[i][j] = -1;
        }
    }

    // for(int i=0;i<=n;i++){
    //     for(int j=0;j<=W;j++){
    //         cout<<dp[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }

    return dp[n][W];
}

int main(){
    int val[] = {1,2,3};
    int wt[] = {4,5,1};
    int w = 4;
    int n = sizeof(wt)/sizeof(wt[0]);
    // cout<<n;
    int x = KP(wt,val,w,n);
}