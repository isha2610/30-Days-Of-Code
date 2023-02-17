/* MAXIMIZE PRODUCT:
Given are integers a, b, c, and d. If x and y are integers and a≤x≤b and c≤y≤d hold, what is the maximum possible value of x*y?
*/

#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

int main() {
    long long int a,b,c,d;
    cin>>a>>b>>c>>d;

    long long int x = a*c;
    long long int y = a*d;
    long long mx = max(x,y);

    x = b*c;
    y = b*d;

    x = max(x,y);
    mx = max(x,mx);
    cout<<mx<<endl;
    return 0;
}
