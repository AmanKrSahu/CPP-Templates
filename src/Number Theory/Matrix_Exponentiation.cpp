#include <bits/stdc++.h>

using namespace std;

vector<vector<int>> MatrixMultiplication(vector<vector<int>> mat1, vector<vector<int>> mat2, int dim){
    vector<vector<int>> res(dim, vector<int> (dim, 0));
    for(int i=0; i<dim; i++){
        for(int j=0; j<dim; j++){
            for(int k=0; k<dim; k++){
                res[i][j] += mat1[i][k]*mat2[k][j];
            }
        }
    }
    return res;
}

vector<vector<int>> MatrixExponentiation(vector<vector<int>> v, int dim, int n){
    vector<vector<int>> ans(dim, vector<int> (dim));
    for(int i=0; i<dim; i++){
        for(int j=0; j<dim; j++){
            if(i == j) v[i][j] = 1;
            else v[i][j] = 0;
        }
    }
    while(n > 0){
        if(n & 1){
            ans = MatrixMultiplication(v, ans, dim);
        }
        v = MatrixMultiplication(v, v, dim);
        n >>= 1;
    }
    return ans;
}

int main(){
    // Time Complexity: O(dim^3 * logN)
    // Space Complexity: O(dim^2)
    return 0;
}