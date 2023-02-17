/* STRING SEQUENCE:
You are given a sequence of 26 integers P=(P1, P2, …, P26 ) consisting of integers from 1 through 26.
It is guaranteed that all elements in P are distinct.
Print a string S of length 26 that satisfies the following condition. 
For every i (1≤i≤26), the i- th character of S is the lowercase English letter that comes Pi- th in alphabetical order.
*/

#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

int main() {
    int n;
    char m;

	for(int i=0;i<26;i++){
        cin>>n;
        m=0;
        m += char(97+n-1);
        cout<<m; 
    }
    return 0;
}
