/**CODE NAME : Wrong Subtraction
CODE NO : 977A
**/
#include<iostream>

using namespace std;


int main() {
	int x,y;

	cin >> x >> y;

	while(y--) {

		if ((x % 10) == 0) {
			x = x / 10;
		} else {
			x--;
		}
	}

	cout << x <<endl;
	return 0;
}

