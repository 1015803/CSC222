#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include </Users/graham/Desktop/resources/doctest/doctest/doctest.h>
using namespace std;

int sum_of_squares_to_n(int a) {
    int total = 0;
    a+=1;
    while (a--){
        total += a*a;
    }
    return total;
}

TEST_CASE("sum_of_squares_to_n(int n) sums squares from 1 to n") {
    CHECK(sum_of_squares_to_n(1) == 1);
    CHECK(sum_of_squares_to_n(3) == 14);
    CHECK(sum_of_squares_to_n(5) == 55);
    CHECK(sum_of_squares_to_n(6) == 91);
}
