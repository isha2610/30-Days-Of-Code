/* ALEXA AND STRINGS:
Alexa loves to play with strings. She is given a string S consisting of lowercase English letters.
If 'a' appears in S, print the last index at which it appears; otherwise, print −1. (The index starts at 1. )
*/

#include <bits/stdc++.h> 
using namespace std;

int main(){
  
	  string s;
    cin>>s;
    int len = s.length();

    for(int i=len;i>=0;i--){
        if(s[i]=='a'){
            cout<<i+1<<endl;
            return 0;
        }
    }
    cout<<"-1"<<endl;
    return 0;
}
