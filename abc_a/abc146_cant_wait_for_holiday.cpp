#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
  string S;
  cin >> S;

  vector<string> day{"EMP", "SAT", "FRI", "THU", "WED", "TUE", "MON", "SUN"};

  for (int i = 1; i <= 7; ++i)
  {
    if (day[i] == S)
    {
      cout << i << endl;
      return 0;
    }
  }
}
