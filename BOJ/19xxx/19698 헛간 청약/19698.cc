#include <algorithm>
#include <iostream>

using namespace std;

int main() {
  int n, w, h, l;
  cin >> n >> w >> h >> l;

  cout << min(n, (w / l) * (h / l)) << endl;
}
