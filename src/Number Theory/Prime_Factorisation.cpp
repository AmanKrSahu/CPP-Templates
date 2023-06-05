#include <bits/stdc++.h>

using namespace std;

void PrimeFactorisation(int n){
    for(int i=2; i*i<=n; i++){
        if(n%i == 0){
            int cnt = 0;
            while(n%i == 0){
                n /= i;
                cnt++;
            }
            cout<<i<<"^"<<cnt<<"\n";
        }
    }
    if(n>1) cout<<n<<"^"<<1;
}

// Using Sieve
vector<int> PrimeFactorisation2(int n){
    vector<int> v(n+1, -1);
    for(int i=2; i<=n; i++){
        if(v[i] == -1){
            for(int j=i; j<=n; j+=i){
                if(v[j] == -1){
                    v[j] = i;
                }
            }
        }
    }
    return v;
}

int main(){
    // Case 1
    // Time Complexity: O(sqrt(N))
    // Space Complexity: O(1)

    // Case 2
    // Time Complexity: O(logN)
    // Space Complexity: O(N)
    return 0;
}