#include <iostream>
#include <algorithm>
#include <string>
 
using namespace std;
 
void solve(string s) {
    int o = 0;
    int z = 0;
 
    for (char const& c : s) if (c == '1') ++o; else ++z;
    if (o == z) cout << o-1 << '\n'; else cout << (o > z ? z : o) << '\n';
}
 
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
 
    int t;
    string s;
    cin >> t;
 
    while (t--) {
        cin >> s;
        solve(s);
    }
 
    return 0;
}
