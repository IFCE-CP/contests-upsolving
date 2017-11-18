#include <bits/stdc++.h>

using namespace std;

#define rep(i,n) for (int (i)=0; (i)<(n); ++(i))
#define all(x) (x).begin(),(x).end()
#define dbg(x) cerr << #x << " = " << x << endl
#define sz(x) (int)((x).size())
#define ms(m,v) memset((m), (v), sizeof (m))
#define mp make_pair
#define pb push_back

int main() {
  std::ios::sync_with_stdio(false); cin.tie(0);

  int A, B, C, a, b, c;

  cin >> A >> B >> C;
  cin >> a >> b >> c;

  cout << max(0, a-A) + max(0, b-B) + max(0, c-C) << endl;

  return 0;
}
