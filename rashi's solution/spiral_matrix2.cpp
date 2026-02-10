#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> generateMatrix(int n){
    //creating n*n matrix
    vector<vector<int>> k(n,vector<int>(n,0));

    int i=0;
        int j=0;
        int num=1;
        int r=0;
       
       while (num <= n*n){
            while(j<n-r){
                k[i][j]=num++;
                j++;//1,2,3
                }
            j--;//2
            i++;//1
            while(i<n-r){
                k[i][j]=num++;
                i++;//2
            }
            i--;//2
            j--;//1
            while(j>=r){
                k[i][j]=num++;
                j--;//-1
            }
            j++;//0
            i--;//1
            r++;
            while(i>=r){ //i>=1
                k[i][j]=num++;
                i--;
                
            }
            i++;
            j++;

       }
       return k;
    
    }
 
   int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;

     vector<vector<int>> result = generateMatrix(n);

    cout << "Spiral Matrix:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << result[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}