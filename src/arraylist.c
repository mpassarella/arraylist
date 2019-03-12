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

arrlist* arrnew_size(int initial_size) {

    arrlist *new = malloc(sizeof(arrlist));
    new->items = malloc(sizeof(void *)*initial_size);
    new->ubound = initial_size ;
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

    return GENERIC_ERROR;
}

int delitems(arrlist *p, int position) {

    if(position <= p->ubound) {
    
        for(int i=position; i<p->ubound; i++){
            
            p->items[i] = NULL;
        }

        p->size = position;

        return p->size;
    }
    
    return GENERIC_ERROR;
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
    
    return GENERIC_ERROR;
}

int splice(arrlist *s, arrlist *p, int position) {

    if(position < s->size) {
        
        for(int i=0; i<(s->size - position); i++){
            
            additem(p, s->items[i+position]);
        }
    
        for(int i=position; i<s->size; i++){
        
            delitems(s, i);
        }

        return GENERIC_OK;
    }

    return GENERIC_ERROR;
}

void clear(arrlist *p) {

    free(p);
    p = arrnew();
}
