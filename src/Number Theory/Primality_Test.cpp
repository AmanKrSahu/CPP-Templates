#include <bits/stdc++.h>

using namespace std;

bool PrimalityTest(int n){
    if(n==1) return false;
    for(int i=2; i*i<=n; i++){
        if(n%i == 0) return false;
    }
    return true;
}

int main(){
    // Time Complexity: O(sqrt(N))
    // Space Complexity: O(1)
    return 0;
}