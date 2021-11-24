#include "sortlib.h"

/* selection sort "selects" the smallest value in the array at every iteration.
 * and puts it in its final place in the array.
 */
static void selection(int *arp, size_t l, size_t len)
{
        size_t i;
        size_t j;
        size_t min;

        for (i = l; i < len; i++) {
                min = i; /* initially, current index is assumed to be smallest */

                /* look for the smallest */
                for (j=i+1; j<len; j++) {
                        if (arp[j] < arp[min]) {
                                min = j;
                        }
                }

                /* at this point, min points to smallest.
                 * we need to swap it to the "current" index. */
                sortlib_exchg(&arp[i], &arp[min]);
        }
        return;
}

int main(void)
{
        int *arp = sortlib_get_test_array();
        size_t len = sortlib_get_test_length();

        sortlib_print_test_array();
        selection(arp, 0, len);
        sortlib_print_test_array();
        return 0;
}

