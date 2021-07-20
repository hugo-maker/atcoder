#include <iostream>
#include <deque>
using namespace std;

int main()
{
  int n;
  cin >> n;
  deque<int> ans;
  int a;
  for (int i = 0; i < n; ++i)
  {
    cin >> a;
    if (i % 2 == (n - 1) % 2)
    {
      ans.push_front(a);
    }
    else
    {
      ans.push_back(a);
    }
  }

  for (int i = 0; i < n; ++i)
  {
    if (i > 0)
    {
      cout << " ";
    }
    cout << ans[i];
  }
  cout << endl;
  return 0;
}
