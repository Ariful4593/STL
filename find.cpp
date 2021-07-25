#include<iostream>
#include<algorithm>

using namespace std;
int main()
{
    int arr[] = { 10, 20, 30, 40 };
    cout << find(arr, arr+4, 9) - arr;
}
