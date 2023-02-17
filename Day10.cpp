/* BACTERIAS:
There are A Bacterias.
Each time Jerry shouts, the bacterias multiply by K times.
In order to have B or more slimes, at least how many times does Jerry need to shout?
*/

#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

int main() {
	long long int a,b,k;
    cin>>a>>b>>k;
    int count=0;

    while(a<b){
        a *=k;
        count++;
    }
    cout<<count;
    return 0;
}
