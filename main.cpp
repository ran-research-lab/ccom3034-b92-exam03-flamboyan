#define CATCH_CONFIG_MAIN
#include <iostream>
#include "catch.hpp"


using namespace std;

// function isFlamboyan:
//   Given a binary tree represented using a 1-based array, returns true
//   if tree is a flamboyan.
bool isFlamboyan(const vector<int> &v) {
    // TODO: implement

    return true;
}

TEST_CASE("flamboyan", "[flamboyan]") {
    CHECK(isFlamboyan({-1,5,6,7}) == true);
    CHECK(isFlamboyan({-1,5,7,6}) == false);
    // TODO: create more tests

}
