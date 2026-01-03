#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cout<<"enter n";
    cin>>n;
    vector<int>v;
    for (int i = 1; i <= n; i++) {
        if (n%i==0) {
            v.push_back(i);
        }
    }
        for (int d:v) {
            cout<<d<<" ";
        }




}