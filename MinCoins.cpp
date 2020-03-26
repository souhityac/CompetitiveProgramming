#include <iostream>
using namespace std;

int main() {
	//code
	int coins[10] = {1, 2, 5, 10, 20, 50, 100, 200, 500, 2000};
	int t,amt;
	cin >> t;
	for(int e=0;e<t;e++) {
	    cin >> amt;
	    int dp[10][amt+1];
	    for(int j=0;j<amt+1;j++) {
	        dp[0][j] = j;
	    }
	    for(int i=0;i<10;i++) {
	        dp[i][0] = 0;
	    }
	    for(int i=1;i<10;i++) {
	        for(int j=1;j<amt+1;j++) {
	            
	            if(j<coins[i]) {
	                dp[i][j] = dp[i-1][j];
	            }
	            else{
	                dp[i][j] = std::min(1+dp[i][j-coins[i]],dp[i-1][j]);
	            }
	        }
	    }
	    int count = dp[9][amt];
	    int l=9;
	    int r=amt;
	    while(count > 0) {
	        if(l==0) {
	            for(int c=dp[l][r];c>0;c--){
	                cout << 1 << " ";
	                count--;
	            }
	        }
	        else {
	            if(dp[l][r] != dp[l-1][r]) {
	                cout << coins[l] << " ";
	                r = r-coins[l];
	                count--;
	            }
	            else {
	                l=l-1;
	            }
	        }
	    }
	    cout << endl;
	}
	return 0;
}