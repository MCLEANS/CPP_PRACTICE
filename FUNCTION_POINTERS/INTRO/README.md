## FUNCTION POINTERS

FUNCTION POINTERS are used to store the address of functions.
Can be dereferenced to execute the function.

# What could be the address of a function?
    The address of a particular function is the address of the first instruction to be executed inside the function(Entry point of the function).
    Funtion pointers hence store the entry point of the block of memory where the function is stored.


## EXAMPLE
A function that adds two intergers.

        int add(int a, int b){
            return(a+b);
        }

Function pointer to point to add function.

        return type(*variable)(parameter types);
        int(*add_pointer)(int,int);
        //assign add_pointer the address of add
        add_pointer = &add;
        //to call the add function using the pointer you derefrence the pointer
        int c = (*add_pointer)(2,3);