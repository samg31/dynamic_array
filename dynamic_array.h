// written by Sam Goodrick
// contact at sdg31@zips.uakron.edu

#ifndef DYNAMIC_ARRAY_H
#define DYNAMIC_ARRAY_H

// THIS STRUCTURE ABSTRACTS DYNAMICALLY ALLOCATED MEMORY
// <<DO NOT>> ACCESS MEMBERS DIRECTLY
typedef struct
{
	double* array;

	// points to the first element
	double* first;

	// points to the position after the last element
	double* last;

	// pointer to the last place in array memory
	double* limit;

	// current size of array memory
	int capacity;

	// amount of elements actually in the array
	int size;
}dynamic_array;

// construct a dynamic array of capacity 4
// memory is uninitialized
void construct( dynamic_array* );

// free all memory and set member pointers to NULL
void destruct( dynamic_array* );

// double the size of the dynamic array
// original array occupies the first half of the new array
// and new memory is uninitialized
void resize( dynamic_array* );

// reserve n elements in the array, all uninitialized
void reserve( dynamic_array*, int );

// insert an element into the back of the array
// returns a pointer to the inserted element
double* push_back( dynamic_array*, double );

// remove the last element in the array
// returns the value of the removed element
double pop_back( dynamic_array* );

// insert element at position n
// return a pointer to the inserted element
double* insert( dynamic_array*, int, double );

// returns the value at array[n]
double index( dynamic_array*, int );

// returns a pointer to the first element
double* front( dynamic_array* );

// returns a pointer to the last element
double* back( dynamic_array* );

#endif
