/* ABHAS AND NUMBERS:
Abhas likes to play with numbers. He is given integers N and K. 
Find the number of triples (a, b, c) of positive integers not greater than N such that a+b, b+c, and c+a are all multiples of K. 
The order of a, b, and c does matter, and some of them can be the same.
*/

#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

long long int triplets(long long int N, long long int K){
    if(K%2==0){
        long long int x = N/K;
        long long int y = (N + (K/2))/K;

        return x*x*x + y*y*y;
    }
    else{
        long long int x = N/K;
        return x*x*x;
    }
}

int main() {
    long long int N,K,no;
    cin>>N>>K;

    no = triplets(N,K);   
    cout<<no;
    return 0;
}
