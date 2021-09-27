/* Consider a game where a player can score 3 or 5 or 10 points in a move. Given a total score n, find number of distinct combinations to reach the given score.

Input:
The first line of input contains an integer T denoting the number of test cases. T testcases follow.The first line of each test case is n.

Output:
For each testcase, in a new line, print number of ways/combinations to reach the given score.

Constraints:
1 ≤ T ≤ 100
1 ≤ n ≤ 1000

Example:
Input
3
8
20
13
Output
1
4
2
*/
#include<iostream>
using namespace std;


long long int count(long long int W)
{
    int n=3;
	long long int dp[n+1][W+1],i,j;
// 	memset(dp, 0, sizeof(dp));
	int arr[] = {25,10,5};
	for(i=0;i<=W;i++){
	    dp[0][i] = 0;
	}
	for(i=0;i<=n;i++){
	    dp[i][0] = 1;
	}
    
    for(i=1;i<=n;i++){
        for(j=1;j<=W;j++){
            if(arr[i-1] <= j)
                dp[i][j] = dp[i-1][j] + dp[i][j-arr[i-1]];
        else dp[i][j] = dp[i-1][j];
        }
    }
	// Your code here
	    for(int i=0;i<=n;i++){
        for(int j=0;j<=W;j++){
            cout<<dp[i][j]<<" ";
        }
        cout<<endl;
    }
	return dp[n][W];
}

int main(){
    int W=30;
    cout<<count(W);
}