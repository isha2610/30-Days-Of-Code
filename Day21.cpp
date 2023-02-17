/* BOB AND DIGITS:
Bob loves to play with numbers. He has an integer N. Find the number of digits that N has in base K.
*/

#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

int main() {
	int n,k,count=0;
    cin>>n>>k;

    while(n!=0){
        n /=k;
        count++;
    }
    cout<<count<<endl;
    return 0;
}
