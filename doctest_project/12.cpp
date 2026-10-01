#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include </Users/graham/Desktop/resources/doctest/doctest/doctest.h>
using namespace std;

int largest_digit(int a) {
    a = (a < 0) ? a * -1 : a;
    int ld = 0;
    while (a > 0){
        ld = (a % 10 > ld) ? ld = a % 10 : ld;
        a /= 10;
    }
    return ld;
}

TEST_CASE("largest_digit(int n) returns the largest digit in n") {
    CHECK(largest_digit(0) == 0);
    CHECK(largest_digit(1030) == 3);
    CHECK(largest_digit(7986) == 9);
    CHECK(largest_digit(-584) == 8);
    CHECK(largest_digit(0xFF) == 5);
    CHECK(largest_digit(0123) == 8);
}
