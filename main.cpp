#include <algorithm>
#include <bit>
#include <chrono>
#include <cmath>
#include <cstdint>
#include <deque>
#include <iomanip>
#include <iostream>
#include <limits>
#include <map>
#include <numeric>
#include <queue>
#include <ranges>
#include <set>
#include <sstream>
#include <stack>
#include <string>
#include <tuple>
#include <utility>
#include <vector>

using namespace std;

using ll = int64_t;
using vl = vector<ll>;

ll n;
string sl;

bool IsPal(const string& s) {
  auto t = s;
  reverse(t.begin(), t.end());

  return (s == t);
}

int main() {
  ios::sync_with_stdio(false);
  std::cin.tie(nullptr);

  cin >> n;
  cin.ignore();
  while (0 < (n--)) {
    getline(cin, sl);

    for (auto&& x : sl) {
      if ('A' <= x && x <= 'Z') {
        x += ('a' - 'A');
      }
    }

    const auto& ans = IsPal(sl);
    if (ans) {
      cout << "Yes\n";
    } else {
      cout << "No\n";
    }
  }

  return 0;
}