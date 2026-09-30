#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include </Users/graham/Desktop/resources/doctest/doctest/doctest.h>
using namespace std;

int sum_to_n(int a) {
    int total = 0;
    a+=1;
    while (a--){
        total += a;
    }
    return total;
}

TEST_CASE("sum_to_n(int n) returns sum of integers from 1 to n") {
    CHECK(sum_to_n(3) == 6);
    CHECK(sum_to_n(7) == 28);
    CHECK(sum_to_n(1) == 1);
    CHECK(sum_to_n(42) == 903);
}
