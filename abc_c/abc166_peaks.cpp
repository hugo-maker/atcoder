#include <iostream>
#include <vector>
using namespace std;

int main()
{
  int N, M;
  cin >> N >> M;
  vector<pair<int, bool>> H(N, {0, true});
  for (int i = 0; i < N; ++i)
  {
    cin >> H[i].first;
  }

  int A, B;
  for (int i = 0; i < M; ++i)
  {
    cin >> A >> B;
    --A, --B;
    if (H[A].first < H[B].first)
    {
      H[A].second = false;
    }
    else if (H[B].first < H[A].first)
    {
      H[B].second = false;
    }
    else
    {
      H[A].second = false;
      H[B].second = false;
    }
  }

  int ans = 0;
  for (int i = 0; i < N; ++i)
  {
    if (H[i].second)
    {
      ++ans;
    }
  }

  cout << ans << endl;
  return 0;
}
