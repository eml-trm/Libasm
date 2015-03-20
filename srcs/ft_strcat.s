section .text
	global _ft_strcat
	extern _ft_strlen

_ft_strcat:
	push rbx
	mov rbx, rdi
	mov rdx, 0
	mov rcx, _ft_strlen
