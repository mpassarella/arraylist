#include <stdlib.h>
#include <stdio.h>

#include "arraylist.h"

arrlist* arrnew() {

    arrlist *new = malloc(sizeof(arrlist));
    new->items = malloc(sizeof(void *)*INIT_SIZE);
    new->ubound = INIT_SIZE;
    new->size = 0;

    return new;
}

int additem(arrlist *p, void *pitem) {

    if(p->size < p->ubound) {

        p->items[p->size] = pitem;
        p->size++;

        return p->size;
    } else {
    
        p->ubound = (p->size + INIT_SIZE);
        p->items = (void**) realloc(p->items, sizeof(void*) * p->ubound);

        if(p->items != NULL) {

            p->items[p->size] = pitem;
            p->size++;
            
            return p->size;
        }
    }

    return -1;
}

int delitem(arrlist *p, int position) {

    if(position < p->ubound) {
    
        p->items[position] = NULL;

        for(int i=position; i<p->ubound; i++){
            
            p->items[i] = p->items[i+1];
        }

        p->size--;

        return p->size;
    }
    
    return -1;
}

void clear(arrlist *p) {

    free(p);
    p = arrnew();
}
