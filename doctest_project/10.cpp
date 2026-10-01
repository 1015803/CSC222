#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include </Users/graham/Desktop/resources/doctest/doctest/doctest.h>
using namespace std;

int gcd(int a, int b) {
    int small = (a >= b) ? b : a;
    while (small > 1){
        if (a % small == 0 && b % small == 0) {
            return small;
        }
        small --;
    }
    return 1;
}
TEST_CASE("gcd(int n, int m) returns the GCD of n and m") {
    CHECK(gcd(12, 8) == 4);
    CHECK(gcd(48, 18) == 6);
    CHECK(gcd(7, 13) == 1);
    CHECK(gcd(294, 210) == 42);
    CHECK(gcd(19, 19) == 19);
}
