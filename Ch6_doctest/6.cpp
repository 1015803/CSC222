#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include </Users/graham/Desktop/resources/doctest/doctest/doctest.h>
#include <string>
#include <cctype>
using namespace std;

std::string mock(std::string a) {
    int count = 1;
    for (int i = a.length() - 1; i >= 0; i--) {
       a[i] = (count == 0 ? std::toupper(a[i]) : std::tolower(a[i]));
       if (isalpha(a[i])){    
           count = (count == 0 ? 1 : 0);
       }
    }
    return a;
}
TEST_CASE("mock turns a string into a SpongeBob meme") {
    CHECK(mock("We are learning C++.") == "wE aRe lEaRnInG c++.");
    CHECK(mock("I'm not sure how to do this.") == "i'M nOt SuRe hOw To Do ThIs.");
    CHECK(mock("Mississippi") == "mIsSiSsIpPi");
}

