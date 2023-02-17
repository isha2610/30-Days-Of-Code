/* MEX:
You are given a sequence of length N consisting of integers:
A=(A1, A2,...., AN)
Find the smallest non-negative integer not in (A1, A2,....,AN).
*/

#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

int main() {
	int n,x;
    cin>>n;

    vector<int>a;

    for(int i=0;i<n;i++){
        cin>>x;
        a.push_back(x);
    }

    unordered_set<int>s;
    for(int i=0;i<n;i++){
        s.insert(a[i]);
    }

    for(int i=0;i<n;i++){
        if(s.find(i)==s.end()){
            cout<<i<<endl;
            break;
        }
    }
    return 0;
}
