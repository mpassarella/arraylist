# arraylist
Arraylist functions for C developers
## Internal structure
**Type** arrlist  
### Properties
* *int* **size**: *Number of items currently stored in the arraylist*
* *int* **ubound**: *Current size of allocated memory spaces to accomodate future items*
* *void* **items**: *Array of pointers to stored items*

## Defined constants
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

