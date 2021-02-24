//
// Created by cashewnuts on 2021/02/24.
//

#include "node.h"

Node newNode(void *val) {
    Node node;

    node.val = val;
    node.next = NULL;

    return node;
}