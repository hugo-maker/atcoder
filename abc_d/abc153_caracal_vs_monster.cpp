#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;

int main()
{
  long long H;
  cin >> H;
  vector<long long> v;
  for (int i = 0; i <= 40; ++i)
  {
    v.push_back(pow(2, i));
  }

  auto iter = upper_bound(v.begin(), v.end(), H);
  cout << *iter - 1 << endl;
  return 0;
}
