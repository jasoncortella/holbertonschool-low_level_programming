# 0x04. C - Pointers, arrays and strings
## Project answer files

### 0. 98 Battery st.
* 0-reset_to_98.c
* takes a pointer to an int as parameter and updates the value it points to to 98.
* Prototype: void reset_to_98(int *n);

### 1. Don't swap horses in crossing a stream
* 1-swap.c
* swaps the values of two integers.
* Prototype: void swap_int(int *a, int *b);

### 2. This report, by its very length, defends itself against the risk of being read
* 2-strlen.c
* returns the length of a string.
* Prototype: int _strlen(char *s);

### 3. I do not fear computers. I fear the lack of them
* 3-puts.c
* prints a string, followed by a new line, to stdout.
* Prototype: void _puts(char *str);

### 4. I can only go one way. I've not got a reverse gear
* 4-print_rev.c
* prints a string, in reverse, followed by a new line.
* Prototype: void print_rev(char *s);

### 5. A good engineer thinks in reverse and asks himself about the stylistic consequences of the components and systems he proposes
* 5-rev_string.c
* reverses a string.
* Prototype: void rev_string(char *s);

### 6. Half the lies they tell about me aren't true
* 6-puts2.c
* prints one char out of 2 of a string, followed by a new line.
* Prototype: void puts2(char *str);
* The function should print only one character out of two, starting with the first one

### 7. Winning is only half of it. Having fun is the other half
* 7-puts_half.c
* prints half of a string, followed by a new line.
* Prototype: void puts_half(char *str);
* should print the second half of the string
* If number of characters is odd, print the last n, where n = (length_of_the_string - 1) / 2

### 8. Arrays are not pointers
* 8-print_array.c
* prints n elements of an array of integers, followed by a new line.
* Prototype: void print_array(int *a, int n);
* n is the number of elements of the array to be printed
* Numbers seperated by a comma and space

### 9. strcpy
* 9-strcpy.c
* Prototype: char *_strcpy(char *dest, char *src);
* copies the string pointed to by src, including the terminating null byte (\0), to the buffer pointed to by dest.
* Return value: the pointer to dest

### 10. Great leaders are willing to sacrifice the numbers to save the people. Poor leaders sacrifice the people to save the numbers
* 100-atoi.c
* Prototype: int _atoi(char *s);
* convert a string to an integer.
* If there are no numbers in the string, the function must return 0
* not allowed to use long
* use the -fsanitize=signed-integer-overflow gcc flag to compile

### 11. Don't hate the hacker, hate the code
* 101-keygen.c
* generates random valid passwords for the program 101-crackme.