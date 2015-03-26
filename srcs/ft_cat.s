%define SYSCALL(nb) 0x2000000 | nb
%define READ 3

section .data
	buf times 300 db 0
	buffsize equ $ - buf

section .text
	global _ft_cat
	extern _ft_puts

_ft_cat:
	mov rax, SYSCALL(READ)
	mov rdi, rdi
	lea rsi, [rel buf]
	mov rdx, buffsize
	syscall
	mov rdi, rsi
	call _ft_puts
	leave
	ret
