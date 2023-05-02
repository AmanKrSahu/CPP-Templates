#include <bits/stdc++.h>

using namespace std;

int Partition(vector<int> &v, int l, int r){
    int i=l-1, pivot = v[r];
    for(int j=0; j<r; ++j){
        if(v[j] <= pivot){
            ++i; 
            swap(v[i], v[j]);
        } 
    }
    swap(v[i+1], v[r]);
    return i+1;
}

void QuickSort(vector<int> &v, int l, int r){
    if(l<r){
        int pi = Partition(v, l, r);
        QuickSort(v, l, pi-1);
        QuickSort(v, pi+1, r);
    }
}

int main(){
    // Time Complexity: O(N^2)
    // Space Complexity: O(logN)
    return 0;
}