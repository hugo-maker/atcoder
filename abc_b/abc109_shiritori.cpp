#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
  int N;
  cin >> N;
  vector<string> W;
  string now;
  string prev;
  bool ok = true;
  for (int i = 0; i < N; ++i)
  {
    cin >> now;
    W.push_back(now);
    if (i > 0)
    {
      char & a = now.front();
      char & b = prev.back();
      if (a != b)
      {
        ok = false;
      }
    }
    prev = now;
  }

  sort(W.begin(), W.end());
  auto iter = unique(W.begin(), W.end());
  W.erase(iter, W.end());
  if (W.size() != N)
  {
    ok = false;
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
