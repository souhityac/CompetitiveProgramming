#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>

using namespace std;

int main() {
	
	int t,n;
	cin >> t;
	for(int e=0;e<t;e++) {
	    cin >> n;
	    int arr[n][n],dp[n][n],sum,ans;
	    for(int i=0;i<n;i++) {
	        for(int j=0;j<n;j++) {
	            cin >> arr[i][j];
	            dp[i][j] = arr[i][j];
	        }
	    }
	    ans=0;
	    for(int i=1;i<n;i++) {
	        for(int j=0;j<n;j++) {
	            
	            if(j==0) {
	                dp[i][j] = arr[i][j]+std::max(dp[i-1][j],dp[i-1][j+1]);
    	        }
    	        else if(j==n-1) {
    	            dp[i][j] = arr[i][j]+std::max(dp[i-1][j-1],dp[i-1][j]);
    	        }
    	        else {
    	            dp[i][j] = arr[i][j]+std::max(dp[i-1][j],std::max(dp[i-1][j-1],
    	            dp[i-1][j+1]));
    	        }
    	        if(i==n-1) {
    	            ans = std::max(ans,dp[i][j]);
    	        }

	        }
	    }
	    cout << ans << endl;
	}
	return 0;
}