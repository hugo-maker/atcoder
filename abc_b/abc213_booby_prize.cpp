#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
  int N;
  cin >> N;
  vector<pair<int, int>> v;
  for (int i = 0; i < N; ++i)
  {
    int A;
    cin >> A;
    v.push_back({A, i});
  }
  sort(v.begin(), v.end(), greater<pair<int, int>>{});
  cout << v[1].second + 1 << endl;
  return 0;
}
