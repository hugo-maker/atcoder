#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

string L, R;
int N, Q;
string S;

void exchange(int & a, int & b, bool & cmp)
{
  if (cmp)
  {
    if (a < N - 1)
    {
      if (b < N)
      {
        char tmp = R[a];
        R[a] = R[b];
        R[b] = tmp;
      }
      else
      {
        b -= N;
        char tmp = R[a];
        R[a] = L[b];
        L[b] = tmp;
      }
    }
    else if (a < N)
    {
      b -= N;
      char tmp = R[a];
      R[a] = L[b];
      L[b] = tmp;
    }
    else if (a >= N)
    {
      a -= N;
      b -= N;
      char tmp = L[a];
      L[a] = L[b];
      L[b] = tmp;
    }
  }
  else
  {
    if (a < N - 1)
    {
      if (b < N)
      {
        char tmp = L[a];
        L[a] = L[b];
        L[b] = tmp;
      }
      else
      {
        b -= N;
        char tmp = L[a];
        L[a] = R[b];
        R[b] = tmp;
      }
    }
    else if (a < N)
    {
      b -= N;
      char tmp = L[a];
      L[a] = R[b];
      R[b] = tmp;
    }
    else if (a >= N)
    {
      a -= N;
      b -= N;
      char tmp = R[a];
      R[a] = R[b];
      R[b] = tmp;
    }
  }
}

int main()
{
  cin >> N >> S >> Q;
  L = S.substr(0, N);
  R = S.substr(N, N);
  bool is_reverse = false;

  for (int i = 0; i < Q; ++i)
  {
    int T, A, B;
    cin >> T >> A >> B;
    --A, --B;
    if (T == 1)
    {
      exchange(A, B, is_reverse);
    }
    else
    {
      if (is_reverse)
      {
        is_reverse = false;
      }
      else
      {
        is_reverse = true;
      }
    }
  }

  if (is_reverse)
  {
    cout << R << L << endl;
  }
  else
  {
    cout << L << R << endl;
  }
  return 0;
}
