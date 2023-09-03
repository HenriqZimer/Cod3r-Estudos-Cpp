#include <vector>
#include <iostream>
using namespace std;

int main() {
  vector<int> nums = { 1, 2, 3 };
  nums.push_back(4);
  nums.push_back(5);
  nums.push_back(6);
  nums.push_back(7);
  nums.push_back(8);

  nums[0] = 0;

  for (int n : nums) {
    cout << n << " ";
  }
  cout << "\n" << endl;

  for (auto i = nums.crbegin(); i != nums.crend(); i++) {
    cout << *i << endl;
  }

  return 0;
}