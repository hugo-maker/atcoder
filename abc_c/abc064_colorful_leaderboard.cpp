#include <iostream>
#include <vector>
using namespace std;

int main()
{
  int N;
  cin >> N;
  vector<bool> colors(8, false);
  int any = 0;

  int temp = 0;
  for (int i = 0; i < N; ++i)
  {
    cin >> temp;
    if (temp >= 1 && temp <= 399)
    {
      colors[0] = true;
    }
    else if (temp >= 400 && temp <= 799)
    {
      colors[1] = true;
    }
    else if (temp >= 800 && temp <= 1199)
    {
      colors[2] = true;
    }
    else if (temp >= 1200 && temp <= 1599)
    {
      colors[3] = true;
    }
    else if (temp >= 1600 && temp <= 1999)
    {
      colors[4] = true;
    }
    else if (temp >= 2000 && temp <= 2399)
    {
      colors[5] = true;
    }
    else if (temp >= 2400 && temp <= 2799)
    {
      colors[6] = true;
    }
    else if (temp >= 2800 && temp <= 3199)
    {
      colors[7] = true;
    }
    else
    {
      ++any;
    }
  }

  int min_type = 0;
  for (int i = 0; i < 8; ++i)
  {
    if (colors[i])
    {
      ++min_type;
    }
  }

  cout << max(1, min_type) << " " << min_type + any << endl;
  return 0;
}
