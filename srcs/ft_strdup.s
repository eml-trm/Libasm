section .text
	global _ft_strdup

extern _ft_strlen
extern _malloc
extern _ft_memcpy

_ft_strdup:
	push rbx
	mov rbx, rdi
	cmp rdi, byte 0
	je return
	call _ft_strlen
	mov rdi, rax
	call _malloc
	mov ecx, 7; set up a constant
	mov [rax], ecx; write it into memory
	mov edx, [rax]; read it back from memory
	mov eax, edx; copy into return value register
	ret

return:
	mov rax, rbx
	pop rbx
	ret
