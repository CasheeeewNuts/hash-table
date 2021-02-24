//
// Created by cashewnuts on 2021/02/24.
//

#include <stdio.h>
#include "table.h"

Table newTable(int size) {
    Table table;

    table.size = size;
    table.nodes = (Node *)malloc(sizeof(Node) * table.size);
    table.insert = insert;

    return table;
}

void insert(Table *table, char *key, void *val) {
    int hashed_key = hash_key(table, key);

    table->nodes[hashed_key] = newNode(val);
}

int hash_key(Table *table, const char *key)  {
    int raw_key = 0;
    int i = 0;

    while (key[i]) {
        raw_key += key[i];
        i++;
    }

    return raw_key / table->size;
}