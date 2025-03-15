using namespace std;

#include <iostream>
#include <assert.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <iostream>

#include "test.h"
#include "calc.h"

Test::Test(): TestTemplate("hw0-test") {
	choice = 100;
}

Test::~Test() {}

Status Test::runTests() {
	return TestTemplate::runTests();
}


Status Test::runAllTests() {
	Status ret;
	ret = TestTemplate::runAllTests();
	return ret;
}

Status Test::runSelectedTest(int num) {
	Status ret;
	ret = TestTemplate::runSelectedTest(num);
	return ret;
}

const char* Test::testName() {
    return "COSE371-03 Assignment TEST";
}

// TEST1
int Test::test1() {
	
	Status ret = SUCCESS;
	
	cout << "\n ==========\tTest 1\t=========="<< endl;
	Calculator<int> integerCalc;
	cout << integerCalc.add(1,1) << endl;
	cout << integerCalc.sub(1,1) << endl;

	return (ret=SUCCESS);
}

int Test::test2() {

	Status ret = SUCCESS;
	cout << "\n ==========\tTest 2\t=========="<< endl;
	Calculator<double> doubleCalc;
	cout << doubleCalc.add(1.0,-1.0) << endl;

	return (ret=SUCCESS);
}

// Test 3
int Test::test3() {

	Status ret = SUCCESS;	
	cout << "\n ==========\tTest 3\t=========="<< endl;

	Calculator<double> doubleCalc;
	cout << doubleCalc.sub(1.0,-1.0) << endl;
	cout << doubleCalc.mul(1.0,0) << endl;

	return (ret=SUCCESS);
}
