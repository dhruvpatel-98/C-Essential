#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "in_class_assignment7.h"
#include "doctest.h"
using namespace std;

TEST_CASE("Testing functions") {
    SUBCASE("bool is_perfect_check(int num)"){
        CHECK(is_perfect_check(2) == 0);
        CHECK(is_perfect_check(3) == 0);
        CHECK(is_perfect_check(4) == 0);
        CHECK(is_perfect_check(5) == 0);
        CHECK(is_perfect_check(6) == 1);
        CHECK(is_perfect_check(7) == 0);
        CHECK(is_perfect_check(8) == 0);
        CHECK(is_perfect_check(9) == 0);
        CHECK(is_perfect_check(10) == 0);
        CHECK(is_perfect_check(28) == 1);
        CHECK(is_perfect_check(30) == 0);
        CHECK(is_perfect_check(496) == 1);
        CHECK(is_perfect_check(500) == 0);
    }
}