/* Input:
The first line of input contains an integer T denoting the 
number of test cases. T test cases follow. 
Each test case contains two lines of input: 
The first line contains N and X(element which is to be searched). 
The second line contains the elements of the array separated 
by spaces. */

/* Output:
For each test case, print 1 if X exists in the array, else print -1. */


int bin_search(int A[], int n, int x) {
    int low = 0;
    int high = n;
    while(low<high) {
        int mid = low + (high-low)/2;
        if(A[mid] == x) {
            return 1;
        }
        else if(A[mid] < x) {
            low = mid + 1;
        }
        else {
            high = mid;
        }
    }
    return -1;
}

int main() {
	
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int t,n,x;
	cin >> t;
	for(int j=0;j<t;j++) {
	    cin >> n >> x;
	    int A[n];
	    for(int i=0;i<n;i++) {
	        cin >> A[i];
	    }
	    cout << bin_search(A,n,x);
	    cout << "\n";
	}
	return 0;
}

