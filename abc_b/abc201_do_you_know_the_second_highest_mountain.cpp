#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

int main()
{
  int N;
  cin >> N;
  vector<pair<int, string>> v(N);
  for (int i = 0; i < N; ++i)
  {
    cin >> v[i].second >> v[i].first;
  }

  sort(v.begin(), v.end());

  auto iter = v.end() - 2;
  cout << (*iter).second << endl;

  return 0;
}
