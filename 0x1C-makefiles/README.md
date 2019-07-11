# 0x1C. C - Makefiles
## This directory contains answer files to [Holberton School](https://www.holbertonschool.com/) devops project 0x08

### 0. make -f 0-Makefile
* File: 0-Makefile
* Makefile with the following attributes
  * name of the executable: holberton
  * rules: all
    * The all rule builds the executable
  * variables: none

### 1. make -f 1-Makefile
* File: 1-Makefile
* same as `0-Makefile` with the following additions
  * variables: CC, SRC
    * CC: the compiler to be used
    * SRC: the .c files

### 2. make -f 2-Makefile
* File: 2-Makefile
* same as `1-Makefile` with the following additions
  * variables: OBJ, NAME
    * OBJ: the .o files
    * NAME: the name of the executable
  * The all rule should recompile only the updated source files
  * Does not have a list of all the .o files

### 3. make -f 3-Makefile
* File: 3-Makefile
* same as `2-Makefile` with the following additions
  * rules: all, clean, oclean, fclean, re
    * clean: deletes all Emacs and Vim temporary files along with the executable
    * oclean: deletes the object files
    * fclean: deletes the Emacs temporary files, the executable, and the object files
    * re: forces recompilation of all source files
  * variables: CC, SRC, OBJ, NAME, RM
    * OBJ: the .o files
    * NAME: the name of the executable
    * RM: the program to delete files
  * The all rule should recompile only the updated source files
  * The clean, oclean, fclean, re rules should never fail
  * Does not have a list of all the .o files

### 4. A complete Makefile
* File: 4-Makefile
* same as `3-Makefile` with the following additions
  * variables: CFLAGS
    * CFLAGS: your favorite compiler flags: -Wall -Werror -Wextra -pedantic

### 5. Island Perimeter
* File: 5-island_perimeter.py
* a function `def island_perimeter(grid):` that returns the perimeter of the island described in grid:
* grid is a list of list of integers:
  * 0 represents a water zone
  * 1 represents a land zone
  * One cell is a square with side length 1
  * Grid cells are connected horizontally/vertically (not diagonally).
  * Grid is rectangular, width and height don’t exceed 100
* Grid is completely surrounded by water, and there is one island (or nothing).
* The island doesn’t have “lakes” (water inside that isn’t connected to the water around the island).

### 6. make -f 100-Makefile
* File: 100-Makefile
* same as `4-Makefile` with the following additions
  * uses `$(RM)` for the cleaning up rules, but does not set the `RM` variable
  * uses the string `$(CC)` no more than once
  * uses the string `$(RM)` no more than twice
  * does not use the string `$(CFLAGS)`
  * does not have an `$(OBJ)` rule
  * does not use the `%.o: %.c` rule
  * works even if there is a file in the folder that has the same name as one of your rule
  * does not compile if header file `m.h` is missing