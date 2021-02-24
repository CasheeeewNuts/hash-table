//
// Created by cashewnuts on 2021/02/24.
//

#ifndef HASH_TABLE_TABLE_H
#define HASH_TABLE_TABLE_H

#include "stdlib.h"
#include "node.h"


typedef struct Table {
    int size;
    Node *nodes;
    void (*insert)(struct Table*, char*, void*);
} Table;

Table newTable(int size);

void insert(Table *table, char *key, void* val);

int hash_key(Table *table, const char *key);



#endif //HASH_TABLE_TABLE_H
