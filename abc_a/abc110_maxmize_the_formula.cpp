#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
  int A, B, C;
  cin >> A >> B >> C;
  cout << max({10 * A + B + C, 10 * B + A + C, 10 * C + A + B}) << endl;

  return 0;
}
