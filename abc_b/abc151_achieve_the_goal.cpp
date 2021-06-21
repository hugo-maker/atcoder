#include <iostream>
#include <vector>
using namespace std;

int main()
{
  int N, K, M;
  cin >> N >> K >> M;
  
  int sum = 0;
  int temp = 0;
  for (int i = 0; i < N - 1; ++i)
  {
    cin >> temp;
    sum += temp;
  }

  if (sum + K < N * M)
  {
    cout << -1 << endl;
    return 0;
  }
  else
  {
    for (int i = 0; i <= K; ++i)
    {
      if (sum + i >= N * M)
      {
        cout << i << endl;
        return 0;
      }
    }
  }
}
