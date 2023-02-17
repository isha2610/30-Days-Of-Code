/* CHIPMUNK AND NUTS:
There are N trees. The ith tree bears Ai nuts. Chipmunk will harvest nuts from the trees in the following manner:
From a tree with 10 or fewer nuts, she does not take nuts.
From a tree with more than 10 nuts, she takes all but 10 nuts.
Find the total number of nuts Chipmunk will take from the trees.
*/

#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

int main() {
	int n;
    cin>>n;

    int a[n],totalNuts=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(a[i]>10){
            totalNuts += (a[i]-10);
        }
    }
    cout<<totalNuts<<endl;
    return 0;
}
