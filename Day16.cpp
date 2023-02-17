/* PREFIX STRINGS:
You are given two strings S and T consisting of lowercase English letters. Determine if S is a prefix of T.
*/

#include <bits/stdc++.h>
using namespace std;

int main(){
  	string s,t;
    cin>>s>>t;
  
    if(t.find(s)==0)   cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
  
    return 0;
}
