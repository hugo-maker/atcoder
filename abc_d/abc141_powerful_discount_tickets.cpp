#include <iostream>
#include <queue>
using namespace std;

int main()
{
  int N, M;
  cin >> N >> M;

  priority_queue<long long> que;
  for (int i = 0; i < N; ++i)
  {
    long long A;
    cin >> A;
    que.push(A);
  }
  for (int i = 0; i < M; ++i)
  {
    long long tmp = que.top();
    que.pop();
    que.push(tmp / 2);
  }
  long long ans = 0;
  while (!que.empty())
  {
    ans += que.top();
    que.pop();
  }
  cout << ans << endl;
  return 0;
}
