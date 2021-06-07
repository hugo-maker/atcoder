#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

template<class T>
void chmin(T & a, T b)
{
  if (a > b)
  {
    a = b;
  }
}
template<class T>
void chmax(T & a, T b)
{
  if (a < b)
  {
    a = b;
  }
}

int main()
{
  int N;
  cin >> N;
  vector<int> A(N);
  vector<int> B(N);
  for (int i = 0; i < N; ++i)
  {
    cin >> A[i] >> B[i];
  }

  auto a_iter = min_element(A.begin(), A.end());
  auto b_iter = min_element(B.begin(), B.end());
  auto a_index = distance(A.begin(), a_iter);
  auto b_index = distance(B.begin(), b_iter);

  int m = 1e9;
  if (a_index != b_index)
  {
    m = max(A[a_index], B[b_index]);
  }
  else
  {
    int A_min = 1e9;
    int B_min = 1e9;
    for (int j = 0; j < N; ++j)
    {
      if (j == a_index)
      {
        continue;
      }
      chmin(B_min, B[j]);
    }
    int y = max(A[a_index], B_min);

    for (int j = 0; j < N; ++j)
    {
      if (j == a_index)
      {
        continue;
      }
      chmin(A_min, A[j]);
    }
    int z = max(B[a_index], A_min);

    int x = A[a_index] + B[a_index];
    chmin(m, min({x, y, z}));
  }

  cout << m << endl;

  return 0;
}
