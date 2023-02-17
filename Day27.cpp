/* NUMBER GAMES:
You are given an integer N. Do the following operation K times on it and print the resulting integer.
If N is a multiple of 200, divide it by 200. Otherwise, see N as a string and append 200 to the end of it.
For example, 7 would become 7200, and 1234 would become 1234200.
*/

#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

int main() {
	long long int n,k;
    cin>>n>>k;

    while(k!=0){
        if(n%200==0){
            n/=200;
        }
        else{
            n = n*1000 + 200;
        }
        k--;
    }
    cout<<n<<endl;
    return 0;
}
