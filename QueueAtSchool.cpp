#include <iostream>
#include <string>
 
using namespace std;
 
void solve(int n, int t, string s) {
    for (int i = 0; i < t; i++) {
        for (int j = 0; j < s.length() - 1; j++) {
            if (s[j] == 'B' && s[j + 1] == 'G') {
                s[j] = 'G';
                s[j + 1] = 'B';
                ++j;
            }
        }
    }
 
    cout << s << '\n';
}
 
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
 
    int n, t;
    string s;
 
    cin >> n >> t;
    cin >> s;
    solve(n, t, s);
 
    return 0;
}
