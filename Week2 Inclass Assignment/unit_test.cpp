#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include <iostream>
#include "prefix.h"
#include "doctest.h"
using namespace std;

int num_0[]= {1, 2, 3, 4};
int num_1[] = {1, -1, 0, 4};
int num_2[] = {0, 0, 0, 9};
int num_3[] = {0};
int num_4[] = {};
int num_5[] = {-1, -2, -4};
int num_6[] = {-2, 0, 2, -3};
int num_7[] = {-1, -3, -5, 10};
int num_8[] = {10, 10, 10, -40};
int num_9[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
int num_10[] = {-1, -2, -3, -4, -5, -6, -7, -8, -9};

TEST_CASE("Testing my prefix functions") {
    SUBCASE("prefix sums that are non-negative"){
        CHECK(non_negative_sum(num_0, (sizeof(num_0)/sizeof(num_0[0]))) == 1);
        CHECK(non_negative_sum(num_1, (sizeof(num_1)/sizeof(num_1[0]))) == 1);
        CHECK(non_negative_sum(num_2, (sizeof(num_2)/sizeof(num_2[0]))) == 1);
        CHECK(non_negative_sum(num_3, (sizeof(num_3)/sizeof(num_3[0]))) == 1);
        CHECK(non_negative_sum(num_4, (sizeof(num_4)/sizeof(num_4[0]))) == 1);
        CHECK(non_negative_sum(num_9, (sizeof(num_9)/sizeof(num_9[0]))) == 1);
        CHECK(non_negative_sum(num_5, (sizeof(num_5)/sizeof(num_5[0]))) == 0);
        CHECK(non_negative_sum(num_6, (sizeof(num_6)/sizeof(num_6[0]))) == 0);
        CHECK(non_negative_sum(num_7, (sizeof(num_7)/sizeof(num_7[0]))) == 0);
        CHECK(non_negative_sum(num_8, (sizeof(num_8)/sizeof(num_8[0]))) == 0);
        CHECK(non_negative_sum(num_10, (sizeof(num_10)/sizeof(num_10[0]))) == 0);
    }
        SUBCASE("prefix sums that are non-positive"){
        CHECK(non_positive_sum(num_0, (sizeof(num_0)/sizeof(num_0[0]))) == 0);
        CHECK(non_positive_sum(num_1, (sizeof(num_1)/sizeof(num_1[0]))) == 0);
        CHECK(non_positive_sum(num_2, (sizeof(num_2)/sizeof(num_2[0]))) == 0);
        CHECK(non_positive_sum(num_3, (sizeof(num_3)/sizeof(num_3[0]))) == 1);
        CHECK(non_positive_sum(num_4, (sizeof(num_4)/sizeof(num_4[0]))) == 1);
        CHECK(non_positive_sum(num_9, (sizeof(num_9)/sizeof(num_9[0]))) == 0);
        CHECK(non_positive_sum(num_5, (sizeof(num_5)/sizeof(num_5[0]))) == 1);
        CHECK(non_positive_sum(num_6, (sizeof(num_6)/sizeof(num_6[0]))) == 1);
        CHECK(non_positive_sum(num_7, (sizeof(num_7)/sizeof(num_7[0]))) == 0);
        CHECK(non_positive_sum(num_8, (sizeof(num_8)/sizeof(num_8[0]))) == 0);
        CHECK(non_positive_sum(num_10, (sizeof(num_10)/sizeof(num_10[0]))) == 1);
    }
    SUBCASE("prefix sums"){
        CHECK(prefix_sum(num_0, (sizeof(num_0)/sizeof(num_0[0]))) == 10);
        CHECK(prefix_sum(num_1, (sizeof(num_1)/sizeof(num_1[0]))) == 4);
        CHECK(prefix_sum(num_2, (sizeof(num_2)/sizeof(num_2[0]))) == 9);
        CHECK(prefix_sum(num_3, (sizeof(num_3)/sizeof(num_3[0]))) == 0);
        CHECK(prefix_sum(num_4, (sizeof(num_4)/sizeof(num_4[0]))) == 0);
        CHECK(prefix_sum(num_9, (sizeof(num_9)/sizeof(num_9[0]))) == 45);
        CHECK(prefix_sum(num_5, (sizeof(num_5)/sizeof(num_5[0]))) == -7);
        CHECK(prefix_sum(num_6, (sizeof(num_6)/sizeof(num_6[0]))) == -3);
        CHECK(prefix_sum(num_7, (sizeof(num_7)/sizeof(num_7[0]))) == 1);
        CHECK(prefix_sum(num_8, (sizeof(num_8)/sizeof(num_8[0]))) == -10);
        CHECK(prefix_sum(num_10, (sizeof(num_10)/sizeof(num_10[0]))) == -45);
    }
}