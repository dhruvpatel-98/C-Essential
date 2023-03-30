#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "Inclassweek9.h"

TEST_CASE("Testing creating the List struct and its functions"){
    List* x = new List();
    x->push(1);
    x->push(2);
    x->push(3);
    CHECK(x->head->data == 1);
    CHECK(x->head->next->data == 2);
    CHECK(x->head->next->next->data == 3);
    delete x;

}