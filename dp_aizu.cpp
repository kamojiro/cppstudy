#include <iostream>
#include <vector>
#include <cstdio>
#include <string>
#include <algorithm>
using namespace std;
typedef long long int ll;
#define all(x) x.begin(),x.end()
int main()
{
  int N, W, v, w;
  cin >> N >> W;
  int dp[N+1][W+1];
  for (int i=0; i < W+1; ++i) {
    dp[0][i] = 0;
  }

  for (int i=1; i < N+1; ++i) {
    cin >> v >> w;
    for (int j = 0; j < W+1; ++j) {
      if (j >= w) {
        dp[i][j] = max(dp[i-1][j], dp[i-1][j-w]+v);        
      }else {
        dp[i][j] = dp[i-1][j];
      }

    }
  }
  cout << dp[N][W] << "\n";
  return 0;
}
