# 0x05. C - More pointers, arrays and strings
## Project answer files

### 0. memset
* 0-memset.c
* fills memory with a constant byte.
* Prototype: char *_memset(char *s, char b, unsigned int n);
* Returns a pointer to the memory area s

### 1. memcpy
* 1-memcpy.c
* copies memory area.
* Prototype: char *_memcpy(char *dest, char *src, unsigned int n);
* Returns a pointer to dest

### 2. strchr
* 2-strchr.c
* locates a character in a string.
* Prototype: char *_strchr(char *s, char c);
* Returns a pointer to the first occurrence of the character c in the string s
* or returns NULL if the character is not found

### 3. strspn
* 3-strspn.c
* gets the length of a prefix substring.
* Prototype: unsigned int _strspn(char *s, char *accept);
* Returns the number of bytes in the initial segment of s which consist only of bytes from accept

### 4. strpbrk
* 4-strpbrk.c
* searches a string for any of a set of bytes.
* Prototype: char *_strpbrk(char *s, char *accept);
* Returns a pointer to the byte in s that matches one of the bytes in accept
* or returns NULL if no such byte is found

### 5. strstr
* 5-strstr.c
* locates a substring.
* Prototype: char *_strstr(char *haystack, char *needle);
* Returns a pointer to the beginning of the located substring
* or returns NULL if the substring is not found.

### 6. Chess is mental torture
* 7-print_chessboard.c
* prints the chessboard.
* Prototype: void print_chessboard(char (*a)[8]);

### 7. The line of life is a ragged diagonal between duty and desire
* 8-print_diagsums.c
* prints the sum of the two diagonals of a square matrix of integers.
* Prototype: void print_diagsums(int *a, int size);

### 8. Double pointer, double fun
* 9-set_string.c
* sets the value of a pointer to a char.
* Prototype: void set_string(char **s, char *to);

### 9. My primary goal of hacking was the intellectual curiosity, the seduction of adventure 
* Create a file that contains the password for the crackme2 executable.
* file should contain the exact password, no new line, no extra space