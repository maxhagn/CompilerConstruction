	.global	f
	.type	f, @function
f:
	addq	$32, %rsp
	pushq	%rdi
	movq	%rdi, %r11
	movq	%r11, %rdi
	call	g
	popq	%rdi
	subq	$32, %rsp
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
	popq	%rdi
	subq	$32, %rsp
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
	popq	%rdi
	subq	$32, %rsp
	movq	%rax, %r11
	movq	%r11, %rax
	ret
	.global	i
	.type	i, @function
i:
	movq	%rdi, %r11
	movq	%r11, %rax
	ret
