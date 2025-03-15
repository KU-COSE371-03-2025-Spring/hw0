#ifndef _TEST_H_
#define _TEST_H_

#include "test_template.h"

class Test : public TestTemplate {
public:
	Test();
	~Test();

	Status runTests();
	Status runSelectedTest(int num);

private:
	int choice;
	int test1();
	int test2();
	int test3();
	
	Status runAllTests();
	const char* testName();

};

#endif
