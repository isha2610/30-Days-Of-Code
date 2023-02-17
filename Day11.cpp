/* UNLUCKY SEVEN:
Mahi hates the number 7.
We are interested in integers without the digit 7 in both decimal and octal. How many such integers are there between 1 and N (inclusive)?
*/

#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

bool check(int i, int val){
    while(i>0){
        if(i%val==7)    return false;
        i/=val;
    }
    
    return true;
}

int main() {
    int n;
    cin>>n;

    int ans=0;
    for(int i=1;i<=n;i++){
        if(check(i,10) && check(i,8))
        ans++;
    }
    cout<<ans<<endl;

    return 0;
}
