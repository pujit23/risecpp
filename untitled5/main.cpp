#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    int sum = 0;
     cout<<"enter the no you want to find armstrong no or not  "<< endl;
    cin>>n;

    int original_n = n;
    if (n==0) {
        cout<<"no digits found"<<endl;
         sum =0;
    }
    else {
        while (n>0) {
            int last_digit = n%10;
            cout<<last_digit<<endl;
            sum=sum+last_digit*last_digit*last_digit;
            n=n/10;

        }
    }

    if (sum==original_n) {
        cout<<"it is armstrong no";
    }
    else {
            cout<<"not an armstrong no";
        }
    return 0;



}