#include <iostream>
#include <set>
#include <cmath>
using namespace std;

int main()
{
  long long N;
  cin >> N;

  set<long long> s;
  for (long long a = 2; a * a <= N; ++a)
  {
    if (s.count(a))
    {
      continue;
    }
    for (long long b = 2; pow(a, b) <= N; ++b)
    {
      s.insert(pow(a, b));
    }
  }

  cout << N - s.size() << endl;
  return 0;
}
