#include <iostream>
#include <vector>
using namespace std;

int main()
{
  int N;
  cin >> N;
  vector<int> H(N);
  for (int i = 0; i < N; ++i)
  {
    cin >> H[i];
  }

  int ans = H[0];
  for (int i = 1; i < N; ++i)
  {
    if (ans < H[i])
    {
      ans = H[i];
    }
    else
    {
      break;
    }
  }
  
  cout << ans << endl;
  return 0;
}
