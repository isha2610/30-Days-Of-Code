/* FRIENDS OR NOT:
The students of Newton School threw a grand party to celebrate their hard work and achievements. They danced and sang the night away, enjoying delicious food and creating memories that would last a lifetime.
There are N guests in the party and N-1 relationships are given. The guests are numbered 1, 2, N. The ith relationship depicts that guest ai and guest bi are friends.
Determine whether a guest exists or not who is a friend of all other guests.
Here, we only consider direct friendship.
*/

#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

int main() {
	int a,b,n;
    cin>>n;

    map<int,int>m;
    for(int i=1;i<=n;i++){
        m[i]=0;
    }

    for(int i=0;i<n-1;i++){
        cin>>a>>b;
        m[a]++;
        m[b]++;
    }

    for(auto i: m){
        if(i.second==n-1){
            cout<<"Yes"<<endl;
            return 0;
        }
    }
    cout<<"No"<<endl;
    return 0;
}
