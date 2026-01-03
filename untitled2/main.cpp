#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    int count = 0;
     cout<<"enter the no you want to find the no digits  "<< endl;
    cin>>n;

    if (n==0) {
        cout<<"no digits found"<<endl;
        count = 1;
    }
    else {
        while (n>0) {
            int last_digit = n%10;
            cout<<last_digit<<endl;
            n=n/10;
            count++;
        }
    }
    cout<<"total no of digits are "<<count<<endl;

}