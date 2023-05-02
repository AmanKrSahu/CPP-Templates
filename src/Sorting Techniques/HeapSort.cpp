#include <bits/stdc++.h>

using namespace std;

void Heapify(vector<int> &v, int n, int i){
    int MaxIdx=i, l=2*i+1, r=2*i+2;

    if(l<n && v[l]>v[MaxIdx]) MaxIdx=l;
    if(r<n && v[r]>v[MaxIdx]) MaxIdx=r;

    if(MaxIdx != i){
        swap(v[i],v[MaxIdx]);
        Heapify(v, n, MaxIdx);
    }
}

void HeapSort(vector<int> &v, int n){
    for(int i=n/2-1; i>=0; i--){
        Heapify(v, n, i);
    }

    for(int i=n-1; i>=0; i--){
        swap(v[0], v[i]);
        Heapify(v, i, 0);
    }
}

int main(){
    // Time Complexity: O(NlogN)
    // Space Complexity: O(1)
    return 0;
}