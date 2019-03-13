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
* **GENERIC_ERROR**: *Generic error return code*
* **GENERIC_OK**: *Generic ok return code*

## Functions
*  _arrlist* arrnew()_
    * Creates a new, blank, arraylist and returns its pointer
* _arrlist* arrnew_size(int initial_size)_
    * Creates a new, blank, arraylist and returns its pointer with initial size of _initial_size_
* _int additem(arrlist *p, void *pitem)_
    * Adds a new *pitem* item to the *p* arrlist and returns the size after the insertion. Returns _-1_ if something went wrong
* _int delitems(arrlist *p, int position)_
    * Deletes the items from the _p_ arrlist at the position _position_ until the end. Returns the arraylist's size after the deletion otherwise _-1_ if something went wrong
* _int delitem(arrlist *p, int position)_
    * Deletes the item from the _p_ arrlist at the position _position_ and compacts the arraylist. Returns the arraylist's size after the deletion otherwise _-1_ if something went wrong
* _int splice(arrlist *s, arrlist *p, int position)_
    * Splices the arraylist in two arraylists at the position _position_. *s* contains the pointer to the arraylist from item 0 to position _position_ -1, _p_ contains the arraylist from item at position _position_ to the end. Returns _-1_ if something went wrong
* _void clear(arrlist *p)_
    * Destroys the *p* instance and recreates it returning its new pointer.

## How to use it
### Instantiation
```clike
    arrlist *a = arrnew();
    printf("Size %d\r\n", a->size);
```
### Instantiation with a specified size
```clike
    arrlist *a = arrnew_size(10);
    printf("Size %d\r\n", a->size);
```
### Add and item to the arraylist
```clike
    arrlist *a = arrnew();
    additem(a, "Item number 1");
```
### Remove all items from a position
```clike
    arrlist *a = arrnew();
    additem(a, "Item number 1"); 
    additem(a, "Item number 2"); 
    additem(a, "Item number 3"); 
    additem(a, "Item number 4"); 
    [...]
    delitems(a, 9);
```
### Remove an item from the arraylist
```clike
    arrlist *a = arrnew();
    additem(a, "Item number 1"); 
    additem(a, "Item number 2"); 
    additem(a, "Item number 3"); 
    additem(a, "Item number 4"); 
    [...]
    delitem(a, 9);
```
### Splice an arraylist into two at a specified position
```clike
    arrlist *a = arrnew();
    arrlist *b = arrnew();
    additem(a, "Item number 1"); 
    additem(a, "Item number 2"); 
    additem(a, "Item number 3"); 
    additem(a, "Item number 4"); 
    [...]
    splice(a, b, 5);
```
### Clear the arraylist
```clike
    arrlist *a = arrnew();
    additem(a, "Item number 1"); 
    additem(a, "Item number 2"); 
    additem(a, "Item number 3"); 
    additem(a, "Item number 4"); 
    [...]
    clear(a);
    printf("Size %d\r\n", a->size);
```
