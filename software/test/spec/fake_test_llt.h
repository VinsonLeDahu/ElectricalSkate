#ifndef azerFAKE_TEST_LLT_H_
#define azerFAKE_TEST_LLT_H_

/***************************************************************************/

#include "fake_test_types_llt.h"

#include <stdbool.h>
#include <stdint.h>

/***************************************************************************/

/*

Description of the test :

*/

/***************************************************************************/

/*

Test cases :

|Test case|Input||Output|

*/

const fake_test_llt_data_t fake_test_llt_data[] =
    {
        {.test_case_ = (uint8_t *)"TC 1",
         .inputs_ =
             {
                 .temperature_ = 4},
         .outputs_ =
             {
                 .temperature_ = 5}},
        {.test_case_ = (uint8_t *)"TC ",
         .inputs_ =
             {
                 .temperature_ = 4},
         .outputs_ =
             {
                 .temperature_ = 5}},
        {.test_case_ = (uint8_t *)"TC 3",
         .inputs_ =
             {
                 .temperature_ = 4},
         .outputs_ =
             {
                 .temperature_ = 6}}};

/***************************************************************************/

/*

Test procedure :

Setup :
    -
Exercize :
    -
Check :
    -

*/

#endif // FAKE_TEST_TYPES_LLT_H_