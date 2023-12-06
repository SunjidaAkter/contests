#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    set<int> st;
    vector<int> b;

    for (int i = n - 1; i >= 0; --i) {
        if (!st.count(a[i])) {
            b.push_back(a[i]);
            st.insert(a[i]);
        }
    }

    reverse(b.begin(), b.end());

    for (int i = 0; i < b.size(); ++i) {
        cout << b[i] << " ";
    }

    cout << endl;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}
