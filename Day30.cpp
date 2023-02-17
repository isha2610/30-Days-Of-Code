/* ALEXA AND DIGITS:
Having learned the multiplication table, Alexa can multiply two integers between 1 and 9 (inclusive) together. 
Given an integer N, determine whether N can be represented as the product of two integers between 1 and 9. If it can, print Yes; if it cannot, print No.
*/

#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

int main() {
	int n;
    cin>>n;

    for(int i=1;i<=9;i++){
        if(n%i==0 && n/i<=9){
            cout<<"Yes"<<endl;
            exit(0);
        }
    }
    cout<<"No"<<endl;
    return 0;
}
