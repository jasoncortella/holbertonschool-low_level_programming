# 0x14. C - File I/O
## This directory contains answer files to project 0x14

### 0. Tread lightly, she is near
* File: 0-read_textfile.c
* a function that reads a text file and prints it to the POSIX standard output.
* Prototype: ssize_t read_textfile(const char *filename, size_t letters);

### 1. Under the snow
* File: 1-create_file.c
* a function that creates a file.
* Prototype: int create_file(const char *filename, char *text_content);

### 2. Speak gently, she can hear
* File: 2-append_text_to_file.c
* a function that appends text at the end of a file.
* Prototype: int append_text_to_file(const char *filename, char *text_content);

### 3. cp
* File: 3-cp.c
* a program that copies the content of a file to another file.
* Usage: cp file_from file_to
* Permissions of the created file: rw-rw-r--

### 4. elf
* File: 100-elf_header.c
* a program that displays the information contained in the ELF header at the start of an ELF file.
* Usage: elf_header elf_filename