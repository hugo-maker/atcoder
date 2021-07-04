#include <iostream>
#include <cmath>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
  string s, t;
  cin >> s >> t;
  double res = stoi(s + t);

  if (sqrt(res) == ceil(sqrt(res)))
  {
    cout << "Yes" << endl;
  }
  else
  {
    cout << "No" << endl;
  }

  return 0;
}
