/* MATCHING STRINGS:
You are given two strings S and T. Determine whether it is possible to make S and T equal by doing the following operation at most once:
Choose two adjacent characters in S and swap them.
Note that it is allowed to choose not to do the operation.
*/

#include<bits/stdc++.h> // header file includes every Standard library
using namespace std;

int main() {
	string s,t;
    cin>>s>>t;

    int count=0;
    for(int i=0;i<s.length()-1;i++){
        if(s[i]==t[i] || s[i]==t[i+1]){
            count++;
        }
    }

    if(count == s.length()-1){
        cout<<"Yes";
    }
    else cout<<"No";

    return 0;
}
