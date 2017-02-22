#include "unity.h"
#include <stdio.h>
#include <memory.h>

static char output[100];
static const char * expected;

void setUp(void)
{
    memset(output, 0xaa, sizeof output);
    expected = "";
}

void tearDown(void)
{

}

static void expect(const char * s)
{
    expected = s;
}

static void given(int charsWritten)
{
    TEST_ASSERT_EQUAL(strlen(expected), charsWritten);
    TEST_ASSERT_EQUAL_STRING(expected, output);
}

void test_NoFormatOperations(void)
{
    expect("hey");
    given(sprintf(output, "hey"));
}

void test_InsertString(void)
{
    expect("Hello World\n");
    given(sprintf(output, "Hello %s\n", "World"));
}

void test_InsertString2(void)
{
    expect("Hello World2\n");
    given(sprintf(output, "Hello %s\n", "World"));
}