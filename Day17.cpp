/* REVERSE STRINGS:
You are given integers L, R, and a string S consisting of lowercase English letters.
Print this string after reversing (the order of) the L-th through R-th characters.
*/

#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

int main() {
    int l,r;
    string s;
    cin>>l>>r;
    cin>>s;

    for(int i=0;i<l-1;i++){
        cout<<s[i];
    }

    for(int i=r-1;i>=l-1;i--){
        cout<<s[i];
    }
    
    for(int i=r;i<s.length();i++){
        cout<<s[i];
    }

    return 0;
}
