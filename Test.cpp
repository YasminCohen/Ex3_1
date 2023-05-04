#include <iostream>
#include <stdexcept>
#include "doctest.h"
#include "sources/Fraction.hpp"

using namespace std;
using namespace ariel;


TEST_CASE("Test 1:Checks if it is possible for the denominator to be 0 ") //impossible
{
    CHECK_THROWS(Fraction(1, 0));
}

TEST_CASE("Test 2: Checks if it is possible for the counter to be 0") //possible
{
    CHECK_NOTHROW(Fraction(0, 3));
}

TEST_CASE("Test 3: check if the reduction works ")//possible
{
    CHECK_NOTHROW(Fraction(-8, -9));
    Fraction d (-10, -2);
    CHECK(d == Fraction(5, 1));
    Fraction c (1, 3);
    CHECK(c == Fraction(2, 6));
}

TEST_CASE("Test 4: Checks if the + operator works properly ")
{
    Fraction a (2, 2);
    Fraction b (1, 2);

    CHECK(a + b == Fraction(3, 2));
    CHECK(0.5 + b == Fraction(1, 1));
    CHECK(a + 0.5 == Fraction(3,2));

}
TEST_CASE("Test 5: Checks if the - operator works properly ")
{
    Fraction a (2, 2);
    Fraction b (1, 2);

    CHECK(a - b == Fraction(4, 8));
    CHECK(0.5 - b == Fraction(0, 1));
    CHECK(a - 0.5 == Fraction(1,2));
}
TEST_CASE("Test 6: Checks if the * operator works properly  ")
{
    Fraction a (1,5);
    Fraction b (1, 2);

    CHECK(a * b == Fraction(2, 20));
    CHECK(0.5 * b == Fraction(1,4));
    CHECK(a * 0.5 == Fraction(1,10));

}
TEST_CASE("Test 7: Checks if the / operator works properly")
{
    Fraction a (1,5);
    Fraction b (1, 2);

    CHECK(a / b == Fraction(2,5));
    CHECK(0.5 / b == Fraction(1,1));
    CHECK(a / 0.5 == Fraction(2,5));
}
TEST_CASE("Test 8: Checks if the == operator works properly ")
{
    Fraction a (1, 2);
    Fraction b (2, 4);
    CHECK((a == b) == true);
    CHECK((a == 0.5) == true);
    CHECK((0.75 == b) == false);

}
TEST_CASE("Test 9: Checks if the > operator works properly  ")
{
    Fraction a (1, 2);
    Fraction b (1, 3);
    CHECK((a > b) == true);
    CHECK((a > 0.5) == false);
    CHECK((0.75 > b) == true);
}
TEST_CASE("Test 12: Checks if the < operator works properly ")
{
    Fraction a (1, 2);
    Fraction b (1, 3);
    CHECK((a < b) == false);
    CHECK((a < 0.5) == false);
    CHECK((0.75 < b) == false);
}
TEST_CASE("Test 13:  Checks if the >= operator works properly ")
{
    Fraction a (1, 2);
    Fraction b (1, 3);
    CHECK((a >= b) == true);
    CHECK((a >= 0.5) == true);
    CHECK((0.75 >= b) == true);

}
TEST_CASE("Test 14: Checks if the <= operator works properly ")
{
    Fraction a (1, 2);
    Fraction b (1, 3);
    CHECK((a <= b) == false);
    CHECK((a <= 0.5) == true);
    CHECK((0.75 <= b) == false);
}
TEST_CASE("Test 15: Checks if the ++ operator works properly")
{
    Fraction a (1, 1);

    CHECK(++a == Fraction(2, 1));
    CHECK(a++ == Fraction(2,1));
    CHECK(a == Fraction(3, 1));
}
TEST_CASE("Test 16: Checks if the -- operator works properly ")
{
    Fraction a (2, 1);
    CHECK(--a == Fraction(1, 1));
    CHECK(a-- == Fraction(1, 1));
    CHECK(a == Fraction(0, 1));

}
TEST_CASE("Test 17: Checks if the << operator works properly ")
{
    Fraction a (1, 2);
    CHECK_NOTHROW(cout << a << endl);
}



