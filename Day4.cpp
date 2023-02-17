/* EVEN NUMBERS - 2
Newton loves EVEN numbers.
You are given two integers N and M. Generate 5 unique even numbers for Newton between N and M (excluding both). */

#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

int main() {
    int n,m;
    cin>>n>>m;

    int count=0;

    for(int i=n+1;i<m; i++){
        if(count==5) break;
        if(i%2==0){
            cout<<i<<" ";
            count++;
        } 

    }
    
    return 0;
}
