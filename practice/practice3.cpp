#include <iostream>
using namespace std;

int main() {
  int a, b, sum = 0;
  
  cin >> a;
  cin >> b;

  for (int i = a; i <= b; i++) {
    sum = sum + i*i;
  }
    cout << sum;
  
  return 0;
}