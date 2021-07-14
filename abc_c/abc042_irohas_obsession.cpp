#include <iostream>
#include <set>
using namespace std;

set<int> D;
bool is_valid(int n)
{
  while (n)
  {
    if (D.count(n % 10))
    {
      return false;
    }
    n /= 10;
  }

  return true;
}


int main()
{
  int N, K;
  cin >> N >> K;
  for (int i = 0; i < K; ++i)
  {
    int d;
    cin >> d;
    D.insert(d);
  }

  for (int n = N;; ++n)
  {
    if (is_valid(n))
    {
      cout << n << endl;
      return 0;
    }
  }
}
