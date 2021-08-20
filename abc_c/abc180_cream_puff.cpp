#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
  long long N;
  cin >> N;

  vector<long long> v;
  for (long long i = 1; i * i <= N; ++i)
  {
    if (N % i == 0)
    {
      v.push_back(i);
      if (i != N / i)
      {
        v.push_back(N / i);
      }
    }
  }

  sort(v.begin(), v.end());
  for (int i = 0; i < (int)v.size(); ++i)
  {
    cout << v[i] << endl;
  }

  return 0;
}
