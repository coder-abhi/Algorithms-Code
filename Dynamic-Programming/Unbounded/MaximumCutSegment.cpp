#include<iostream>
using namespace std;
int maxTheCuts(int W, int x, int y, int z)
{
    int arr[] = {x,y,z};
    int i,j,n=3;
    int dp[n+1][W+1];
    for(i=0;i<=n;i++){
        dp[i][0] = 0;
    }
    for(i=0;i<=W;i++){
        dp[0][i] = 0;
    }
    
    for(i=1;i<=n;i++){
        for(j=0;j<=W;j++){
            if(arr[i-1] <= j){
                dp[i][j] = max(1+dp[i][j-arr[i-1]],dp[i-1][j]);
            }
            else{
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
//    return 0;
	return dp[n][W];
    //Your code here
}

int main(){
    int x=5, y=3, z=2;;
    // int n = sizeof(wt)/sizeof(wt[0]);
    int W = 5;
    int A = maxTheCuts(4,2,1,1);
    cout<<"\nAns is "<<A;
}
