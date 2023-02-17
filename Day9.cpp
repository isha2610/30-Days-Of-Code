/* BOB AND HAMMER:
Bob is at the origin of a number line. He wants to reach a goal at coordinate X.
There is a wall at coordinate Y, which Bob cannot go beyond at first. However, after picking up a hammer at coordinate Z, he can destroy that wall and pass through.
Determine whether Bob can reach the goal. If he can, find the minimum total distance he needs to travel to do so. */

#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

int main() {
    int x,y,z;
    cin>>x>>y>>z;

    if(x>0){
        if(y>x || y<0){
            cout<<x<<endl;
        }
        else{
            if(z>y){
                cout<<"-1"<<endl;
            }
            else{
                if(z>0){
                    cout<<x<<endl;
                }
                else{
                    cout<<2*abs(z) + abs(x)<<endl;
                }
            }
        }
    }
    else{
        if(y>0 || y<x){
            cout<<abs(x)<<endl;
        }
        else{
            if(z<y){
                cout<<"-1"<<endl;
            }
            else{
                if(z<0){
                    cout<<abs(x)<<endl;
                }
                else{
                    cout<<2*abs(z) + abs(x)<<endl;
                }
            }
        }
    }

    return 0;
}
