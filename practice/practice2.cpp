#include<iostream>
#include<math.h>
using namespace std;
int main() {
	int t;
	cin >> t;
	while (t--) {
		int x1, y1, r1, x2, y2, r2;
		cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;
		double dist = sqrt(pow((x1 - x2),2) + pow((y1 - y2),2));

		if ( r2-r1 > dist || r1-r2 >dist  ) {
			cout <<"I" << endl;
		}else if ( r2-r1 == dist || r1-r2 == dist) {
			cout << "E" << endl;
		}else {
			cout << "O" << endl;
		}
	}
	return 0;
}