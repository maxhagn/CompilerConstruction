        .file   "asmb.s"
        .section    .rodata
mask:
        .byte 15,14,13,12,11,10,9,8,7,6,5,4,3,2,1,0
        .text
        .globl  asmb
        .type   asmb, @function
asmb:
.LFB0:
        .cfi_startproc

        # compare value of %rsi to 0
        cmpq    $0, %rsi

        # if %rsi less or equal zero return unchanged input
        jle     return

        # set register %rax to zero
        mov     $0, %rax

        # move mask to sse register %xmm8
        movdqu mask(%rip), %xmm8

        loop:

        # subtract 16 from register %rsi
        subq $16, %rsi

        # load first 16 chars from first argument starting at %rax to sse register %xmm1
        movdqu  (%rdi, %rax), %xmm1

        # load last 16 chars from first argument starting at %rsi to sse register %xmm2
        movdqu  (%rdi, %rsi), %xmm2

        # moves bytes in %xmm1 as specified by control bytes in %xmm8
        pshufb %xmm8, %xmm1

        # moves bytes in %xmm2 as specified by control bytes in %xmm8
        pshufb %xmm8, %xmm2

        # move values from sse register %xmm1 back to first return register at %rsi
        movdqu  %xmm1, (%rdi, %rsi)

        # move values from sse register %xmm2 back to first return register at %rax
        movdqu  %xmm2, (%rdi, %rax)

        # add 16 to register %rax
        addq $16, %rax

        # compare value of %rsi and %rax
        cmpq   %rsi, %rax

        # repeat loop if %rsi smaller than %rax
        jl    loop

        return:
        ret
        .cfi_endproc
.LFE0:
        .size   asmb, .-asmb
        .ident  "GCC: (Debian 6.3.0-18+deb9u1) 6.3.0 20170516"
        .section        .note.GNU-stack,"",@progbits
