	.file	"asma_function.c"
    .data
    _32:  .fill 16,1,-32
    _102: .fill 16,1,-102
    _225: .fill 16,1,-225

	.text
	.globl	asma
	.type	asma, @function
asma:
.LFB0:
	.cfi_startproc
	xorl	%eax, %eax
.L2:
	movq	%rax, %rdx
	movb	(%rdi,%rax), %cl
	negq	%rdx
	movb	15(%rdi,%rdx), %sil
	movb	%sil, (%rdi,%rax)
	incq	%rax
	movb	%cl, 15(%rdi,%rdx)
	cmpq	$8, %rax
	jne	.L2
	ret
	.cfi_endproc
.LFE0:
	.size	asma, .-asma
	.ident	"GCC: (Ubuntu 9.4.0-1ubuntu1~20.04) 9.4.0"
	.section	.note.GNU-stack,"",@progbits
