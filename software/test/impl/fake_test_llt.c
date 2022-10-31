#include "fake_test_llt.h"

#include <stdio.h>

#define SIZE_OF(array) (sizeof(array) / sizeof(fake_test_llt_data_t))

void setup()
{
}

bool exercice_and_check(fake_test_llt_data_t data)
{
    // Exercise

    // Check
    return data.outputs_.temperature_ == 5;
}

void tear_down()
{
}

void fake_test_llt()
{
    printf("fake_test_llt\n");
    for (int index = 0; index < SIZE_OF(fake_test_llt_data); index++)
    {
        printf("  - Test case %d : ", index);
        bool test_case_sucess = exercice_and_check(fake_test_llt_data[index]);
        if (test_case_sucess)
        {
            printf("\033[1;32mOK\n\033[1;34m");
        }
        else
        {
            printf("\033[1;31mKO\n\033[1;34m");
        }
        setup();
        exercice_and_check(fake_test_llt_data[index]);
        tear_down();
    }
}