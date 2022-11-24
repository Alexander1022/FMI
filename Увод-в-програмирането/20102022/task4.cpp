#include <iostream>
using namespace std;

// ax + b = 0.

int main()
{
    int a,b;
    cin >> a >> b;
    
    int x = -b/a;

    if(x != 0) {
        cout << x << endl;
    } else {
        cout << "INF" << endl;
    }

    return 0;
}
