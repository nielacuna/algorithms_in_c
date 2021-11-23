#include "sortlib.h"

static void selection(int *arp, size_t len)
{
        size_t i;
        size_t j;
        size_t min;
        int t;

        for (i = 0; i < len; i++) {
                min = i; /* initially, current index is assumed to be smallest */

                /* look for the smallest */
                for (j=i+1; j<len; j++) {
                        if (arp[j] < arp[min]) {
                                min = j;
                        }
                }

                /* at this point, min points to smallest.
                 * we need to swap it to the "current" index. */

                t = arp[min];
                arp[min] = arp[i];
                arp[i] = t;
        }
        return;
}

int main(void)
{
        int *arp = sortlib_get_test_array();
        size_t len = sortlib_get_test_length();

        sortlib_print_test_array();
        selection(arp, len);
        sortlib_print_test_array();
        return 0;
}

