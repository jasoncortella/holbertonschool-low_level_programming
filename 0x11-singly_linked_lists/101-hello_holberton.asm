	extern printf
	global main
main:
	mov edi, format
	mov eax, 0
	call printf
	ret
format:
	db "Hello, Holberton", 10, 0
