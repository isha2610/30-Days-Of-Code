/* MULTIPLE OF 3:
Given is a positive integer N, where none of the digits is 0. Let k be the number of digits in N.
We want to make a multiple of 3 by erasing at least 0 and at most k−1 digits from N and concatenating the remaining digits without changing the order. 
Determine whether it is possible to make a multiple of 3 in this way. If it is possible, find the minimum number of digits that must be erased to make such a number.
*/

#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

int main() {
    long long int n;
    cin>>n;
    int arr[3]={0};
   
    while(n>0){
        int d=n%10;
        arr[d%3]++;
        n=n/10;
    }

    int k=arr[1]%3;
    int l=arr[2]%3;
    
    if(arr[0]==0 && (k!=l)) cout<<-1<<endl;
    else cout<<min(abs(arr[2]-arr[1]),abs(l-k))<<endl;
    
    return 0;
}
