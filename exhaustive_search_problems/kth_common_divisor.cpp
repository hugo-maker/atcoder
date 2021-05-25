#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
  int A, B, K;
  cin >> A >> B >> K;

  vector<int> common_divisors;
  for (int i = 1; i <= A && i <= B; ++i)
  {
    if (A % i == 0 && B % i == 0)
    {
      common_divisors.push_back(i);
    }
  }

  sort(common_divisors.begin(), common_divisors.end(), greater<int>{});

  cout << common_divisors[K - 1] << endl;

  return 0;
}
