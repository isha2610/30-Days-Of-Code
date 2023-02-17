/* SHIFTED STRING:
We have a string S consisting of uppercase English letters. Additionally, an integer N will be given.
Shift each character of S by N in alphabetical order (see below), and print the resulting string.

We assume that A follows Z. For example, shifting A by 2 results in C (A → B → C), and shifting Y by 3 results in B (Y → Z → A → B).
*/

#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

int main() {
    int a;
    string b;
    cin>>a>>b;

    for(int i=0;i<b.size();i++){
        if(b[i]+a>90){
        cout<<char(b[i]+a-26);
        }
        else cout<<char(b[i]+a);
    }
    
    cout<<endl;
    return 0;
}
