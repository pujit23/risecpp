#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    int reverse = 0;
    cout<<"enter the no you want to check whether the no is palindrome or not";
    cin>>n;
int orginal_n= n;

    if (n==0) {
        cout<<"you entered zero";
        reverse = 0;
    }
    else {
        while (n>0) {
            int last_digit = n%10;
            n=n/10;
            reverse=reverse*10+last_digit;


        }
    }
   if (reverse == orginal_n) {
       cout<<"the entered no is a palindrome";
   }
   else {
        cout<<"the entered no is not a palindrome";
    }

}
