Tasks

Task 0 :  Trust no one
Write a function that allocates memory using malloc.
Notes : 
__Prototype: void *malloc_checked(unsigned int b);
__Returns a pointer to the allocated memory
__if malloc fails, the malloc_checked function should cause normal process termination with a status value of 98

Task 1 : string_nconcat
Write a function that concatenates two strings.
Notes :
__Prototype: char *string_nconcat(char *s1, char *s2, unsigned int n);
__The returned pointer shall point to a newly allocated space in memory, which contains s1, followed by the first n bytes of s2, and null terminated
__If the function fails, it should return NULL
__If n is greater or equal to the length of s2 then use the entire string s2
__if NULL is passed, treat it as an empty string

Task 2 : _calloc
Write a function that allocates memory for an array, using malloc.
Notes : 
__Prototype: void *_calloc(unsigned int nmemb, unsigned int size)
_The _calloc function allocates memory for an array of nmemb elements of size bytes each and returns a pointer to the allocated memory.
_The memory is set to zero
__If nmemb or size is 0, then _calloc returns NULL
__If malloc fails, then _calloc returns NULL

Task 3 :  array_range
Write a function that creates an array of integers.
Notes :
__Prototype: int *array_range(int min, int max);
__The array created should contain all the values from min (included) to max (included), ordered from min to max
__Return: the pointer to the newly created array
__If min > max, return NULL
__If malloc fails, return NULL

Task 4 : _realloc
Write a function that reallocates a memory block using malloc and free
Notes :
_Prototype: void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);
_where ptr is a pointer to the memory previously allocated with a call to malloc: malloc(old_size)
_old_size is the size, in bytes, of the allocated space for ptr
_and new_size is the new size, in bytes of the new memory block
_The contents will be copied to the newly allocated space, in the range from the start of ptr up to the minimum of the old and new sizes
_If new_size > old_size, the “added” memory should not be initialized
_If new_size == old_size do not do anything and return ptr
_If ptr is NULL, then the call is equivalent to malloc(new_size), for all values of old_size and new_size
_If new_size is equal to zero, and ptr is not NULL, then the call is equivalent to free(ptr). Return NULL
_Don’t forget to free ptr when it makes sense

Task 5 : We must accept finite disappointment, but never lose infinite hope
Write a program that multiplies two positive numbers.
Notes :
__Usage: mul num1 num2
__num1 and num2 will be passed in base 10
__Print the result, followed by a new line
__If the number of arguments is incorrect, print Error, followed by a new line, and exit with a status of 98
__num1 and num2 should only be composed of digits. If not, print Error, followed by a new line, and exit with a status of 98
__You are allowed to use more than 5 functions in your file
