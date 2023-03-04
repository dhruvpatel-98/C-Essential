#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include <iostream>
#include "lab3.h"
#include "doctest.h"
using namespace std;

int num_0[]= {1, 1, 0, 4};
int num_1[] = {0, 0, 0, 9};
int num_2[] = {1, 2, 3, 4};
int num_3[] = {0};
int num_4[] = {};
int num_5[] = {-1, -2, -4};
int num_6[] = {-2, 0, 2, -3};
int num_7[] = {-1, -3, -5, 10};
int num_8[] = {10, 10, 10, -40};
int num_9[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
int num_10[] = {-1, -2, -3, -4, -5, -6, -7, -8, -9};

int new_lst2[] = {2, 4, 5, 6};
int new_lst3[] = {5, 10, 21, 92, 45};
int new_lst4[] = {9, 8, 7, 6, 5, 4, 3, 2};
int new_lst5[5];
int new_lst6[7];
int new_lst7[3];



TEST_CASE("Testing my set-up list function and my swap function") {
    SUBCASE("set up list function") {
        set_up_list(new_lst5, 5);
        set_up_list(new_lst6, 7);
        set_up_list(new_lst7, 3);
        for (int i = 0; i < 2; i++) {
            int n = 2;
            CHECK(new_lst5[i] == 1);
            CHECK(new_lst5[i+n] == -1);
        }
        CHECK(new_lst5[4] == -1);
        for (int i = 0; i < 3; i++) {
            int n = 3;
            CHECK(new_lst6[i] == 1);
            CHECK(new_lst6[i+n] == -1);
        }
        CHECK(new_lst6[6] == -1);

        CHECK(new_lst7[0] == 1);
        CHECK(new_lst7[1] == -1);
        CHECK(new_lst7[2] == -1);
    }
    SUBCASE("swap function"){
        int i = 0;
        int x = 1;
        swap(new_lst2, i, x);
        i = 2;
        x = 3;
        swap(new_lst3, i, x);
        i = 0;
        x = 3;
        swap(new_lst4, i, x);
        CHECK(new_lst2[0] == 4);
        CHECK(new_lst2[1] == 2);
        CHECK(new_lst3[2] == 92);
        CHECK(new_lst3[3] == 21);
        CHECK(new_lst4[0] == 6);
        CHECK(new_lst4[3] == 9);
    }
}

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
}

TEST_CASE("Testing other function used to complete this lab") {
    SUBCASE("check if a list starts with a negative 1") {
        int lst1[] = {1, 1, 1, -1, -1, -1, -1};
        int lst2[] = {1, -1, 1, -1, -1, -1, 1};
        int lst3[] = {-1, -1, -1, 1, 1};
        int x0 = check_array_start_postive(lst1, 7);
        int x1 = check_array_start_postive(lst2, 7);
        int x2 = check_array_start_postive(lst3, 5);
        CHECK(x0 == 1);
        CHECK(x1 == 1);
        CHECK(x2 == 0);

        int y1 = lowest_valley(lst2, 7);
        CHECK(y1 == 5);
        int lst2_new[6];

   
        p2_p1(lst2_new, lst2, y1, 7);

        CHECK(lst2_new[0] == 1);
        CHECK(lst2_new[1] == 1);
        CHECK(lst2_new[2] == -1);
        CHECK(lst2_new[3] == 1);
        CHECK(lst2_new[4] == -1);
        CHECK(lst2_new[5] == -1);

        int test_lst1[] = {1, -1, -1, 1, 1, -1, -1, 1};
        int low_val = lowest_valley(test_lst1, 9);
        CHECK(low_val == 2);
        int test_new1[8];
        p2_p1(test_new1, test_lst1, low_val, 9);
        CHECK(test_new1[0] == 1);
        CHECK(test_new1[1] == 1);
        CHECK(test_new1[2] == -1);
        CHECK(test_new1[3] == -1);
        CHECK(test_new1[4] == 1);
        CHECK(test_new1[6] == 1);

        int test_lst2[] = {1, -1, -1};

        int test_lst2_low_val = lowest_valley(test_lst2, 3);

        CHECK(test_lst2_low_val == 2);

        int test_lst2_new[2];

        p2_p1(test_lst2_new, test_lst2, test_lst2_low_val, 3);

        CHECK(test_lst2_new[0] == 1);
        CHECK(test_lst2_new[1] == -1);
    }
}