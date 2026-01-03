#include<bits/stdc++.h>
using namespace std;

int count = 0;

void f() {
    if (count == 4) {
        return;
    }
    cout << "pujit"<<endl;
    count++;
    f();
}

int main() {
    f();
}