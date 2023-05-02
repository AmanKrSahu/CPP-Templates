#include <bits/stdc++.h>

using namespace std;

void Merge(vector<int> &v, int l, int mid, int r){
    int n1=mid-l+1, n2=r-mid;
    vector<int> temp1(n1), temp2(n2);
    
    for(int i=0; i<n1; ++i){
        temp1[i] = v[l+i];
    }
    for(int i=0; i<n2; ++i){
        temp2[i] = v[mid+i+1];
    }

    int i=0, j=0, k=l;
    while(i<n1 && j<n2){
        if(temp1[i] < temp2[j]){
            v[k] = temp1[i];
            ++i, ++k;
        }
        else{
            v[k] = temp2[j];
            ++j, ++k;
        }
    }

    while(i<n1){
        v[k] = temp1[i];
        ++i, ++k;
    }
    while(j<n2){
        v[k] = temp2[j];
        ++j, ++k;
    }

}

void MergeSort(vector<int> &v, int l, int r){
    if(l<r){
        int mid = (l+r)>>1;
        MergeSort(v, l, mid);
        MergeSort(v, mid+1, r);
        Merge(v, l, mid, r);
    }
}

int main(){
    // Time Complexity: O(NlogN)
    // Space Complexity: O(N)
    return 0;
}