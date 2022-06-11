	.global	gcd
	.type	gcd, @function
gcd:
gcd_st: 
	movq	%rdi, %r11
	movq	%rsi, %r10
	cmp	%r10, %r11
	setg	%r11b
	and	$1, %r11
	notq	%r11
	and 	$1, %r11b
	jz  	gcd_le
	movq	%rdi, %r11
	movq	%rsi, %r10
	negq	%r10
	addq	%r10, %r11
	movq	%r11, %rdi
	jmp	gcd_st
gcd_le: 
	movq	%rdi, %r11
	movq	%rsi, %r10
	cmp	%r11, %r10
	sete	%r11b
	and	$1, %r11
	and 	$1, %r11b
	jz  	gcd_eq
	movq	%rdi, %r11
	negq	%r11
	movq	%rsi, %r10
	addq	%r10, %r11
	movq	%r11, %rsi
	jmp	gcd_st
gcd_eq: 
	movq	%rdi, %r11
	movq	%r11, %rax
	ret
