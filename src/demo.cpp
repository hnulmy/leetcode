#include <cstdio>
#include <iostream>

using namespace std;

class DemoTest {
  public:
    int position;

    int GetPosition() {
      return 0;
    }

  private:
    int rank;
};

int main() {
  DemoTest demo_test;
  demo_test.position = 0;

  cout << "demo test" << endl;
  return 0;
}
