cmake_minimum_required(VERSION 3.14)
project(approval_tests_example CXX)

include(FetchContent)

FetchContent_Declare(
        DocTest
        GIT_REPOSITORY "https://github.com/onqtam/doctest"
        GIT_TAG "932a2ca50666138256dae56fbb16db3b1cae133a"
)
FetchContent_Declare(
        Approvals
        GIT_REPOSITORY "https://github.com/approvals/ApprovalTests.cpp"
        GIT_TAG "fb9b0695562e9764a60f7310c35c082696c49925"
)
FetchContent_MakeAvailable(DocTest Approvals)

add_executable(${PROJECT_NAME} src/main.cpp)
target_link_libraries(${PROJECT_NAME} doctest ApprovalTests)