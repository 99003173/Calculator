#include<CUnit/Basic.h>
#include<CUnit/CUnit.h>

#include <calculator_operations.h>
#define PROJECT_NAME "Calculator"

void test_add(void);
void test_subtract(void);
void test_multiply(void);
void test_divide(void);
void test_factorial(void);
void test_Modulo(void);
void test_Power(void);
void test_Length(void);


int main()
{
if (CUE_SUCCESS!=CU_initialize_registry())
    return CU_get_error();
}

CU_pSuite suite = CU_add_suite(PROJECT_NAME,0,0);

CU_add_test(suite,"add",test_add);
CU_add_test(suite,"subtract",test_subtract);
CU_add_test(suite,"multiply",test_multiply);
CU_add_test(suite,"divide",test_divide);
CU_add_test(suite,"factorial",test_factorial);
CU_add_test(suite,"modulo",test_modulo);
CU_add_test(suite,"power",test_power);
CU_add_test(suite,"length",test_length);



CU_basic_set_mode(CU_BRM_VERBOSE);

CU_basic_run_tests();
CU_cleanup_registry();
return 0;
}

void test_add(void)
{
CU_ASSERT(50==add(20,30));
}

void test_subtract(void)
{
CU_ASSERT(5==subtarct(3,2));
}

void test_multiply(void)
{
CU_ASSERT(20==add(5,4));
}

void test_divide(void)
{
CU_ASSERT(3==add(12,4));
}

void test_factorial(void)
{
CU_ASSERT(720==factorial(6));
}
void test_modulo(void)
{
CU_ASSERT(3==mod(12,9));
}
void test_power(void)
{
CU_ASSERT(125==power(5,3));
}






void test_length(void)
{
CU_ASSERT(60==length(5));
}


