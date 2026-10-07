#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include </Users/graham/Desktop/resources/doctest/doctest/doctest.h>
#include <string>
using namespace std;

std::string reverse_string(std::string a) {
    std::string reverse = "";
    for (int i = a.length() - 1; i >= 0; i--) {
        reverse += a[i];
    }
    return reverse;
}    
TEST_CASE("reverse_string(s) returns s backwards") {
    CHECK(reverse_string("happy") == "yppah");
    CHECK(reverse_string("GHC!") == "!CHG");
    CHECK(reverse_string("The end.") == ".dne ehT");
}
