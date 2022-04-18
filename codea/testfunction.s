
.LFB0:
	.cfi_startproc
	endbr64
	subq	$40, %rsp
	.cfi_def_cfa_offset 48
	movl	$8, %esi
	movl	$7, %edi
	movdqa	.LC0(%rip), %xmm0
	movq	%fs:40, %rax
	movq	%rax, 24(%rsp)
	xorl	%eax, %eax
	movq	f@GOTPCREL(%rip), %rax
	movq	%rsp, %rdx
	movups	%xmm0, 8(%rsp)
	movq	%rax, (%rsp)
	call	f@PLT
	movq	24(%rsp), %rcx
	xorq	%fs:40, %rcx
	jne	.L5
	addq	$40, %rsp
	.cfi_remember_state
	.cfi_def_cfa_offset 8
	ret
