#include<iostream>
#include<vector>

using namespace std;


void print(vector <vector <int>> data, string text="")
{
    cout << text << endl;

    cout << "Total Row: " << data.size() << endl;

    for(vector <int> row:data){
        cout << "\t[" << row.size() << "] -> ";
        for(int column:row){
            cout << column << " ";
        }
        cout << endl;
    }
    cout << endl;
}
int main()
{
    //vector <vector <int>> data({{10,20}, {30,40,50}, {60,70,80},{110, 120, 130,5,40,20}});

    //vector <vector <int>> data(3, vector <int> (4, 10));

    vector <vector <int>> data;
    for(int i =0; i < 3; i++){
        vector <int> row;
        for(int j = 0; j < 4; j++){
            row.push_back(i*j);
        }
        data.push_back(row);
    }

    print(data);
    /*vector <int> ar = {10,20,30,40};
    for(int item:ar){
        cout << item << " ";
    }*/
}
