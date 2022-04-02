#include "doctest.h"
#include "Matrix.hpp"
using namespace zich;
using namespace std;

TEST_CASE("Bad Input"){
    std::vector<double> arr3 = {1, 0, 0, 0, 1, 0, 0, 0, 1, 1 ,1 ,1};
    std::vector<double> arr4 = {3, 0, 0, 0, 3, 3};
    std::vector<double> arr5 = {1, 0, 0, 0, 1, 0, 0, 0, 1, 1 ,1 ,1, 0, 0, 0, 0, 0, 0};
    std::vector<double> arr6 = {3, 0, 0, 0, 3, 3};
    Matrix m1(arr3, 3 ,3); // 3x3
    Matrix m2(arr4, 2, 3);  // 2x3
    Matrix m3(arr5, 6, 3); // 6x3
    Matrix m4(arr6, 1, 6); // 1x6
    CHECK_THROWS(m1 * m2);
    CHECK_THROWS(m2 + m3);
    CHECK_THROWS(m2 - m3);
    CHECK_THROWS(m2 * m3);
    CHECK_THROWS(m1 * m3);
    CHECK_THROWS(m4 + m1);
    CHECK_THROWS(m4 * m1);
    CHECK_THROWS(m4 - m1);
    CHECK_THROWS(m4 * m2);
    CHECK_THROWS(m4 - m3);
    
    // CHECK_FALSE(m2 > m3);
    // CHECK_THROWS(m2 < m3);
    // CHECK_THROWS(m2 == m3);
}

TEST_CASE("Good"){
     std::vector<double> identity = {1, 0, 0, 0, 1, 0, 0, 0, 1};
     std::vector<double> arr = {3, 0, 0, 0, 3, 0, 0, 0, 3};
     Matrix a(identity, 3 ,3);
     Matrix b(arr, 3, 3);
     
}