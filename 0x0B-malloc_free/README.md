##C - malloc, free

##TASKS

### Task 0 : Float like a butterfly, sting like a bee
Write a function that creates an array of chars, and initializes it with a specific char.

Notes : 
__Prototype: char *create_array(unsigned int size, char c);
__Returns NULL if size = 0
__Returns a pointer to the array, or NULL if it fails

### Task 1 : The woman who has no imagination has no wings
Write a function that returns a pointer to a newly allocated space in memory, which contains a copy of the string given as a parameter.

Notes :
__Prototype: char *_strdup(char *str);
__The _strdup() function returns a pointer to a new string which is a duplicate of the string str. Memory for the new string is obtained with malloc, and can be freed with free.
__Returns NULL if str = NULL
__On success, the _strdup function returns a pointer to the duplicated string. It returns NULL if insufficient memory was available

### Task 2 : He who is not courageous enough to take risks will accomplish nothing in life
Write a function that concatenates two strings.

Notes :
__Prototype: char *str_concat(char *s1, char *s2);
__The returned pointer should point to a newly allocated space in memory which contains the contents of s1, followed by the contents of s2, and null terminated
__if NULL is passed, treat it as an empty string
__The function should return NULL on failure

### Task 3 : If you even dream of beating me you'd better wake up and apologize
Write a function that returns a pointer to a 2 dimensional array of integers.

Notes :
__Prototype: int **alloc_grid(int width, int height);
__Each element of the grid should be initialized to 0
__The function should return NULL on failure
__If width or height is 0 or negative, return NULL

### Task 4 : It's not bragging if you can back it up
Write a function that frees a 2 dimensional grid previously created by your alloc_grid function.

Notes :
__Prototype: void free_grid(int **grid, int height);
__Note that we will compile with your alloc_grid.c file. Make sure it compiles.

### Task 5 : It isn't the mountains ahead to climb that wear you out; it's the pebble in your shoe
Write a function that concatenates all the arguments of your program.

Notes : 
__Prototype: char *argstostr(int ac, char **av);
__Returns NULL if ac == 0 or av == NULL
__Returns a pointer to a new string, or NULL if it fails
__Each argument should be followed by a \n in the new string

### Task 6 : I will show you how great I am
Write a function that splits a string into words.

Notes :
__Prototype: char **strtow(char *str);
__The function returns a pointer to an array of strings (words)
__Each element of this array should contain a single word, null-terminated
__The last element of the returned array should be NULL
__Words are separated by spaces
__Returns NULL if str == NULL or str == ""
__If your function fails, it should return NULL

