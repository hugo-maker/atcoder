#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
  int A, B, K;
  cin >> A >> B >> K;

  vector<int> res;
  for (int i = A, count = 1; i <= B && count <= K; ++i, ++count)
  {
    res.push_back(i);
  }
  for (int i = B, count = 1; i >= A && count <= K; --i, ++count)
  {
    res.push_back(i);
  }

  sort(res.begin(), res.end());
  auto iter = unique(res.begin(), res.end());
  res.erase(iter, res.end());

  for (auto iter = res.begin(); iter != res.end(); ++iter)
  {
    cout << *iter << endl;
  }

  return 0;
}
