#include<iostream>
using namespace std;
int max(int a,int b){a>b ? a : b;}
int KP(int wt[], int val[], int w, int n){
    if(w==0 || n==0) return 0;
    else if(wt[n-1] > w) return KP(wt,val,w,n-1);
    else{
        return max(val[n-1]+KP(wt,val,w-wt[n-1],n-1),KP(wt,val,w,n-1));
    }
}

int main(){
    int wt[] = {1,2,3};
    int val[] = {6,10,12};
    int w = 5;
    int n = sizeof(wt)/sizeof(wt[0]);
    // cout<<n;
    cout<<KP(wt,val,w,n);
}