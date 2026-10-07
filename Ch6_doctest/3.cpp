#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include </Users/graham/Desktop/resources/doctest/doctest/doctest.h>
#include <string>
using namespace std;

bool is_palindrome(std::string a) {
    int length = a.length();
    for (int i = 0; i < length / 2; i++) {
        if (a[i] != a[length - 1 - i]) {
            return false;
        }
    }
    return true; 
}
TEST_CASE("is_palindrome detects palindromes") {
    CHECK(is_palindrome("") == true);
    CHECK(is_palindrome("a") == true);
    CHECK(is_palindrome("aba") == true);
    CHECK(is_palindrome("abba") == true);
    CHECK(is_palindrome("abc") == false);
}
