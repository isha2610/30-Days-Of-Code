/* BOB AND EXAMS:
There was an exam consisting of three problems worth 1, 2, and 4 points.
Alexa, Edward, and Bob took this exam. Alexa scored A points, and Edward scored B points.
Bob solved all of the problems solved by at least one of Alexa and Edward and failed to solve any of the problems solved by, neither of them.
Find Bob's score.
It can be proved that Bob's score is uniquely determined under the Constraints of this problem.
*/

#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

int main() {
	int A,B;
    cin>>A>>B;
    
    cout<<(A|B)<<endl;
    return 0;
}
