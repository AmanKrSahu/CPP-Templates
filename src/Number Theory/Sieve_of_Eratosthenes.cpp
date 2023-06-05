#include <bits/stdc++.h>

using namespace std;

vector<int> SieveOfEratosthenes(int n){
    vector<int> v(n+1, 1);
    v[0] = v[1] = 0;
    for(int i=2; i*i<=n; i++){
        if(v[i] == 1){
            for(int j=i*i; j<=n; j+=i){
                v[j] = 0;
            }
        }
    }
    return v;
}

int main(){
    // Time Complexity: O(N*log(logN))
    // Space Complexity: O(N)
    return 0;
}