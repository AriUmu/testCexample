//
// Created by Arina on 14.12.2021.
//

#ifndef DATA_STRUCTURES_ARRAYLIST_H
#define DATA_STRUCTURES_ARRAYLIST_H
#include <unistd.h>

struct list_t;

struct list_t* create_new_list();

void destroy(struct list_t* list);

int add(struct list_t* list, const int item);

int get(struct list_t *list, const int index);

void printList(struct list_t *list);

#endif //DATA_STRUCTURES_ARRAYLIST_H