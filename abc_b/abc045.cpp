#include <iostream>
#include <string>
using namespace std;

int main()
{
  string SA, SB, SC;
  cin >> SA >> SB >> SC;

  char tmp = SA[0];
  int index_a = 1;
  int index_b = 0;
  int index_c = 0;
  while (true)
  {
    if (tmp == 'a')
    {
      tmp = SA[index_a];
      if (index_a == SA.size())
      {
        cout << 'A' << endl;
        return 0;
      }
      ++index_a;
    }
    else if (tmp == 'b')
    {
      tmp = SB[index_b];
      if (index_b == SB.size())
      {
        cout << 'B' << endl;
        return 0;
      }
      ++index_b;
    }
    else
    {
      tmp = SC[index_c];
      if (index_c == SC.size())
      {
        cout << 'C' << endl;
        return 0;
      }
      ++index_c;
    }
  }
}
