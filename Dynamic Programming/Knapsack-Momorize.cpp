#include<iostream>
#include<cstring>
using namespace std;
int static dp[10][100];
int max(int a,int b){a>b ? a : b;}
int KP(int wt[], int val[], int w, int n){
    if(w==0 || n==0) return 0;
    else if(dp[n][w] != -1) return dp[n][w];
    else if(wt[n-1] > w) return dp[n][w] = KP(wt,val,w,n-1);
    else{
        return dp[n][w] = max(val[n-1]+KP(wt,val,w-wt[n-1],n-1),KP(wt,val,w,n-1));
    }
}

int main(){
    int wt[] = {1,2,3};
    int val[] = {6,10,12};
    int w = 5;
    int n = sizeof(wt)/sizeof(wt[0]);
    memset(dp,-1,sizeof(dp));
    // cout<<n;
    cout<<KP(wt,val,w,n);
}