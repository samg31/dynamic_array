#ifndef DYNAMIC_ARRAY_H
#define DYNAMIC_ARRAY_H

typedef struct
{
	double* array;	
}dynamic_array;

void resize( dynamic_array* );
void reserve( dynamic_array* );
double* push_back( dynamic_array*, double );
double pop_back( dynamic_array* );

#endif
