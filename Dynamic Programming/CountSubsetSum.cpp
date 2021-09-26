#include<iostream>
using namespace std;

int EqualPrtiton(int arr[],int n,int sum){

    int dp[n+1][sum+1];
    for(int i=0;i<=sum;i++){
        dp[0][i] = false;
    }
    for(int i=0;i<=n;i++){
        dp[i][0] = true;
    }

    for(int i=1;i<=n;i++){
        for(int j=1;j<=sum;j++){
            if(arr[i-1] <= j){
                dp[i][j] = dp[i-1][j-arr[i-1]] + dp[i-1][j];
            }
            else{
                dp[i][j] = dp[i-1][j];
            }
        }
    }
    for(int i=0;i<=n;i++){
        for(int j=0;j<=sum;j++){
            cout<<dp[i][j]<<" ";
        }
        cout<<endl;
    }
    return dp[n][sum];
}

int main(){
    int arr[] = {1,2,3,3};
    int x = 6;
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<EqualPrtiton(arr,n,x);
}