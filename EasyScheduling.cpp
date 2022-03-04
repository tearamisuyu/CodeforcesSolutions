#include <iostream>
#define ll long long
 
using namespace std;
 
void solve(int h, int p) {
    ll nodes = 2;
    ll ready = 1;
    ll moments = 0;
 
    nodes = pow(nodes, h) - 1;
 
    while (nodes > 0) {
        if (p <= ready) {
            moments += nodes / p;
            if (nodes % p != 0) ++moments;
            nodes = 0;
        } else {
            ++moments;
            if (p > ready) {
                nodes -= ready;
                ready *= 2;
            } else {
                nodes -= p;
                ready = 2 * p;
            }
        }
    }
 
    cout << moments << '\n';
}
 
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
 
    int t, h, p;
    cin >> t;
    ++t;
    while (--t) {
        cin >> h >> p;
        solve(h, p);
    }
 
    return 0;
}
