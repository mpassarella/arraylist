#include <stdlib.h>
#include <stdio.h>

#include "arraylist.h"

int main(int argc, char **argv) {
    
    arrlist *a = arrnew();
    arrlist *p = arrnew();

    additem(a, "Cippa lippa 0"); 
    additem(a, "Cippa lippa 1"); 
    additem(a, "Cippa lippa 2"); 
    additem(a, "Cippa lippa 3"); 
    additem(a, "Cippa lippa 4"); 
    additem(a, "Cippa lippa 5"); 
    additem(a, "Cippa lippa 6"); 
    additem(a, "Cippa lippa 7"); 
    additem(a, "Cippa lippa 8"); 
    additem(a, "Cippa lippa 9"); 
    additem(a, "Cippa lippa 10"); 
    additem(a, "Cippa lippa 11"); 
    additem(a, "Cippa lippa 12"); 
    additem(a, "Cippa lippa 13"); 
    additem(a, "Cippa lippa 14"); 

    printf("Size %d\r\n", a->size);

    splice(a, p, 5);

    printf("--------------------------\r\n");
    printf("--------------------------\r\n");
    printf("--------------------------\r\n");
    
    for(int i=0; i<a->size; i++) {
        
        printf("Elemento A: %s\r\n", (char*)a->items[i]);
    } 

    printf("--------------------------\r\n");

    for(int i=0; i<p->size; i++) {
        
        printf("Elemento P: %s\r\n", (char*)p->items[i]);
    } 


//    for(int i=0; i<a->size; i++) {
//    
//        printf("Elemento %s\r\n", (char*)a->items[i]);
//    }
//
//    printf("Size %d\r\n", a->size);
//
//    delitem(a, 9);
//    printf("Size %d\r\n", a->size);
//
//    for(int i=0; i<a->size; i++) {
//    
//        printf("Elemento %s\r\n", (char*)a->items[i]);
//    }
//
//    delitem(a, 0);
//    printf("Size %d\r\n", a->size);
//
//    for(int i=0; i<a->size; i++) {
//    
//        printf("Elemento %s\r\n", (char*)a->items[i]);
//    }
//
//    delitem(a, a->size - 1);
//    printf("Size %d\r\n", a->size);
//
//    for(int i=0; i<a->size; i++) {
//    
//        printf("Elemento %s\r\n", (char*)a->items[i]);
//    }
//
//    clear(a);
//    printf("Size %d\r\n", a->size);
//
//    for(int i=0; i<a->size; i++) {
//    
//        printf("Elemento %s\r\n", (char*)a->items[i]);
//    }

    return 0;
}
