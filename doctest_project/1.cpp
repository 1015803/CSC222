#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include </Users/graham/Desktop/resources/doctest/doctest/doctest.h>
using namespace std;

int is_even(int a) {
    return (a % 2 == 0) ? 1 : 0;
}

TEST_CASE("is_even identifies even numbers") {
    CHECK(is_even(0) == true);
    CHECK(is_even(2) == true);
    CHECK(is_even(-4) == true);
    CHECK(is_even(1) == false);
    CHECK(is_even(-7) == false);
}
