section .text
	global _ft_isaplha
_ft_isaplha:
	push rsp
	mov rsp, rdi
	cmp rsp, 65
	jnl is_maj
	jng is_false

is_maj:
	cmp rsp, 90
	jng is_true
	jnl is_not_maj

is_not_maj:
	cmp rsp, 97
	jnl is_min
	jng is_false

is_min:
	cmp rsp, 122
	jng is_true
	jnl is_false

is_false:
	mov rax, 0
	leave
	ret

is_true:
	mov rax, 1
	leave
	ret
