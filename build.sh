g++ -v -I /usr/local/include -L /usr/local/lib -lgtest -lgtest_main sample1_unittest.cc -o sample1 sample1.o 
g++ -I /usr/local/include -L /usr/local/lib -lgtest -lgtest_main run_sample1_gtest.cc -o rtst

