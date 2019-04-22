#include "Test.h"

Test::Test()
{
	test_List = nullptr;
}

Test::~Test()
{
	delete test_List;
}

void Test::runTests()
{
        std::cout << "Test 1: Constructor: ";
	test1();
	std::cout << "\n";

        std::cout << "Test 2: Destructor: ";
	test2();
	std::cout << "\n";

        std::cout << "Test 3: isEmpty returns false on non-Empty list: ";
	test3();
	std::cout << "\n";

        std::cout << "Test 4: isEmpty true on empty list: ";
	test4();
	std::cout << "\n";

        std::cout << "Test 5: size correct after 1 addFront: ";
	test5();
	std::cout << "\n";

        std::cout << "Test 6: size correct after 1 addBack: "; 
	test6();
	std::cout << "\n";

        std::cout << "Test 7: size correct after multiple addFront: "; 
	test7();
	std::cout << "\n";

        std::cout << "Test 8: size correct after multiple addBack: ";
	test8();
	std::cout << "\n";

        std::cout << "Test 9: size correct after add and removeFront: ";
	test9();
	std::cout << "\n";

        std::cout << "Test 10: size correct after add and removeBack: ";
	test10();
	std::cout << "\n";

        std::cout << "Test 11: order correct after removeFront: ";
	test11();
	std::cout << "\n";

        std::cout << "Test 12: order correct after removeBack: ";
	test12();
	std::cout << "\n";

        std::cout << "Test 13: order correct after addFront: ";
	test13();
	std::cout << "\n";

        std::cout << "Test 14: order correct after addBack: ";
	test14();
	std::cout << "\n";

        std::cout << "Test 15: search returns false on empty list: "; 
	test15();
	std::cout << "\n";

        std::cout << "Test 16: search returns true if value is in list: "; 
	test16();
	std::cout << "\n";

        std::cout << "Test 17: search returns false if value not in list: "; 
	test17();
	std::cout << "\n";

        std::cout << "Test 18: removeFront returns false on empty list: ";
	test18();
	std::cout << "\n";

	std::cout << "Test 19: removeBack returns false on empty list ";
	test19();
	std::cout << "\n";

	std::cout << "Test 20: size is 0 for empty list: ";
	test20();
	std::cout << "\n";

}

void Test::test1()
{
	test_List = new LinkedListOfInts();
    if(test_List->toVector().size() == 0){
        std::cout << "Pass";
    }
	else {
		std::cout << "Fail";
	}
}


void Test::test2()
{
	test_List = new LinkedListOfInts();
	delete test_List;
	
	if(test_List->toVector().size() == 0){
        std::cout << "Pass";
    }
	else {
		std::cout << "Fail";
	}
}




void Test::test3()
{
	test_List = new LinkedListOfInts();
	test_List->addFront(8);
	if(test_List->isEmpty() == false){
        std::cout << "Pass";
    }
	else {
		std::cout << "Fail";
	}
}


void Test::test4()
{
 	test_List = new LinkedListOfInts();
	if(test_List->isEmpty() == true){
        std::cout << "Pass";
    }
	else {
		std::cout << "Fail";
	}
}


void Test::test5()
{
	test_List = new LinkedListOfInts();
	test_List->addFront(3);
	if(test_List->size() == 1){
        std::cout << "Pass";
    }
	else {
		std::cout << "Fail";
	}
}


void Test::test6()
{
	test_List = new LinkedListOfInts();
	test_List->addBack(3);
	if(test_List->size() == 1){
        std::cout << "Pass";
    }
	else {
		std::cout << "Fail";
	}
}

void Test::test7()
{
	test_List = new LinkedListOfInts();
	test_List->addFront(3);
	test_List->addFront(6);
	test_List->addFront(9);
	if(test_List->size() == 3){
        std::cout << "Pass";
    }
	else {
		std::cout << "Fail";
	}
}

void Test::test8()
{
	test_List = new LinkedListOfInts();
	test_List->addBack(3);
	test_List->addBack(6);
	test_List->addBack(9);
	if (test_List->size() == 3){
        std::cout << "Pass";
    }
	else {
		std::cout << "Fail";
	}
}

