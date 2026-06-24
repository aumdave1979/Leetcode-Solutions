#include<bits/stdc++.h>
using namespace std;

/* Brute Force to check tle occurs or not

class Solution {
public:
    // brute force will give the tle lets check
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        for(int i =0;i<matrix.size();i++){
            for(int j=0;j<matrix[i].size();j++){
                if(matrix[i][j]==target){
                    return true;
                }
            }
        }
        return false;
    }
};
*/


class Solution {
public:

    bool bs(vector<int>& arr, int target) {
        int low = 0;
        int high = arr.size() - 1;

        while (low <= high) {
            int mid = low + (high - low) / 2;

            if (arr[mid] == target)
                return true;

            if (arr[mid] < target)
                low = mid + 1;
            else
                high = mid - 1;
        }

        return false;
    }

    bool searchMatrix(vector<vector<int>>& matrix, int target) {

        int rows = matrix.size();
        int cols = matrix[0].size();

        int topRow = 0;
        int bottomRow = rows - 1;

        while (topRow <= bottomRow) {

            int midRow = topRow + (bottomRow - topRow) / 2;

            if (target < matrix[midRow][0]) {
                bottomRow = midRow - 1;
            }
            else if (target > matrix[midRow][cols - 1]) {
                topRow = midRow + 1;
            }
            else {
                return bs(matrix[midRow], target);
            }
        }

        return false;
    }
};