/* CARDS SHUFFLE:
We have 4 cards with an integer 1 written on it, 4 cards with 2, …, 4 cards with N, for a total of 4N cards.
Alexa shuffled these cards, removed one of them, and gave you a pile of the remaining 4N−1 cards. The i- th card (1≤i≤4N−1) of the pile has an integer Ai written on it.

Find the integer written on the card removed by Alexa.
*/

#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

int main() {
    int n;
    cin>>n;

    vector<int>count(n+1);
    for(int i=0;i<4*n-1;++i){
        int a;
        cin>>a;
        count[a]+=1;
    }

    for(int i=1;i<=n;++i){
        if(count[i]==3){
            cout<<i<<endl;
            break;
        }
    }
    return 0;
}
