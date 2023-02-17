/* ALEXA AND BALLS:
There is a container with A cyan balls. Alexa will do the following operation as many times as he likes (possibly zero times):
Add B cyan balls and C red balls into the container.
Alexa's objective is to reach a situation where the number of cyan balls in the container is at most D times the number of red balls in it.

Determine whether the objective is achievable. If it is achievable, find the minimum number of operations needed to achieve it.
*/

#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

int main(){
    int a,b,c,d;
    cin>>a>>b>>c>>d;

    long count=0;
    long r=0;
    long x=a;

    if(b>=c*d){
        count=-1;
    }
    else{
        while(d*r<x){
            r +=c;
            x +=b;
            count++;
        }
    }
    cout<<count<<endl;
    return 0;
}
