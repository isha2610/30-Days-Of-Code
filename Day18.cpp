/* CARRY OR NOT? :
You are given positive integers A and B.
Let us calculate A+B (in decimal). If it does not involve a carry, print Easy; if it does, print Hard.
*/

#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

int main() {
    long long int a,b;
    cin>>a>>b;

    while(a!=0 && b!=0){
        int r1 = a%10;
        int r2 = b%10;

        if(r1+r2>=10){
            cout<<"Hard"<<endl;
            return 0;
        }
        a/=10;
        b/=10;
    }
    cout<<"Easy"<<endl;
    return 0;
}
