section .text
	global _ft_isalpha

_ft_isalpha:
	push rsp
	mov rsp, rdi
	cmp rsp, 65 ; = 'A'
	jge is_maj ; >=
	jl is_false ; <

is_maj:
	cmp rsp, 90 ; = 'Z'
	jle is_true ; <=
	jg is_not_maj ; >

is_not_maj:
	cmp rsp, 97 ; = 'a'
	jge is_min ; >=
	jl is_false ; <

is_min:
	cmp rsp, 122 ; = 'z'
	jle is_true ; <=
	jg is_false ; >

is_false:
	mov rax, 0
	pop rsp
	ret

is_true:
	mov rax, 1
	pop rsp
	ret
