/**CODE NAME : Soldier and Bananas
CODE NO : 546A
**/
#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int a, b, c, soln;
    cin >> a >> b >> c;
    soln = a * c * (c+1) / 2;
    cout << max(0, soln - b) << "\n";
    return 0;
}
