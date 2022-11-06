#ifndef BRAKE_COMMAND_HLT_H_
#define BRAKE_COMMAND_HLT_H_

/***************************************************************************/

#include "brake_command_types_hlt.h"

/***************************************************************************/

#include <stdbool.h>
#include <stdint.h>

/***************************************************************************/

/*

Description of the test :
Test the sending of a brake command according the brake discrete input value.

*/

/***************************************************************************/

/*

Test cases :

| Test case | | brake_discrete_first_value_ | brake_discrete_second_value_ | | command_sent_ | brake_command_          |
| 1         | | high                        | high                         | | low           | -                       |
| 2         | | high                        | low                          | | high          | {0xf0, 0x01, 0x00,0xf1} |
| 3         | | low                         | high                         | | high          | {0xf0, 0x01, 0x00,0xf2} |
| 4         | | low                         | low                          | | low           | -                       |

*/

const brake_command_hlt_data_t brake_command_hlt_data[] =
    {
        {.test_case_ = (uint8_t *)"TC 1", .inputs_ = {.brake_discrete_first_value_ = high, .brake_discrete_second_value_ = high}, .outputs_ = {.command_sent_ = low, brake_command_ = {0xf0, 0x01, 0x00, 0xf1}}},
        {.test_case_ = (uint8_t *)"TC 2", .inputs_ = {.brake_discrete_first_value_ = high, .brake_discrete_second_value_ = low}, .outputs_ = {.command_sent_ = high, brake_command_ = {0xf0, 0x01, 0x00, 0xf1}}},
        {.test_case_ = (uint8_t *)"TC 3", .inputs_ = {.brake_discrete_first_value_ = low, .brake_discrete_second_value_ = high}, .outputs_ = {.command_sent_ = high, brake_command_ = {0xf0, 0x01, 0x01, 0xf2}}},
        {.test_case_ = (uint8_t *)"TC 4", .inputs_ = {.brake_discrete_first_value_ = low, .brake_discrete_second_value_ = low}, .outputs_ = {.command_sent_ = low, brake_command_ = {0xf0, 0x01, 0x00, 0xf1}}}};

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