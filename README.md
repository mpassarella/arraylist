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
