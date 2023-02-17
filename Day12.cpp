/* PLAY WITH 0's AND 2's:
Alexa Loves to play with 0's and 2's. 
Among the positive integers that consist of 0's and 2's when written in base 10, he wanted to find the Kth smallest integer.
Help him find that. */

#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

int main() {
	long long int k;
    cin>>k;

    string s="";
    while(k){
        if(k%2){
            s+="2";
        }
        else{
            s+="0";
        }
        k/=2;
    }
    reverse(s.begin(),s.end());
    cout<<s<<endl;
    return 0;
}
