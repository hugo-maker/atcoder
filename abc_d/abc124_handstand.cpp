#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
  int N, K;
  cin >> N >> K;
  string S;
  cin >> S;

  vector<int> nums;
  if (S[0] == '0')
  {
    nums.push_back(0);
  }

  for (int i = 0; i < S.size();)
  {
    int j = i;
    while (j < S.size() && S[j] == S[i])
    {
      ++j;
    }
    nums.push_back(j - i);
    i = j;
  }
  if (S.back() == '0')
  {
    nums.push_back(0);
  }

  vector<int> sums((int)nums.size() + 1, 0);
  for (int i = 0; i < nums.size(); ++i)
  {
    sums[i + 1] = sums[i] + nums[i];
  }

  int res = 0;
  for (int left = 0; left < sums.size(); left += 2)
  {
    int right = left + K * 2 + 1;
    if (right >= sums.size())
    {
      right = (int)sums.size() - 1;
    }
    res = max(res, sums[right] - sums[left]);
  }

  cout << res << endl;
  return 0;
}
