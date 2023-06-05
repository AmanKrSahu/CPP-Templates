#include <bits/stdc++.h>

using namespace std;

int UpperBound(vector<int> v, int key){
    int low = 0, high = v.size()-1;
    while(low <= high){
        int mid = (low+high)>>1;
        if(v[mid] == key){
            return mid+1;
        }
        else if(v[mid] < key){
            low = mid+1;
        }
        else{
            high = mid-1;
        }
    }
    return low;
}

int main(){
    // Time Complexity: O(LogN)
    // Space Complexity: O(1)
    return 0;
}