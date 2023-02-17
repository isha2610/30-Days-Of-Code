/* EDWARD AND MATHS COMPETITION:
Edward participated in one maths competition. 
He was asked to find the number of ways to choose a pair of an even number and an odd number from the positive integers between 1 and N (inclusive).
The order does not matter. */

#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

int main() {
	int n;
    cin>>n;
    
    int even=0, odd=0;
    for(int i=1;i<=n;i++){
        if(i%2==0){
            even++;
        }
        else odd++;
    }
    cout<<even*odd<<endl;
    return 0;
}
