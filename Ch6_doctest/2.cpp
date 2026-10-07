#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include </Users/graham/Desktop/resources/doctest/doctest/doctest.h>
#include <string>
using namespace std;

int count_vowels(std::string a) {
    int vowels = 0;
    for (int i = a.length() - 1; i >= 0; i--) {
        char b = std::tolower(a[i]);
        if (b == 'a' || b == 'e' || b == 'i' || b == 'o' || b == 'u'){ 
            vowels++;
        }
    }
    return vowels;
}
TEST_CASE("count_vowels counts lowercase vowels") {
    CHECK(count_vowels("") == 0);
    CHECK(count_vowels("xyz") == 0);
    CHECK(count_vowels("hello") == 2);
    CHECK(count_vowels("aeiou") == 5);
    CHECK(count_vowels("MISSISSIPPI") == 4);
}
