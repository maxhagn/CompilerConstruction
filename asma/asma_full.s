	.file	"asma_full.c"
	.text
	.globl	asma
	.type	asma, @function
asma:
.LFB0:
	.cfi_startproc
	endbr64
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
	.section	.note.gnu.property,"a"
	.align 8
	.long	 1f - 0f
	.long	 4f - 1f
	.long	 5
0:
	.string	 "GNU"
1:
	.align 8
	.long	 0xc0000002
	.long	 3f - 2f
2:
	.long	 0x3
3:
	.align 8
4:
