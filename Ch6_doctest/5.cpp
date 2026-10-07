#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include </Users/graham/Desktop/resources/doctest/doctest/doctest.h>
#include <string>
#include <cctype>
using namespace std;

std::string shout(std::string a) {
    int count = 0;//for next
    for (int i = a.length() - 1; i >= 0; i--) {
       a[i] = std::toupper(a[i]);
       a[i] = (a[i] == '.'? '!' : a[i]);
    }
    return a;
}
TEST_CASE("shout turns an exclaimation into a demand") {
    CHECK(shout("Don't touch that.") == "DON'T TOUCH THAT!");
    CHECK(shout("Let's go.") == "LET'S GO!");
    CHECK(shout("Leave it there!") == "LEAVE IT THERE!");
}
