#include "catch.hpp"

static int f() {
	return 42;
}

struct Notification_server {
	int get_something() {
		return 42;
	}
};

TEST_CASE("Testing notification server", "[notification_server]") {
	WHEN("Simply creating a notification server") {
		Notification_server ns;
	}
	WHEN("Testing single connection") {
		Notification_server ns;
		REQUIRE(ns.get_something() == f());
	}
}
