#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void D(int s,int t, int i, int d) {
    
    cout << s << " " << t << "\n";
    if(s==t && s==i) {
        cout << d;
        return;
    }
    int m = s + (t-s)/2;
    if(i>m) {
        D(m+1,t,i,d+1);
    }
    else{
        D(s,m,i,d+1);
    }
}

int main() {
	// your code goes here
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n,s,t,i;
	cin >> n;
	for(int j=0;j<n;j++) {
	    cin >> s >> t >> i;
	    if(s<=i && i<=t) {
	        D(s,t,i,1);
	    }
	    else{
	        cout << -1;
	    }
	    cout << "\n";
	}
	return 0;
}
