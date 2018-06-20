#include "catch.hpp"

static int f() {
	return 42;
}

TEST_CASE("Test") {
	REQUIRE(f() == 42);
}