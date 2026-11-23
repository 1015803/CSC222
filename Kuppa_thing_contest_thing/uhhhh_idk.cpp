// question is basically check for peach if Peach is there count the number of
// times Koopa is in the string if Peach isnt there return -1 and make sure
// stuff case sensative
#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include </Users/graham/Desktop/resources/doctest/doctest/doctest.h>
#include <string>
using namespace std;

int KoopaFinda(const string& input) {
    bool foundPeach = false;
    for (int i=0; i+5 <= input.length(); i++) {
        if (input.substr(i, 5) == "Peach") {
            foundPeach = true;
        }
    }
    if (foundPeach == false) {
        return -1;
    }   
    int count = 0;
    for (int i = 0; i+5 <= input.length(); i++) {
        if (input.substr(i, 5) == "Koopa") {
            count++;
        }
    }
    return count;
}
//the ones student were given to as examples
TEST_CASE("") {
    CHECK(KoopaFinda("Koopa") == -1);
    CHECK(KoopaFinda("KoopaKoopaPeach") == 2);
    CHECK(KoopaFinda("PeachKoopaMario") == 1);
    CHECK(KoopaFinda("LuigiKoolPeach") == 0);
    CHECK(KoopaFinda("LuigiKoolPeachKoopa") == 1);
}
//the ones that were checked to see if they got it right
TEST_CASE("") {
    CHECK(KoopaFinda("KoopaKoopaKoopaKoopa") == -1);
    CHECK(KoopaFinda("PeachPeachPeachPeach") == 0);
    CHECK(KoopaFinda("PeachKoopaKoopaKoopaKoopa") == 4);
    CHECK(KoopaFinda("KoopaKoopaKoopaKoopaPeach") == 4);
    CHECK(KoopaFinda("KooKoopaKooKooKooopaPeach") == 1);
    CHECK(KoopaFinda("KooKoopaKooKooKooopaPeachKoopaKooKopa") == 2);
    CHECK(KoopaFinda("PeachPeachKooopaKoopaPeachKoopa") == 2);
}
