#include <stdio.h>

#include "ArrayList.h"


int main() {
    struct list_t *arrayList = create_new_list();

    printList(arrayList);
    printf("Put some items");
    add(arrayList, 13);
    add(arrayList, 26);
    add(arrayList, 21);
    add(arrayList, 45);
    printList(arrayList);
    printf("Get some items ");
    printf("%d this is the second element ", get(arrayList, 1));
    destroy(arrayList);
    return 0;
}
