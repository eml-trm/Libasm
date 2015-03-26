%define SYSCALL(nb) 0x2000000 | nb
%define READ 3

section .data
	buf times 1 db 0
	buffsize equ $ - buf

section .text
	global _ft_cat
	extern _ft_putstr

_ft_cat:
	mov rax, SYSCALL(READ)
	;mov rdi, rdi
	lea rsi, [rel buf]
	mov rdx, buffsize
	syscall
	push rax
	mov r8, rdi
	mov rdi, rsi
	call _ft_putstr
	mov rdi, r8
	pop rax
	cmp rax, 0
	jg _ft_cat
	ret
