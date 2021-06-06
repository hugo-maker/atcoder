#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
  string S;
  cin >> S;

  rotate(S.begin(), S.begin() + 1, S.end());
  cout << S << endl;

  return 0;
}
