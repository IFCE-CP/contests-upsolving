#include <bits/stdc++.h>

using namespace std;

#define rep(i,n) for (int (i)=0; (i)<(n); ++(i))
#define all(x) (x).begin(),(x).end()
#define dbg(x) cerr << #x << " = " << x << endl
#define sz(x) (int)((x).size())
#define ms(m,v) memset((m), (v), sizeof (m))
#define mp make_pair
#define pb push_back

#define freq first 
#define val second

int main() {
  std::ios::sync_with_stdio(false); cin.tie(0);

  int N, K;
  cin >> K >> N;

  int frequencia[K+1];
  ms(frequencia, 0);
  for (int x; N--;) cin >> x, frequencia[x]++;

  vector< pair<int, int> > v;
  for (int i = 1; i <= K; ++i)
    if (frequencia[i] > 0)
      v.pb(mp(frequencia[i], i));

  while (v.size()<3) v.pb(v[0]);

  sort(all(v));
  int last = sz(v)-1;

  cout << v[0].freq << " " << v[last].freq << endl;

  if (v[0].freq + 1 == v[last].freq - 1)
    cout << "-" << v[last].val << " +" << v[0].val << endl;
  else if (v[0].freq + 1 == v[last].freq) {
    if (v[0].freq == v[1].freq)
      cout << "-" << v[last].val << endl;
    else
      cout << "+" << v[0].val << endl;
  } else
    puts("*");

  return 0;
}
