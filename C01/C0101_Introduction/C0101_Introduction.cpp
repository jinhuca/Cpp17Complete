// C0101_Introduction.cpp
import std;

struct MyStruct {
  int i = 0;
  std::string s;
};

MyStruct ms { 101, "Hello" };

auto [u, v] = ms;

int main() {
  std::cout << u << ", " << v;
}
