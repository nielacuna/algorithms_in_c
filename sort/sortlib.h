#ifndef __SORTLIB_H__
#define __SORTLIB_H__
#include <stddef.h>

int *sortlib_get_test_array(void);
size_t sortlib_get_test_length(void);
void sortlib_print_array(int *arp, size_t len);
void sortlib_print_test_array(void);
void sortlib_exchg(int *x, int *y);

#endif /* __SORTLIB_H__ */

