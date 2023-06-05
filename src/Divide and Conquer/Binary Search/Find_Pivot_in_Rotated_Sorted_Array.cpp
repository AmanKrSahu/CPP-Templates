#include <bits/stdc++.h>

using namespace std;

int pivot(vector<int> v){
    int low = 0, high = v.size()-1;
    while((high-low) > 1){
        int mid = (low+high)>>1;
        if(v[low] <= v[mid]){
            low = mid;
        }
        else{
            high = mid;
        }
    }
    return high;
}

int main(){
    // Time Complexity: O(logN)
    // Space Complexity: O(1)
    return 0;
}