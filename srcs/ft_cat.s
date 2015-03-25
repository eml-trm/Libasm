%define SYSCALL(nb) 0x2000000 | nb
%define READ 3

section .data
	bufsize dw 1024

section .bss
	buf resb 1024

section .text
	global _ft_cat
	extern _ft_puts

_ft_cat:
	mov rax, SYSCALL(READ)
	mov rbx, rdi
	mov rcx, buf
	mov rdx, bufsize
	syscall
	mov rdi, rdx
	call _ft_puts
	leave
	ret
