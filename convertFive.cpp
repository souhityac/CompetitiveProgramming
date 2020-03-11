#include <cmath>

int convertFive(int n) {
    // Your code here
    int res=0;
    int d=0;
    while(n>0) {
        int item = n%10;
        if(item==0) {
            item = 5;
        }
        double ans = pow(10,d);
        res = res + item*ans;
        d++;
        n = n/10;
    }
    return res;
}