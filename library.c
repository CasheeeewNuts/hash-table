#include <stdio.h>

#include "library.h"

typedef Table HashTable;

int main() {
    HashTable table = newTable(50);

    table.insert(&table, "aaaaaaaaaa", (int *) 1);

    printf("%d\n", (int *)table.nodes[19].val);

    return 0;
}