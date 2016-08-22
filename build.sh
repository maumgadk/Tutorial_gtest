g++ -c sample1.cc -o sample1.o
g++ -c -I /usr/local/include sample1_unittest.cc -o sample_unittest.o 
g++ -I /usr/local/include -L /usr/local/lib -lgtest -lgtest_main run_sample1_gtest.cc -o rtst sample_unittest.o sample1.o

