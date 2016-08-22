

#include "gtest/gtest.h"

int main(int argc, char** argv){

	::testing::InitGoogleTest(&argc, argv);
//	::testing::GTEST_FLAG(filter) = "Test_Cases1*";

	return RUN_ALL_TESTS();

}
