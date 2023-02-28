#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "balanced.h"
 
int array[] = {1, 1, -1, -1 , -1};
int array1[] = {-1, -1 , -1, 1, 1};
int array2[] = {-1};
int array3[] = {1};


int arrays[] = {-1, -1, 1, 1};
int array2se[] = {1};
int array3se[] = {-1};

TEST_CASE("TEsting functions"){
    SUBCASE("lowest_depth"){
        CHECK(lowest_depth(array, 5)==4);
        CHECK(lowest_depth(array1, 5)==2);
        CHECK(lowest_depth(array, 1)==1);
        CHECK(lowest_depth(array, 1)==1);
    };
    SUBCASE("reorder"){
        int * a = reorder(array, 5);
        CHECK(a == arrays);
        //not sure how to test this since reorder is pointing to a location in memory    
    };
}