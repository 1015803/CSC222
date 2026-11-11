#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include </Users/graham/Desktop/resources/doctest/doctest/doctest.h>
#include <string>
#include <vector>
#include "num_vector_utils.h"
using namespace std;

string render_num_vector(const vector<int>& numbers) {
    string result = "";
    for (int num : numbers) {
        result += to_string(num) + " ";
    }
    result.pop_back();
    return result;
}
int num_vector_sum(const vector<int>& numbers) {
    int result = 0;
    for (int num : numbers) {
        result += num;
    }
    return result;
}
int num_vector_product(const vector<int>& numbers) {
    int result = 1;
    for (int num : numbers) {
        if (num == 0){
            return 0;
        }
        result *= num;
    }
    return result;
}
vector<int>  only_evens(const vector<int>& numbers) {
    vector<int> variable = numbers;
    for (int i = variable.size() - 1; i >= 0; i--) {
        if (numbers[i] % 2 != 0){
            variable.erase(variable.begin() +i);
        }
    }
    return variable;
}
vector<int>  only_odds(const vector<int>& numbers) {
    vector<int> variable = numbers;
    for (int i = variable.size() - 1; i >= 0; i--) {
        if (numbers[i] % 2 == 0){
            variable.erase(variable.begin() +i);
        }
    }
    return variable;
}
string  nums_between(const vector<int>& numbers, int num1, int num2) {
    string result;
    for (size_t i = 0; i < numbers.size(); i++) {
        if (numbers[i] > num1 && numbers[i] < num2){
            result += to_string(numbers[i]) + " ";
        }
    }
    return result;
}


TEST_CASE("Testing render_num_vector") {
    vector<int> nums = {1, 3, 7};
    string numstr = render_num_vector(nums);
    string expected = "1 3 7";
    CHECK(numstr == expected);
}
TEST_CASE("Testing num_vector_sum") {
    vector<int> nums = {1, 3, 7};
    CHECK(11 == num_vector_sum(nums));
}
TEST_CASE("Testing num_vector_product") {
    vector<int> nums = {2, 3, 7};
    CHECK(42 == num_vector_product(nums));
}
TEST_CASE("Testing only_evens") {
    vector<int> nums = {1, 2, 3, 4, 6, 7, 8, 11, 12, 14, 27, 22};
    vector<int> evens = only_evens(nums);
    string expected = "2 4 6 8 12 14 22";
    CHECK(render_num_vector(evens) == expected);
}
TEST_CASE("Testing nums_between function") {
    vector<int> nums = {11, 2, 13, 4, 10, 26, 7, 88, 19, 20, 14, 5, 32};
    vector<int> nums2 = nums_between(nums, 10, 20);
    string expected = "11 13 10 19 20 14";
    CHECK(render_num_vector(nums2) == expected);
}
