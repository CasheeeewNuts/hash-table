//
// Created by cashewnuts on 2021/02/24.
//

#ifndef HASH_TABLE_NODE_H
#define HASH_TABLE_NODE_H

#include <stdio.h>

typedef struct Node {
    void* val;
    struct Node* next;
} Node;

Node newNode(void *val);

#endif //HASH_TABLE_NODE_H
