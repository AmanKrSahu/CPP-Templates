#include <bits/stdc++.h>

using namespace std;

void BubbleSort(vector<int> &v){
    for(int i=0; i<v.size()-1; ++i){
        for(int j=0; j<v.size()-i-1; ++j){
            if(v[j]>v[j+1]) swap(v[j],v[j+1]);
        }
    }
}

int main(){
    // Time Complexity: O(N^2)
    // Space Complexity: O(1)
    return 0;
}