#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include </Users/graham/Desktop/resources/doctest/doctest/doctest.h>
#include <string>
using namespace std;

int count_char(std::string a, char b) {
    int occurs = 0;
    for (int i = a.length()-1; i >= 0; i--) {
        char c = std::tolower(a[i]);
        occurs = (c == b ? occurs+1 : occurs);
    }
    return occurs;
}
TEST_CASE("count_char(s, ch) counts number of times ch occurs in s") {
    CHECK(count_char("abcd", 'c') == 1);
    CHECK(count_char("abcd", 'x') == 0);
    CHECK(count_char("Excellent!", 'e') == 3);
    CHECK(count_char("Abracadabra", 'a') == 5);
}
