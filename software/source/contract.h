#ifndef CONTRACT_H_
#define CONTRACT_H_

/***************************************************************************/

#include <stdbool.h>
#include <assert.h>

/***************************************************************************/

extern void PRE(void* pointer_to_assert);

extern void POST(void* pointer_to_assert);

#endif // CONTRACT_H_