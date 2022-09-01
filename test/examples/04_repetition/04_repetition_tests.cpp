#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "while.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Verify sum of squares")
{
    REQUIRE(sum_of_squares(4) == 30);
    REQUIRE(sum_of_squares(10) == 385);
}

/*TEST_CASE("Test sum of squares")
{
    REQUIRE(display("Hello") == "H\ne\nl\nl\no");
}*/

