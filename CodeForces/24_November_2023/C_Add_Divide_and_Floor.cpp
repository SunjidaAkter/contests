#include <bits/stdc++.h>
#include <iostream>
#include <vector>

using namespace std;
#define ll long long

pair<int, vector<ll>> min_operations(int n, vector<ll>& a) {
    if (unordered_set<ll>(a.begin(), a.end()).size() == 1) {
        return {0, {}};
    }

    vector<ll> x_values;
    for (int i = 1; i < n; ++i) {
        ll x = (a[i] - a[0]) / i;
        x_values.push_back(x);
    }

    return {static_cast<int>(x_values.size()), x_values};
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        vector<ll> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }

        auto [ops, x_values] = min_operations(n, a);

        cout << ops << "\n";
        for (auto x : x_values) {
            cout << x << " ";
        }
        cout << "\n";
    }

    return 0;
}
