#define INIT_SIZE 10

typedef struct {

    int size;
    int ubound;
    void **items;
} arrlist;

arrlist* arrnew();
int additem(arrlist *p, void *pitem);
int delitem(arrlist *p, int position);
void clear(arrlist *p);
