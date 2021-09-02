#include <iostream>
#include <set>
#include <map>
using namespace std;

int main()
{
  int N;
  cin >> N;
  map<int, int> m;
  set<int> s;
  for (int i = 0; i < N; ++i)
  {
    int A;
    cin >> A;
    s.insert(A);
    ++m[A];
  }

  int cnt = 0;
  for (auto num : m)
  {
    cnt += num.second - 1;
  }

  int ans = s.size();
  if (cnt % 2 == 1)
  {
    --ans;
  }

  cout << ans << endl;
  return 0;
}
