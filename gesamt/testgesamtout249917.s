	.global	f
	.type	f, @function
f:
	addq	$32, %rsp
	pushq	%rdi
	movq	%rdi, %r11
	movq	%r11, %rdi
	call	g
	subq	$32, %rsp
	popq	%rdi
	movq	%rax, %r11
	movq	%r11, %rax
	ret
	.global	g
	.type	g, @function
g:
	addq	$32, %rsp
	pushq	%rdi
	movq	%rdi, %r11
	movq	%r11, %rdi
	call	h
	subq	$32, %rsp
	popq	%rdi
	movq	%rax, %r11
	movq	%r11, %rax
	ret
	.global	h
	.type	h, @function
h:
	addq	$32, %rsp
	pushq	%rdi
	movq	%rdi, %r11
	movq	%r11, %rdi
	call	i
	subq	$32, %rsp
	popq	%rdi
	movq	%rax, %r11
	movq	%r11, %rax
	ret
	.global	i
	.type	i, @function
i:
	movq	%rdi, %r11
	movq	%r11, %rax
	ret
