#include <stdio.h>

/* If this were 0, it would fall on the BSS. */
int my_var = 1;

int main() {
    printf("%d\n", my_var + 1);
    return 0;
}
