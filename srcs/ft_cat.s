<<<<<<< HEAD
section .text
	global _ft_cat

_ft_cat:
	push rbx
	mov rbx, rdi

=======
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
>>>>>>> 3d68084c9907ccbd5d7a147ce59a8c05490d8f5e
