#include <bits/stdc++.h>

using namespace std;

int BinaryExponentiation(int a, int b){
    int ans = 1;
    while(b > 0){
        if(b & 1){
            ans *= a;
        }
        a *= a;
        b >>= 1;
    }
    return ans;
}

int ModularExponentiation(int a, int b, int m){
    int ans = 1;
    while(b > 0){
        if(b & 1){
            ans = (ans*a)%m;
        }
        a = (a*a)%m;
        b >>= 1;
    }
    return ans;
}

int main(){
    // Time Complexity: O(logN)
    // Space Complexity: O(1)
    return 0;
}