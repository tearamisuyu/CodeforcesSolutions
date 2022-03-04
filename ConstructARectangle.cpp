#include <iostream>
#include <algorithm>
 
using namespace std;
 
void solve(int l1, int l2, int l3) {
    if (!(l1 == l2 || l1 == l3 || l2 == l3)) {
        int maxx = max(l1, max(l2, l3));
        int minn = min(l1, min(l2, l3));
 
        if ((maxx - minn == l1 && minn != l1) || (maxx - minn == l2 && minn != l2) || (maxx - minn == l3 && minn != l3)) {
            cout << "YES" << '\n';
        } else {
            cout << "NO" << '\n';
        }
    } else {
        if ((l1 == l2 && l3 % 2 == 0) || (l1 == l3 && l2 % 2 == 0) || (l2 == l3 && l1 % 2 == 0)) {
            cout << "YES" << '\n';
        } else {
            cout << "NO" << '\n';
        }
    }
}
 
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
 
    int t, l1, l2, l3;
    cin >> t;
 
    do {
        cin >> l1 >> l2 >> l3;
        solve(l1, l2, l3);
    } while (--t);
 
    return 0;
}
