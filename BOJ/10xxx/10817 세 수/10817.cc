#include <algorithm>
#include <array>
#include <iostream>

using namespace std;

int main() {
  array<int, 3> nums;
  for (int &num : nums)
    cin >> num;

  sort(nums.begin(), nums.end());

  cout << nums[1] << endl;
}
