#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include </Users/graham/Desktop/resources/doctest/doctest/doctest.h>
#include <string>
#include <vector>
#include "stats_utils.h"
using namespace std;
int num_vector_sum(const vector<int>& numbers) {
    int result = 0;
    int count;
    for (int num : numbers) {
        result += num;
        count++;
    }
    return result/count;
}
TEST_CASE("Testing mean function") {
    vector<int> nums = {1, 3, 7, 9};
    CHECK(5 == mean(nums));
}
