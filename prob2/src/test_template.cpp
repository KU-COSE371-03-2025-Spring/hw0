#include <stdlib.h>
#include <stdio.h>
#include <sys/types.h>
#include <string.h>
#include <errno.h>
#include <iostream>
#include <assert.h>

#include "stat.h"
#include "test_template.h"
#include <pwd.h>
#include <unistd.h>

using namespace std;

TestTemplate::TestTemplate( const char* nameRoot )
{
    unsigned len = strlen(nameRoot);
    char basename[len+20];

}


TestTemplate::~TestTemplate()
{
}


int TestTemplate::test1()
{
    return 0;
}

int TestTemplate::test2()
{
    return 0;
}

int TestTemplate::test3()
{
    return 0;
}


const char* TestTemplate::testName()
{
    return "Please fix the test name!";
}


void TestTemplate::testFailure( Status& status, Status expectedStatus,
                              const char* activity, int postedErrExpected )
{
	return;
}

void TestTemplate::runTest( Status& status, TestTemplate::testFunction test )
{
    int result = (this->*test)();
    if (result != SUCCESS){
        status = FAIL;
    }
}


Status TestTemplate::runTests()
{
    cout << "\nRunning " << testName() << "\n";

    // Run the tests.
    Status ret = runAllTests();

    cout << testName() << " all tests "
         << (ret == SUCCESS ? "completed successfully! Congrats!" : "failed")
         << ".\n\n";

    return ret;
}

Status TestTemplate::runAllTests()
{
    Status answer = SUCCESS;
    runTest( answer, &TestTemplate::test1 );
    runTest( answer, &TestTemplate::test2 );
    runTest( answer, &TestTemplate::test3 );
    return answer;
}

Status TestTemplate::runSelectedTest(int num) {
    Status answer = SUCCESS;
	switch (num) {
		case 1:
        	runTest( answer, &TestTemplate::test1 );
            break;
        case 2:
            runTest( answer, &TestTemplate::test2 );
            break;
        case 3:
            runTest( answer, &TestTemplate::test3 );
            break;
	     default:
    	    std::cerr << "Please input the valid test number 1~3" << std::endl;
			answer = runAllTests();
    };
    return answer;
}
