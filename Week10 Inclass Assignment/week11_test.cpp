#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN

#include "doctest.h" 
#include "week11.h"


TEST_CASE("Test Fraction and Matrix Functions") {
    Fraction f1 = create_fraction(1, 2);
    CHECK(f1.fraction.first == 1);
    CHECK(f1.fraction.second == 2);

    
    Fraction f2 = create_fraction(3, 4);
    Fraction product = multiply_fraction_pair(f1, f2);
    CHECK(product.fraction.first == 3);
    CHECK(product.fraction.second == 8);

   
    Fraction f3 = create_fraction(1, 3);
    Fraction sum = sum_fraction_pair(f1, f3);
    CHECK(sum.fraction.first == 5);
    CHECK(sum.fraction.second == 6);

    
    Matrix m1 = create_fraction_matrix(3, 2);
    CHECK(m1.rows == 3);
    CHECK(m1.cols == 2);
    for (int i = 0; i < m1.rows; ++i) {
        for (int j = 0; j < m1.cols; ++j) {
            CHECK(m1.matrix[i][j].fraction.first == 0);
            CHECK(m1.matrix[i][j].fraction.second == 1);
        }
    }

    
    Fraction f4 = create_fraction(2, 5);
    setFraction(m1, 1, 1, f4);
    CHECK(m1.matrix[1][1].fraction.first == 2);
    CHECK(m1.matrix[1][1].fraction.second == 5);

    
    m1 = create_fraction_matrix(3, 2);
    setFraction(m1, 0,0, create_fraction(1,2));
    setFraction(m1, 0,1, create_fraction(3,4));
    setFraction(m1, 1,0, create_fraction(5,6));
    setFraction(m1, 1,1, create_fraction(7,8));
    setFraction(m1, 2,0, create_fraction(9,10));
    setFraction(m1, 2,1, create_fraction(11,12));

    
    Matrix m2 = create_fraction_matrix(2, 3);
    setFraction(m2, 0, 0, create_fraction(1, 2));
    setFraction(m2, 0, 1, create_fraction(3, 4));
    setFraction(m2, 0, 2, create_fraction(5, 6));
    setFraction(m2, 1, 0, create_fraction(7, 8));
    setFraction(m2, 1, 1, create_fraction(9, 10));
    setFraction(m2, 1, 2, create_fraction(11, 12));
    
    Matrix result = multiply_matrix(m1, m2);
    CHECK(result.rows == m1.rows);
    CHECK(result.cols == m2.cols);
    CHECK(result.matrix[0][0].fraction.first == 116);
    CHECK(result.matrix[0][0].fraction.second == 128);
    CHECK(result.matrix[0][1].fraction.first == 336);
    CHECK(result.matrix[0][1].fraction.second == 320);
    CHECK(result.matrix[0][2].fraction.first == 636);
    CHECK(result.matrix[0][2].fraction.second == 576);
    
}