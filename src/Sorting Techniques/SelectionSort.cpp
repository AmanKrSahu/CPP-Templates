#include <bits/stdc++.h>

using namespace std;

void SelectionSort(vector<int> &v){
    for(int i=0; i<v.size()-1; i++){
        for(int j=i+1; j<v.size(); j++){
            if(v[i]>v[j]) swap(v[i],v[j]);
        }
    }
}

int main(){
    // Time Complexity: O(N^2)
    // Space Complexity: O(1)
    return 0;
}