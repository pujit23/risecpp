#include <bits/stdc++.h>
using namespace std;
int main() {
int a;
int b;
    cout<<"enter a";
    cin>>a;
    cout<<"enter b";
    cin>>b;
    vector<int>va;
    vector<int>vb;
    for (int i = 1;i<=a;i++) {
        if (a%i==0) {
            va.push_back(i);
        }
    }
        for (int j = 1;j<=b;j++) {
            if (b%j==0) {
                vb.push_back(j);
            }
        }
        vector<int>commondivisor;
        for (int af : va) {
            for (int bf : vb) {
                if (af==bf) {
                    commondivisor.push_back(af);
                    break;
                }
            }
        }
        sort(commondivisor.begin(), commondivisor.end(),greater<int>());
        cout<<"The gcd is "<<commondivisor[0];




    }
