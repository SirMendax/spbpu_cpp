/* Generated file, do not edit */

#ifndef CXXTEST_RUNNING
#define CXXTEST_RUNNING
#endif

#define _CXXTEST_HAVE_STD
#include <cxxtest/TestListener.h>
#include <cxxtest/TestTracker.h>
#include <cxxtest/TestRunner.h>
#include <cxxtest/RealDescriptions.h>
#include <cxxtest/TestMain.h>
#include <cxxtest/ErrorPrinter.h>

int main( int argc, char *argv[] ) {
 int status;
    CxxTest::ErrorPrinter tmp;
    CxxTest::RealWorldDescription::_worldName = "cxxtest";
    status = CxxTest::Main< CxxTest::ErrorPrinter >( tmp, argc, argv );
    return status;
}
bool suite_MyTestSuite1_init = false;
#include "test.h"

static MyTestSuite1 suite_MyTestSuite1;

static CxxTest::List Tests_MyTestSuite1 = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_MyTestSuite1( "test.h", 10, "MyTestSuite1", suite_MyTestSuite1, Tests_MyTestSuite1 );

static class TestDescription_suite_MyTestSuite1_testAddition : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_MyTestSuite1_testAddition() : CxxTest::RealTestDescription( Tests_MyTestSuite1, suiteDescription_MyTestSuite1, 13, "testAddition" ) {}
 void runTest() { suite_MyTestSuite1.testAddition(); }
} testDescription_suite_MyTestSuite1_testAddition;

static class TestDescription_suite_MyTestSuite1_testMultiplication : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_MyTestSuite1_testMultiplication() : CxxTest::RealTestDescription( Tests_MyTestSuite1, suiteDescription_MyTestSuite1, 19, "testMultiplication" ) {}
 void runTest() { suite_MyTestSuite1.testMultiplication(); }
} testDescription_suite_MyTestSuite1_testMultiplication;

#include <cxxtest/Root.cpp>
const char* CxxTest::RealWorldDescription::_worldName = "cxxtest";
