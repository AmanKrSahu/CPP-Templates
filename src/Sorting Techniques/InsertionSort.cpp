#include <bits/stdc++.h>

using namespace std;

void InsertionSort(vector<int> &v){
    for(int i=1; i<v.size(); i++){
        for(int j=i; j>0; j--){
            if(v[j]<v[j-1]) swap(v[j],v[j-1]);
        }
    }
}

int main(){
    // Time Complexity: O(N^2)
    // Space Complexity: O(1)
    return 0;
}