#include <iostream>
#include <algorithm>
#include <string>
 
using namespace std;
 
void solve(int n, int m, int rb, int cb, int rd, int cd) {
    int bpos[] = { rb, cb };
    int dpos[] = { rd, cd };
    int floor[] = { n, m };
    int mvr = 1;
    int mvc = 1;
    int t = 0;
 
    if (bpos[0] == dpos[0] || bpos[1] == dpos[1]) {
        cout << t << '\n';
        return;
    } else {
        while (!(bpos[0] == dpos[0] || bpos[1] == dpos[1])) {
            if (bpos[0] == floor[0]) mvr = -1;
            if (bpos[0] == 1) mvr = 1;
            if (bpos[1] == floor[1]) mvc = -1;
            if (bpos[1] == 1) mvc = 1;
 
            bpos[0] += mvr;
            bpos[1] += mvc;
            ++t;
        }
    }
 
    cout << t << '\n';
}
 
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
 
    int t, n, m, rb, cb, rd, cd;
    cin >> t;
    ++t;
 
    while (--t) {
        cin >> n >> m >> rb >> cb >> rd >> cd;
        solve(n, m, rb, cb, rd, cd);
    }
 
    return 0;
}
