# arraylist
*ArrayList functions for C developers*  
This minimal projects is aimed to give a simple procedural interface to manage dynamically allocated arraylists in C
## Internal structure
**Type** arrlist  
### Properties
* *int* **size**: *Number of items currently stored in the arraylist*
* *int* **ubound**: *Current size of allocated memory spaces to accomodate future items*
* *void* **items**: *Array of pointers to stored items*

### Defined constants
* **INIT_SIZE**: *Number of initially allocated items when the array is instatiated*

## Functions
*  _arrlist* arrnew()_
    * Creates a new, blank, arraylist and returns its pointer
* _int additem(arrlist *p, void *pitem)_
    * Adds a new *pitem* item to the *p* arrlist and returns the current size of the insertion. Returns *-1* if something went wrong
* _int delitem(arrlist *p, int position)_
    * Deletes the item from the *p* arrlist at the position *position*
* _void clear(arrlist *p)_
    * Destroys the *p* instance and recreates it returning its new pointer.

## How to use it
### Instantiation
```
    arrlist *a = arrnew();
    printf("Size %d\r\n", a->size);
```
### Add and item to the arraylist
```
    arrlist *a = arrnew();
    additem(a, "Item number 1");
```
### Remove an item from the arraylist
```
    arrlist *a = arrnew();
    additem(a, "Item number 1"); 
    additem(a, "Item number 2"); 
    additem(a, "Item number 3"); 
    additem(a, "Item number 4"); 
    [...]
    delitem(a, 9);
```
### Clear the arraylist
```
    arrlist *a = arrnew();
    additem(a, "Item number 1"); 
    additem(a, "Item number 2"); 
    additem(a, "Item number 3"); 
    additem(a, "Item number 4"); 
    [...]
    clear(a);
    printf("Size %d\r\n", a->size);
```
