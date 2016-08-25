

#include "gtest/gtest.h"

int main(int argc, char** argv){

	//initialization of gtest
	::testing::InitGoogleTest(&argc, argv);
	
	//Run all gtest
	return RUN_ALL_TESTS();

}
