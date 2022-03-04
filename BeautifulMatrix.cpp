#include <iostream>
 
using namespace std;
 
int *get_position(int m[5][5]) {
    for (int y = 0; y < 5; ++y) {
        for (int x = 0; x < 5; ++x) {
            if (m[y][x] == 1) {
                int position[2] = { y+1, x+1 };
                return position;
            }
        }
    }
}
 
void solve(int m[5][5]) {
    int *position = get_position(m);
    int moves = 0;
 
    while (position[0] < 3) {
        ++moves;
        ++position[0];
    }
    while (position[0] > 3) {
        ++moves;
        --position[0];
    }
    while (position[1] < 3) {
        ++moves;
        ++position[1];
    }
    while (position[1] > 3) {
        ++moves;
        --position[1];
    }
 
    cout << moves;
}
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
 
    int m[5][5];
 
    for (int y = 0; y < 5; ++y) {
        for (int x = 0; x < 5; ++x) {
            cin >> m[y][x];
        }
    }
 
    solve(m);
 
    return 0;
}
