#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
  int N = 0;
  cin >> N;
  vector<int> mochi(N);
  for (int i = 0; i < N; ++i)
  {
    cin >> mochi[i];
  }

  sort(mochi.begin(), mochi.end());
  auto result = unique(mochi.begin(), mochi.end());
  mochi.erase(result, mochi.end());

  cout << mochi.size() << endl;

  return 0;
}
