#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int main()
{
  priority_queue<long long, vector<long long>, greater<long long>> pq;
  int q, p;
  long long x;
  long long sum = 0;
  cin >> q;
  for (int qq = 0; qq < q; ++qq)
  {
    cin >> p;
    if (p == 1)
    {
      cin >> x;
      pq.push(x - sum);
    }
    else if (p == 2)
    {
      cin >> x;
      sum += x;
    }
    else
    {
      x = pq.top();
      cout << x + sum << endl;
      pq.pop();
    }
  }

  return 0;
}
