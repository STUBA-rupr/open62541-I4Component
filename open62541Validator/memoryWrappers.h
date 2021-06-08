#ifndef __MEMORYWRAPPERS__
#define __MEMORYWRAPPERS__


// define memory func. wrappers 
# define UA_free freeWrapper
# define UA_malloc mallocWrapper
# define UA_calloc callocWrapper
# define UA_realloc reallocWrapper

#include <stdio.h>


void freeWrapper(void* memblock);
void* mallocWrapper(size_t size);
void* callocWrapper(size_t number, size_t size);
void* reallocWrapper(void* memblock, size_t size);


#endif //__MEMORYWRAPPERS__
