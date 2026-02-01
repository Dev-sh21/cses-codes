#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin >> s;
    int n = s.size();

    vector<int> lps(n, 0);


    for (int i = 1, len = 0; i < n; ) {
        if (s[i] == s[len]) {
            lps[i++] = ++len;
        } else {
            if (len != 0) {
                len = lps[len - 1];
            } else {
                lps[i++] = 0;
            }
        }
    }


    vector<int> borders;
    int x = lps[n - 1];
    while (x > 0) {
        borders.push_back(x);
        x = lps[x - 1];
    }

    reverse(borders.begin(), borders.end());

    for (int len : borders) {
        cout << len << " ";
    }

    return 0;
}