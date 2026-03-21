#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<vector<int>> matrix = {{1, 1, 1}, {1, 0, 1}, {1, 1, 1}};
    int m = matrix.size();
    int n = matrix[0].size();
    vector <vector<int>> positions;
    for (int i=0; i<m;i++)
    {
        for (int j=0;j<n; j++)
        {
            if (matrix[i][j] == 0)
            {
                positions.push_back({i, j});
            }
        }
    }
    for(int i=0;i<positions.size();i++){
        for(int j=0;j<positions[i].size();j++){
            cout << positions[i][j] << " ";
        }
        cout << endl;
    }
}