void Test::test9()
{
	test_List = new LinkedListOfInts();
	test_List->addFront(3);
	test_List->removeFront();
	if (test_List->size() == 0){
        std::cout << "Pass";
    }
	else {
		std::cout <<" Fail: ";
		std::cout << "Size: "<< test_List->size();
	}
}


void Test::test10()
{
	test_List = new LinkedListOfInts();
	test_List->addBack(3);
	test_List->removeBack();
	if(test_List->size() == 0){
        std::cout << "Pass";
    }
	else {
		std::cout << " Fail: ";
		std::cout << "Size: "<< test_List->size();
	} 
}

void Test::test11()
{
	test_List = new LinkedListOfInts();
	test_List->addFront(3);
	test_List->addFront(6);
	test_List->removeFront();
	if((test_List->toVector())[0] == 6 && (test_List->toVector()).size() == 1){
        std::cout << "Pass";
    }
	else {
		std::cout << "Fail: ";
		std::cout << "List: ";
		for (int i = 0; i < test_List->toVector().size(); i++) {
			std::cout << test_List->toVector()[i] << " ";
		}
		std::cout << " Return Value: " << test_List->removeFront();
	}
}

void Test::test12()
{
	test_List = new LinkedListOfInts();
	test_List->addFront(3);
	test_List->addFront(6);
	test_List->removeBack();
	if ((test_List->toVector())[0] == 3 && (test_List->toVector()).size() == 1){
        std::cout << "Pass";
    }
	else {
		std::cout << "Fail: ";
		std::cout << "List: ";
		for (int i = 0; i < test_List->toVector().size(); i++) {
			std::cout << test_List->toVector()[i] << " ";
		}
		std::cout << " Return Value: " << test_List->removeBack();
	}
}

void Test::test13()
{
	test_List = new LinkedListOfInts();
	test_List->addFront(3);
	test_List->addFront(6);
	if ((test_List->toVector())[0] == 6 && (test_List->toVector())[1] == 3) {
        std::cout << "Pass";
    }
	else {
		std::cout << "Fail";
	}
}


void Test::test14()
{
	test_List = new LinkedListOfInts();
	test_List->addBack(3);
	test_List->addBack(6);
	if ((test_List->toVector())[0] == 3 && (test_List->toVector())[1] == 6){
        std::cout << "Pass";
    }
	else {
		std::cout << "Fail: ";
		std::cout << "List: ";
		for (int i = 0; i < test_List->toVector().size(); i++) {
			std::cout << test_List->toVector()[i] << " ";
		}
	} 
}

void Test::test15()
{
	test_List = new LinkedListOfInts();
	
	if(test_List->search(0) == false){
        std::cout << "Pass";
    }
	else {
		std::cout << "Fail";
	}  
}


void Test::test16()
{
	test_List = new LinkedListOfInts();
	test_List->addFront(3);
	test_List->addFront(6);
	if(test_List->search(6) == true){
        std::cout << "Pass";
    }
	else {
		std::cout << "Fail";
	} 
}

void Test::test17()
{
	test_List = new LinkedListOfInts();
	test_List->addFront(3);
	test_List->addFront(6);
	if(test_List->search(0) == false){
        std::cout << "Pass";
    }
	else {
		std::cout << "Fail";
	}
} 

void Test::test18()
{
	test_List = new LinkedListOfInts();
	if(test_List->removeFront() == false){
        std::cout << "Pass";
    }
	else {
		std::cout << "Fail";
	} 
}

void Test::test19()
{
	test_List = new LinkedListOfInts();
	if(test_List->removeBack() == false){
        std::cout << "Pass";
    }
	else {
		std::cout << "Fail";
	} 
}

void Test::test20()
{
	test_List = new LinkedListOfInts();
    if (test_List->size() == 0) {
        std::cout << "Pass";
    }
	else {
		std::cout << "Fail";
	} 
}
