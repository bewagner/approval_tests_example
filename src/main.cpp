#define APPROVALS_DOCTEST

#include "ApprovalTests.hpp"
using namespace  ApprovalTests;

TEST_CASE("ApprovingText"){
    Approvals::verify("Test");
}


