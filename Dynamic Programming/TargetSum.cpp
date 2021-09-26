#include<iostream>
using namespace std;

int TargetSum(int x,int arr[],int n){
    int sum = 0;
    int i,j;
    for(i=0;i<n;i++){
        sum += arr[i];
    }
    sum = (sum+x)/2;
    // cout<<"Sum = "<<sum;
    int dp[n+1][sum+1];
    for(i=0;i<=sum;i++){
        dp[0][i] = false;
    }
    for(i=0;i<=n;i++){
        dp[i][0] = true;
    }

    for(i=1;i<=n;i++){
        for(j=1;j<=sum;j++){
            if(arr[i-1] <= j){
                dp[i][j] = dp[i-1][j-arr[i-1]] + dp[i-1][j];
            }
            else{
                dp[i][j] = dp[i-1][j];
            }
        }
    }
    // for(i=0;i<=n;i++){
    //     for(j=0;j<=sum;j++){
    //         cout<<dp[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }
    return dp[n][sum];
    // return -1;
}



int main(){
    int arr[]= {1};
    int x = 2;
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<TargetSum(x,arr,n);
}