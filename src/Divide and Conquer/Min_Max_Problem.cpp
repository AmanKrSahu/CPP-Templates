#include <bits/stdc++.h>

using namespace std;

pair<int,int> MinMax(vector<int> v, int i, int j){
    if(j-i <= 1){
        return make_pair(max(v[i],v[j]), min(v[i],v[j]));
    }
    else{
        int mid = (i+j)>>1;
        pair<int,int> p1, p2;
        p1 = MinMax(v, i, mid);
        p2 = MinMax(v, mid+1, j);
        return make_pair(max(p1.first, p2.first), min(p1.second, p2.second));
    }
}

int main(){
    // Time Complexity: O(N)
    // Space Complexity: O(logN)
    return 0;
}