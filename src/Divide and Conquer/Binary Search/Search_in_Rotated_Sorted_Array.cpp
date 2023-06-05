#include <bits/stdc++.h>

using namespace std;

int binSearch(vector<int> v, int key){
    int low = 0, high = v.size()-1;
    while(low <= high){
        int mid = (low+high)>>1;
        if(v[mid] == key){
            return mid;
        }
        else if(v[low] <= v[mid]){
            if(v[low] <= key && v[mid] >= key){
                high = mid-1;
            }
            else{
                low = mid+1;
            }
        }
        else{
            if(v[mid] <= key && v[high] >= key){
                low = mid+1;
            }
            else{
                high = mid-1;
            }
        }
    }
    return -1;
}

int main(){
    // Time Complexity: O(logN)
    // Space Complexity: O(1)
    return 0;
}