/* MAXIMUM SUM CARDS:
We have A cards, each of which has an integer 1 written on it. Similarly, we also have B cards with 0s and C cards with −1s.
We will pick up K among these cards. What is the maximum possible sum of the numbers written on the cards chosen?
*/

#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

int main() {
	int a,b,c,k;
    cin>>a>>b>>c>>k;

    int x = min(k,a);
    k = max(k-a,0);
    k = max(k-b,0);
    x -= k;
    cout<<x<<endl;
    return 0;
}
