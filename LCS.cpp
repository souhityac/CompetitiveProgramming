#include <iostream>
#include <bits/stdc++.h>
#include <string>
#include <algorithm>

using namespace std;

int main() {
	
	int t,n,m;
	string s1,s2;
	cin >> t;
	for(int e=0;e<t;e++) {
	    cin >> n >> m;
	    cin >> s1 >> s2;
	    int dp[n+1][m+1];
	    for(int i=0;i<n+1;i++) {
	        dp[i][0] = 0;
	    }
	    for(int j=0;j<m+1;j++) {
	        dp[0][j] = 0;
	    }
	    for(int i=1;i<n+1;i++) {
	        for(int j=1;j<m+1;j++) {
	            if(s1[i-1] != s2[j-1]) {
	                dp[i][j] = std::max(dp[i-1][j],dp[i][j-1]);
	            }
	            else{
	                dp[i][j] = dp[i-1][j-1] + 1;
	            }
	        }
	    }

	    cout << dp[n][m] << endl;
	}
	return 0;
}