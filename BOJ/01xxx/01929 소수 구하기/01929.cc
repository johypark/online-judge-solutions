#include <cmath>
#include <iostream>
#include <vector>

using namespace std;

vector<bool> getPrimeTable(int n) {
  int sqrtN = sqrt(n);

  // Initialize
  vector<bool> primeTable(n + 1, true);
  for (int i = 0; i < 2; i++)
    primeTable[i] = false;

  // Eratos
  for (int i = 2; i <= sqrtN; i++)
    if (primeTable[i]) {
      for (int j = i * i; j <= n; j += i)
        primeTable[j] = false;
    }

  return primeTable;
}

int main() {
  int n, m;
  cin >> m >> n;

  // Print prime numbers
  vector<bool> primeTable = getPrimeTable(n);
  for (int i = m; i <= n; i++)
    if (primeTable[i])
      cout << i << '\n';
}
