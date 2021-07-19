#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
  int N;
  cin >> N;
  vector<int> s(N);
  int sum = 0;
  for (int i = 0; i < N; ++i)
  {
    cin >> s[i];
    sum += s[i];
  }

  sort(s.begin(), s.end());

  for (int i = 0; i < N && sum % 10 == 0; ++i)
  {
    if ((sum - s[i]) % 10 != 0)
    {
      sum -= s[i];
      break;
    }
  }

  if (sum % 10 == 0)
  {
    cout << 0 << endl;
  }
  else
  {
    cout << sum << endl;
  }
  return 0;
}
