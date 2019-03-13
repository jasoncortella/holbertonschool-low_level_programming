# 0x0E. C - Function pointers
## This directory contains answer files to project 0x0E

### 0. What's my name
* 0-print_name.c
* a function that prints a name.
* Prototype: void print_name(char *name, void (*f)(char *));

### 1. If you spend too much time thinking about a thing, you'll never get it done
* 1-array_iterator.c
* a function that executes a function given as a parameter on each element of an array.
* Prototype: void array_iterator(int *array, size_t size, void (*action)(int));

### 2. To hell with circumstances; I create opportunities
* 2-int_index.c
* a function that searches for an integer.
* Prototype: int int_index(int *array, int size, int (*cmp)(int));

### 3. A goal is not always meant to be reached, it often serves simply as something to aim at
* 3-main.c, 3-op_functions.c, 3-get_op_func.c, 3-calc.h
* a program that performs simple operations (+ - & / %)
* Prototype: int (*get_op_func(char *s))(int, int);

### 4. Most hackers are young because young people tend to be adaptable. As long as you remain adaptable, you can always be a good hacker
* 100-main_opcodes.c
* a program that prints the opcodes of its own main function.
* Usage: ./main number_of_bytes