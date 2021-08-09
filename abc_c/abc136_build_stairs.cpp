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

  int max_h = H[0];
  bool can = true;
  for (int i = 1; i < N; ++i)
  {
    if (H[i] > max_h)
    {
      max_h = H[i];
    }
    else
    {
      if (H[i] < max_h - 1)
      {
        can = false;
        break;
      }
    }
  }

  if (can)
  {
    cout << "Yes" << endl;
  }
  else
  {
    cout << "No" << endl;
  }

  return 0;
}
