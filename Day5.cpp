/* EMILY AND TRIPLETS:
Emily was playing with triplets.
She was excited to find out how many triples of non-negative integers (a, b, c) satisfy a+b+c≤S and a×b×c≤T, where S & T are non-negative integers.
*/

#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

int main() {
    int s,t;
    cin>>s>>t;

    int c=0;
    for(int i=0;i<=s;i++){
        for(int j=0;j<=s;j++){
            for(int k=0;k<=s;k++){
                if(i*j*k<=t && (i+j+k)<=s){
                    c++;
                }
            }
        }
    }
    cout<<c;
    return 0;
}
