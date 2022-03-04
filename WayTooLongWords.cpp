#include <iostream>
 
using namespace std;
 
int main()
{
    int w;
    
    cin >> w;
    
    if (w % 2 == 0 && w >= 1 && w <= 100 && w > 3) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    
    return 0;
}
