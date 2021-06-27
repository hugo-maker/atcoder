#include <iostream>
#include <string>
using namespace std;

bool is_mm(string s)
{
  if (s == "01" ||
      s == "02" ||
      s == "03" ||
      s == "04" ||
      s == "05" ||
      s == "06" ||
      s == "07" ||
      s == "08" ||
      s == "09" ||
      s == "10" ||
      s == "11" ||
      s == "12")
  {
    return true;
  }

  return false;
}

int main()
{
  string S;
  cin >> S;

  string first = S.substr(0, 2);
  string last = S.substr(2, 2);

  if (is_mm(first))
  {
    if (is_mm(last))
    {
      cout << "AMBIGUOUS" << endl;
    }
    else
    {
      cout << "MMYY" << endl;
    }
  }
  else if (is_mm(last))
  {
    cout << "YYMM" << endl;
  }
  else
  {
    cout << "NA" << endl;
  }

  return 0;
}
