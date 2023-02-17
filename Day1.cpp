/* Mall and Coupons:
Newton went to a mall. There are N items in a shop. For each i=1, 2, …, N, the price of the i- th item is Ai Rs.
Newton has K coupons. Each coupon can be used on one item. You can use any number of coupons, possibly zero, on the same item.
Using k coupons on an item with a price of a Rs allows him to buy it for max{a−kX, 0} Rs.
Print the minimum amount of money Newton needs to buy all the items.
*/

#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

int main() {
	long long n,k,x;
    cin>>n>>k>>x;

    vector<long long>items;
    for(long long i=0;i<n;i++){
        long long a;
        cin>>a;
        items.push_back(a);
    }

    sort(items.rbegin(),items.rend());
    for(long long i=0;i<n;i++){ 
        if(items[i]>x){
            long long value = items[i];
            long long times = items[i]/x;

            if(times<=k){
                k-=times;
                items[i] -= times*x;
            }
            else{
                items[i] -= k*x;
                k=0;
            }
        }
    }

    long long min=0;
    sort(items.rbegin(),items.rend());
    
    for(long long i=k;i<n;i++){
        min += items[i];
    }
    cout<<min<<endl;
    
    return 0;
}
