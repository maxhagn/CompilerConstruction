	.file	"asma.s"
    .section    .rodata
mask:
    .byte 15,14,13,12,11,10,9,8,7,6,5,4,3,2,1,0
	.text
	.globl	asma
	.type	asma, @function
asma:
.LFB0:
	.cfi_startproc

	# move values from first argument char[] to sse register %xmm1
	movdqu  (%rdi), %xmm1

    # move mask to sse register %xmm8
	movdqu mask(%rip), %xmm8

    # moves bytes in %xmm1 as specified by control bytes in %xmm8
    pshufb %xmm8, %xmm1

	# move values from sse register %xmm1 back to first return register
    movdqu  %xmm1, (%rax)

	ret
	.cfi_endproc
.LFE0:
	.size	asma, .-asma
	.ident	"GCC: (Debian 6.3.0-18+deb9u1) 6.3.0 20170516"
	.section	.note.GNU-stack,"",@progbits
