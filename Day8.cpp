/* CONTIGUOUS SUBSTRING:
You are given strings S and T consisting of lowercase English letters. Determine whether T is a (contiguous) substring of S.

A string Y is said to be a (contiguous) substring of X if and only if Y can be obtained by performing the operation below on X zero or more times.

Do one of the following.
i) Delete the first character in X.
ii) Delete the last character in X.
For instance, the tag is a (contiguous) substring of voltage, while ace is not a (contiguous) substring of atcoder.
*/

#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

string check_substring(string S, string T) {
    if (S.find(T) != std::string::npos) {
        return "Yes";
    } 
    else {
        for (int i = 0; i <= S.length() - T.length(); i++) {
            if (T == S.substr(i, T.length())) {
                return "Yes";
            }
        }
    }
    return "No";
}

int main() {
    string S, T;
    cin >> S >> T;
    cout << check_substring(S, T) <<endl;
    return 0;
}
