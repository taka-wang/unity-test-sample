#include "unity.h"
#include "SprintfTest.h"

int main(void) 
{ 
    UNITY_BEGIN();
    RUN_TEST(test_NoFormatOperations); 
    RUN_TEST(test_InsertString);
    RUN_TEST(test_InsertString2); 
    return UNITY_END();
}