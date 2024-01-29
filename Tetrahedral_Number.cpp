Problem Statement
You are given an integer 
N.

Print all triples of non-negative integers 
(x,y,z) such that 
x+y+z≤N in ascending lexicographical order.

My Code--

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int tccc = 1;
    //cin >> tccc;

    while (tccc--) {
        int n;
        cin >> n;

        vector<tuple<int, int, int>> nums;

        for (int i = 0; i <= n; i++) {
            for (int j = 0; j <= n; j++) {
                for (int k = 0; k <= n; k++) {
                    if (i + j + k <= n) {
                        nums.emplace_back(i, j, k);
                    }
                }
            }
        }

        sort(nums.begin(), nums.end());

        for (const auto& it : nums) {
            cout << get<0>(it) << " " << get<1>(it) << " " << get<2>(it) << endl;
        }
    }

    return 0;
}
