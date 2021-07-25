#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main()
{

    // without vector

   /* int myints[] = {32,71,12,45,26,80,53,33};
    sort(myints, myints+8);
    for(int i = 0; i < 8; i++){
        cout << myints[i] << " ";
    }*/


    //using vector
    vector <int> v;
    for(int i = 0; i < 5; i++){
        int a;
        cin >> a;
        v.push_back(a);
    }

    sort(v.begin(), v.end());

    for(int i = 0; i != v.size(); i++){
        cout << v[i] << " ";
    }
}
