// C0101_Introduction.cpp
import std;

struct MyStruct {
  int i = 0;
  std::string s;
};

MyStruct ms { 101, "Hello" };

auto [u, v] = ms;
auto [u1, v1] {MyStruct { 1,"world" }};
auto [u2, v2](MyStruct { 12, "Month" });

MyStruct getStruct() {
  return MyStruct { 41, "hello" };
}

auto [id, val] = getStruct();

int main() {
  std::cout << u << ", " << v << '\n';
  std::cout << u1 << ", " << v1 << '\n';
  std::cout << u2 << ", " << v2 << '\n';

  std::cout << id << ", " << val << '\n';
}
