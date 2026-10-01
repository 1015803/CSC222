#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include </Users/graham/Desktop/resources/doctest/doctest/doctest.h>
using namespace std;

int lcm(int a, int b) {
    int counter = 0;
    bool found = true;
    while (found){
        counter++;
        if (counter % a == 0 && counter % b == 0) {
            found = false;
        }
    }
    return counter;
}
TEST_CASE("lcm(int n, int m) returns the LCM of n and m") {
    CHECK(lcm(12, 20) == 60);
    CHECK(lcm(3, 5) == 15);
    CHECK(lcm(6, 10) == 30);
    CHECK(lcm(7, 7) == 7);
    CHECK(lcm(24, 56) == 168);
}

