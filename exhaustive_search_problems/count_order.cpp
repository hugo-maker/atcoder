#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int main()
{
  int n;
  cin >> n;

  vector<int> N;
  vector<int> P(n);
  vector<int> Q(n);

  for (int i = 1; i <= n; ++i)
  {
    N.push_back(i);
  }
  for (int i = 0; i < n; ++i)
  {
    cin >> P[i];
  }
  for (int i = 0; i < n; ++i)
  {
    cin >> Q[i];
  }

  int count = 1;
  int a = 0;
  int b = 0;

  do 
  {
    bool is_equal = equal(N.begin(), N.end(), P.begin(), P.end());
    if (is_equal)
    {
      a = count;
    }

    is_equal = equal(N.begin(), N.end(), Q.begin(), Q.end());
    if (is_equal)
    {
      b = count;
    }

    ++count;
  } while (next_permutation(N.begin(), N.end()));

  cout << abs(a - b) << endl;

  return 0;
}
