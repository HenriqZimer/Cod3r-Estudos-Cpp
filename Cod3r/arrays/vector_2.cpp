#include <vector>
#include <iostream>
using namespace std;

int main() {
  vector<int> nums;
  nums.assign(10, 1);

  nums[0] = 7;
  nums[3] = 8;
  nums[5] = 8;
  nums[9] = 7;

  nums.erase(nums.begin() + 4);
  cout << nums.size() << endl;
  for (int n : nums) {
    cout << n << " ";
  }
  nums.clear();
  cout << "\n" << nums.size();

  return 0;
}