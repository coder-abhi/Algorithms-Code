#include<iostream>
using namespace std;

int minCoins(int arr[], int n, int W) 
{ 
    // Your code goes here
    int i,j;
    int dp[n+1][W+1];
    for(i=0;i<=W;i++){
        dp[0][i] = INT_MAX-1;
        if(i%arr[0] == 0){
            dp[1][i] = i/arr[0];
        }
        else dp[1][i] = INT_MAX-1;
    }
    for(i=0;i<=n;i++){
        dp[i][0] = 0;
    }

    
    for(i=2;i<=n;i++){
        for(j=1;j<=W;j++){
            if(arr[i-1] <= j)
                dp[i][j] = min(dp[i-1][j] , 1+dp[i][j-arr[i-1]]);
        else dp[i][j] = dp[i-1][j];
        }
    }

    for(int i=0;i<=n;i++){
        for(int j=0;j<=W;j++){
            cout<<dp[i][j]<<" ";
        }
        cout<<endl;
    }

    return dp[n][W];
} 

int main(){
    int W=4;
    int arr[] = {1,2,3};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<minCoins(arr,n,W);
}

/*
Find minimum number of coins that make a given value
Difficulty Level : Medium
Last Updated : 14 May, 2021
 
Given a value V, if we want to make change for V cents, and we have infinite supply of each of C = { C1, C2, .. , Cm} valued coins, what is the minimum number of coins to make the change? If it’s not possible to make change, print -1.

Examples:  

Input: coins[] = {25, 10, 5}, V = 30
Output: Minimum 2 coins required
We can use one coin of 25 cents and one of 5 cents 

Input: coins[] = {9, 6, 5, 1}, V = 11
Output: Minimum 2 coins required
We can use one coin of 6 cents and 1 coin of 5 cents
*/