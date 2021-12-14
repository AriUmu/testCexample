//
// Created by Arina Umushkina on 14.12.2021.
//

#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>

#define MAX_SIZE 4


typedef struct {
    size_t size;
    int *items;
} list_t;

bool __is_full(list_t *list) {
    return (list->size >= MAX_SIZE);
}

bool __check_index(list_t *list, const int index) {
    return (index >= 0 && index <= list->size);
}

list_t *create_new_list() {
    list_t *list = (list_t *) malloc(sizeof(list_t));
    list->size = 0;
    list->items = (int *) malloc(MAX_SIZE * sizeof(int));
    return list;
}

//todo add increase array
int add(list_t *list, const int item) {
    if (__is_full(list)) {
        return -1;
    }
    list->items[list->size++] = item;
    return 0;
}

int get(list_t *list, const int index) {
    if (__check_index(list, index)) {
        return list->items[index];
    }
    return 0;
}

void printList(list_t *list) {
    printf(" [");
    for (size_t i = 0; i < list->size; i++) {
        printf("%d ", list->items[i]);
    }
    printf("]\n");
}

void destroy(list_t *list) {
    free(list->items);
}




