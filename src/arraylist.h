#define INIT_SIZE 10
#define GENERIC_ERROR -1
#define GENERIC_OK 0

typedef struct {

    int size;
    int ubound;
    void **items;
} arrlist;

arrlist* arrnew();
arrlist* arrnew_size(int initial_size);
int additem(arrlist *p, void *pitem);
int delitems(arrlist *p, int position);
int delitem(arrlist *p, int position);
int splice(arrlist *s, arrlist *p, int position);
void clear(arrlist *p);
