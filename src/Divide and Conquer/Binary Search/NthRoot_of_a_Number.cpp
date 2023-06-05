#include <bits/stdc++.h>

using namespace std;

double multiply(double num, int n){
    double ans = 1.0;
    for(int i=0; i<n; i++){
        ans *= num;
    }
    return ans;
}

pair<double,double> NthRoot(int n, int m){
    double low = 1, high = m, eps = 1e-5;
    while((high-low) > eps){
        double mid = low + (high-low)/2.0;
        if(multiply(mid, n) < m){
            low = mid;
        }
        else{
            high = mid;
        }
    }
    return make_pair(low,high);
}

int main(){
    // Time Complexity: N*log(M*10^d)
    // Space Complexity: O(1)
    return 0;
}