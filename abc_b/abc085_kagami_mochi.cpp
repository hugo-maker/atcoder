#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
  int N;
  cin >> N;
  vector<int> d(N);
  for (int i = 0; i < N; ++i)
  {
    cin >> d[i];
  }

  sort(d.begin(), d.end());
  auto iter = unique(d.begin(), d.end());
  d.erase(iter, d.end());
  cout << d.size() << endl;

  return 0;
}
