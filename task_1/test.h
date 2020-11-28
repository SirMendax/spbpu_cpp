//
// Created by mendax on 15.11.2020.
//

#ifndef TASK_1_TEST_H
#define TASK_1_TEST_H

#include "cxxtest/TestSuite.h"

class MyTestSuite1 : public CxxTest::TestSuite
{
public:
    void testAddition(void)
    {
        TS_ASSERT(1 + 1 > 1);
        TS_ASSERT_EQUALS(1 + 1, 2);
    }

    void testMultiplication(void)
    {
        TS_TRACE("Starting multiplication test");
        TS_ASSERT_EQUALS(2 * 2, 5);
        TS_TRACE("Finishing multiplication test");
    }
};

#endif //TASK_1_TEST_H
