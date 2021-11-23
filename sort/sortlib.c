#include <stdio.h>

static int arr[10] = { 5, 6, 4, 7, 3, 8, 2, 9, 1, 0 };
#define ARR_COUNT(a)    (sizeof(a)/sizeof(a[0]))

int *sortlib_get_test_array(void)
{
        return arr;
}

size_t sortlib_get_test_length(void)
{
        return ARR_COUNT(arr);
}

void sortlib_print_array(int *arp, size_t len)
{
        size_t i;
        for (i=0; i<len; i++) {
                printf("%d ", arp[i]);
        }
        printf("\n");
        return;
}

void sortlib_print_test_array(void)
{
        sortlib_print_array(arr, ARR_COUNT(arr));
        return;
}

