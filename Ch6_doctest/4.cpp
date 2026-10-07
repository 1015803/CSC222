#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include </Users/graham/Desktop/resources/doctest/doctest/doctest.h>
#include <string>
using namespace std;

int count_words(std::string a) {
    int words = 1;
    if (a.length() == 0){
        return 0;
    }
    for (int i = a.length() - 1; i >= 0; i--) {
        char b = std::tolower(a[i]);
        if (b == ' '){ 
            words++;
        }
    }
    return words;
}
TEST_CASE("count_words counts words") {
    CHECK(count_words("") == 0);
    CHECK(count_words("Word!") == 1);
    CHECK(count_words("Thing1 and Thing2") == 3);
    CHECK(count_words("This is the song that never ends.") == 7);
}
