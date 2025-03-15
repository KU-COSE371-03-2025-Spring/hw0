#ifndef _TEST_TEMPLATE_H_
#define _TEST_TEMPLATE_H_

#include "util.h"
#include <map>
#include <functional>

class TestTemplate
{
public:
    virtual Status runTests();
    virtual Status runSelectedTest(int num);

protected:
    TestTemplate( const char* nameRoot );
    virtual ~TestTemplate();

    // Subclasses override these tests.
    virtual int test1();
    virtual int test2();
    virtual int test3();
    
    virtual const char* testName();

    void testFailure( Status& status, Status expectedStatus,
                      const char* activity, int postedErrExpected = TRUE );

    typedef int (TestTemplate::*testFunction)();
    virtual void runTest( Status& status, testFunction test );
    virtual Status runAllTests();
};

#endif
