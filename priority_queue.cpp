#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    priority_queue <int> pqq;

    while(n > 0){
        n--;
        int a;
        cin >> a;
        pqq.push(a);
    }

    while(pqq.empty() == 0){
        int a = pqq.top();
        cout << a << " " <<a<<endl;

        pqq.pop();
    }
}
