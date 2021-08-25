#include <iostream>
#include <vector>
#include <cmath>
#include <string>
using namespace std;

int main()
{
  vector<long long> v(17, 0);
  for (int i = 4; i <= 16; ++i)
  {
    v[i] = v[i - 1] + ((i - 1) / 3) * (pow(10, i - 1) * 9);
  }

  long long N;
  cin >> N;
  string s = to_string(N);

  long long ans = 0;
  long long digit = s.size() - 1;
  ans += v[digit];
  ans += (N - pow(10, digit) + 1) * (digit / 3);

  cout << ans << endl;

  return 0;
}
