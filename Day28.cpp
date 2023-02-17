/* MINIMUM REPLACEMENTS:
Given are two strings S and T.
Let us change some of the characters in S so that T will be a substring of S.
At least how many characters do we need to change?
Here, a substring is a consecutive subsequence. For example, xxx is a substring of yxxxy, but not a substring of xxyxx.
*/

#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

int main() {
	string s,t;
    cin>>s>>t;
    
    long long ans = INT_MAX;
    for(int i=0;i<s.size()-t.size()+1;i++){
        string x = s.substr(i,t.size());
        long long count=0;
        for(int j=0;j<t.size();j++){
            if(t[j]!=x[j]){
                count++;
            }
        }
        ans = min(ans,count);
    }

    cout<<ans<<endl;

    return 0;
}
