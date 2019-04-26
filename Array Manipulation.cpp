#include <algorithm>
#include <iostream>
#include <vector>

int main() {
  int n;
  int m;
  std::cin >> n >> m;
  using val_type = long long;
  std::vector<val_type> v(n);
  while (m--) {
    val_type start, end, val;
    std::cin >> start >> end >> val;
    auto it_start = v.begin() + (start - 1);
    auto it_end = v.begin() + end;
    *it_start += val;
    *it_end -= val;
  }
  val_type max{0};
  auto accumulate_max_val = [x = val_type(0), &max](val_type y) mutable {
    x += y;
    if (x > max)
      max = x;
  };
  std::for_each(v.begin(), v.end(), accumulate_max_val);
  std::cout << max;
  return 0;
}
