#ifndef MOCK_OTHER_H_
#define MOCK_OTHER_H_


#ifdef __cplusplus
extern "C" {
#endif

#ifndef DISABLE_MOCKS
#    define zero_func ut_zero_func
#    define one_func ut_one_func
#    define two_func ut_two_func
#    define three_func ut_three_func
#endif

#include "other.h"


#ifdef __cplusplus
}
#endif



#endif // MOCK_OTHER_H_
