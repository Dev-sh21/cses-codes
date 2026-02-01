#include <iostream>
#include<vector>
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

     vector<int> periods;
    int x = lps[n - 1];

    while (x > 0) {
        periods.push_back(n - x);
        x = lps[x - 1];
    }

    periods.push_back(n);
    //reverse(periods.begin(), periods.end());

    for (int p : periods)
        cout << p << " ";

    return 0;
}