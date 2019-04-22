
#ifndef TEST_H
#define TEST_H

#include <iostream>
#include <vector>
#include "LinkedListOfInts.h"
#include "Node.h"

class Test
{
public:
	Test();
	~Test();

	void test1(); //test constructor
	void test2(); //test destructor
	void test3(); //isEmpty returns false on non-Empty list
	void test4(); //isEmpty true on empty list
	void test5(); //size correct after 1 addFront
	void test6(); //size correct after 1 addBack
	void test7(); //size correct after multiple addFront
	void test8(); //size correct after multiple addBack
	void test9(); //size correct after add and removeFront
	void test10(); //size correct after add and removeBack
	void test11(); //order correct after removeFront
	void test12(); //order correct after removeBack
	void test13(); //order correct after addFront
	void test14(); //order correct after addBack
	void test15(); //search returns false on empty list
	void test16(); //search returns true if value is in list
	void test17(); //search returns false if value not in list
	void test18(); //removeFront returns false on empty list
	void test19(); //removeBack returns false on empty list
	void test20(); //size of empty list 0
	
	void runTests(); //runs all tests

private:
	
	LinkedListOfInts* test_List;
};

#endif
