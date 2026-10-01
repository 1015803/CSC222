#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include </Users/graham/Desktop/resources/doctest/doctest/doctest.h>
using namespace std;

int is_prime(int a) {
    if (a<=1){
        return false;
    }
    int thing = a-1;
    while (thing > 1){
        if (a % thing == 0){
            return false;
        }
        thing --;
    }
    return true;
}

TEST_CASE("is_prime(int n) returns true if n is a prime number") {
    CHECK(is_prime(0) == false);
    CHECK(is_prime(1) == false);
    CHECK(is_prime(2) == true);
    CHECK(is_prime(3) == true);
    CHECK(is_prime(4) == false);
    CHECK(is_prime(9) == false);
    CHECK(is_prime(19) == true);
    CHECK(is_prime(27) == false);
}
