#include<iostream>
#include<vector>

using namespace std;

vector <vector <int>> input(){
    vector <vector <int>> arr;

    for(int i = 0; i < 6; i++)
    {
        vector <int> row;
        for(int j = 0; j < 6; j++){
            int d;
            cin >> d;
            row.push_back(d);
        }
        arr.push_back(row);
    }
    return arr;
}

int solve(vector <vector <int>> arr)
{
    int mx = -1000000;

    for(int i = 0; i <= 3; i++){
        for(int j = 0; j <= 3; j++){
            int sum;
            sum = arr[i][j] + arr[i][j+1] + arr[i][j+2]+
                            arr[i+1][j+1]+
                  arr[i+2][j] + arr[i+2][j+1] + arr[i+2][j+2];
            mx = max(sum, mx);
        }
    }
    cout << endl;
    return mx;
}
int main()
{
    vector <vector <int>> arr = input();

    cout << solve(arr) << endl;

    return 0;
}
