#include <stdio.h>
int main()
{
    int a[15] = {152, 100, 85, 76, 65, 62, 59, 50, 49, 43, 40, 31, 21, 11, 6};
    int x, low, high, mid, n;
    n = 15;
    low = 0;
    high = n - 1;
    scanf("%d", &x);
    while (low <= high){
        mid = (low + high) / 2;
        if (x > a[mid])
            high = mid - 1;
        else if (x < a[mid])
            low = mid + 1;
        else if (x == a[mid]){
            printf("%d is %dth number!\n", x, mid+1);
            break;
        }
    }
    if (x != a[mid])
        printf("No match!\n");
    return 0;
}
