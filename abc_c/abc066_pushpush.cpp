#include <iostream>
#include <vector>
using namespace std;

int main()
{
  long long n;
  cin >> n;
  vector<long long> a(n);
  for (int i = 0; i < n; ++i)
  {
    cin >> a[i];
  }

  for (int i = n - 1; i >= 0; i -= 2)
  {
    if (i != n - 1)
    {
      cout << " ";
    }
    cout << a[i];
  }

  if (n % 2 == 1)
  {
    for (int i = 1; i < n - 1; i += 2)
    {
      if (i != 2)
      {
        cout << " ";
      }
      cout << a[i];
    }
  }
  else
  {
    for (int i = 0; i < n - 1; i += 2)
    {
      cout << " ";
      cout << a[i];
    }
  }

  cout << endl;
  return 0;
}
