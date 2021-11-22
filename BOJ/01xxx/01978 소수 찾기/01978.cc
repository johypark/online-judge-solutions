#include <cmath>
#include <iostream>
#include <vector>

enum { MAX_NUM = 1000 };

using namespace std;

vector<bool> getPrimeTable(int max) {
  int sqrtN = sqrt(max);

  // Initialize
  vector<bool> primeTable(max + 1, true);
  for (int i = 0; i < 2; i++)
    primeTable[i] = false;

  // Eratos
  for (int i = 2; i <= sqrtN; i++)
    if (primeTable[i]) {
      for (int j = i * i; j <= max; j += i)
        primeTable[j] = false;
    }

  return primeTable;
}

int main() {
  int n;
  cin >> n;

  vector<bool> primeTable = getPrimeTable(MAX_NUM);
  int num;
  int count = 0;
  for (int i = 0; i < n; i++) {
    cin >> num;
    if (primeTable[num])
      count++;
  }

  cout << count << endl;
}
