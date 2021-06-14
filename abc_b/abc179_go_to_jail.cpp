#include <iostream>
#include <vector>
using namespace std;

int main()
{
  int N;
  cin >> N;
  vector<pair<int, int>> D(N);
  for (int i = 0; i < N; ++i)
  {
    cin >> D[i].first >> D[i].second;
  }

  int count = 0;
  bool ok = false;
  for (int i = 0; i < N; ++i)
  {
    if (D[i].first == D[i].second)
    {
      ++count;
      if (count == 3)
      {
        ok = true;
        break;
      }
    }
    else
    {
      count = 0;
    }
  }

  if (ok)
  {
    cout << "Yes" << endl;
  }
  else
  {
    cout << "No" << endl;
  }

  return 0;
}
