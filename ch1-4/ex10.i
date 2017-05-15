	.file	"ch3.c"
	.section	.rodata
.LC0:
	.string	" is negative "
.LC1:
	.string	" is positive "
	.text
	.globl	is_positive
	.type	is_positive, @function
is_positive:
.LFB0:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movl	%edi, -4(%rbp)
	cmpl	$0, -4(%rbp)
	jns	.L2
	movl	$.LC0, %edi
	movl	$0, %eax
	call	printf
	jmp	.L5
.L2:
	cmpl	$0, -4(%rbp)
	jle	.L4
	movl	$.LC1, %edi
	movl	$0, %eax
	call	printf
	jmp	.L5
.L4:
	movl	$32, %edi
	call	putchar
.L5:
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE0:
	.size	is_positive, .-is_positive
	.section	.rodata
.LC2:
	.string	"and odd"
.LC3:
	.string	"and even"
	.text
	.globl	is_even
	.type	is_even, @function
is_even:
.LFB1:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movl	%edi, -4(%rbp)
	movl	-4(%rbp), %eax
	andl	$1, %eax
	testl	%eax, %eax
	je	.L7
	movl	$.LC2, %edi
	call	puts
	jmp	.L9
.L7:
	movl	$.LC3, %edi
	call	puts
.L9:
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1:
	.size	is_even, .-is_even
	.section	.rodata
.LC4:
	.string	"%d"
	.text
	.globl	main
	.type	main, @function
main:
.LFB2:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movl	$-4, -4(%rbp)
	jmp	.L11
.L12:
	movl	-4(%rbp), %eax
	movl	%eax, %esi
	movl	$.LC4, %edi
	movl	$0, %eax
	call	printf
	movl	-4(%rbp), %eax
	movl	%eax, %edi
	call	is_positive
	movl	-4(%rbp), %eax
	movl	%eax, %edi
	call	is_even
	addl	$1, -4(%rbp)
.L11:
	cmpl	$4, -4(%rbp)
	jle	.L12
	movl	$0, %eax
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE2:
	.size	main, .-main
	.ident	"GCC: (Ubuntu 5.4.0-6ubuntu1~16.04.4) 5.4.0 20160609"
	.section	.note.GNU-stack,"",@progbits
