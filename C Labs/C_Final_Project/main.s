	.file	"main.c"
	.text
	.comm	entry, 320, 5
	.def	__main;	.scl	2;	.type	32;	.endef
	.section .rdata,"dr"
	.align 8
.LC0:
	.ascii "\12~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~^^##  WELCOME TO STUDENT DATA BASE  ##^^~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\0"
	.align 8
.LC1:
	.ascii "\12~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~^^##  You Can Add Up To %d Students ##^^~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\12\0"
	.align 8
.LC2:
	.ascii "\12\12\11#########--COMMAND MENU--#########\0"
	.align 8
.LC3:
	.ascii "\12\11Choose Any Operation To Perform :\0"
	.align 8
.LC4:
	.ascii "\12\11[1] Add new student to the database.\0"
	.align 8
.LC5:
	.ascii "\12\11[2] Check if a student ID you enter exists in database.\0"
	.align 8
.LC6:
	.ascii "\12\11[3] Display student Data using his ID.\0"
	.align 8
.LC7:
	.ascii "\12\11[4] Get the list of IDs of the students.\0"
	.align 8
.LC8:
	.ascii "\12\11[5] Get the number of students in the database.\0"
	.align 8
.LC9:
	.ascii "\12\11[6] Check if the database is full.\0"
	.align 8
.LC10:
	.ascii "\12\11[7] Delete the student data with the given ID.\0"
.LC11:
	.ascii "\12\12\11[8] End Program.\12   #\0"
.LC12:
	.ascii "%u\0"
	.align 8
.LC13:
	.ascii "\12\11\11### Database Is Full!! ###\12Do You want to delete an existing Student?\0"
.LC14:
	.ascii "\12Yes [1]\12No  [0] : \0"
.LC15:
	.ascii "\12Student ID      : \0"
	.align 8
.LC16:
	.ascii "\12Student ID Can't Be negative.....Please Try Again: \0"
	.align 8
.LC17:
	.ascii "\12Student ID Can't Be Zero.....Please Try Again: \0"
	.align 8
.LC18:
	.ascii "\12Student ID Already Exists....Try Again: \0"
.LC19:
	.ascii "Student year    : \0"
.LC20:
	.ascii "Subject %u ID    : \0"
.LC21:
	.ascii "Subject %u Grade : \0"
	.align 8
.LC22:
	.ascii "\12The allowed range of grades is from [0] to [100]....Try Again: \0"
	.align 8
.LC23:
	.ascii "\12\11###  Student Data Added Successfully  ###\0"
	.align 8
.LC24:
	.ascii "\12Student Data Add Failed!!\12Try Again.......\0"
	.align 8
.LC25:
	.ascii "\12To Add Another Student Data Enter  [1]\12To Return To Command Menu Enter    [0] : \0"
	.align 8
.LC26:
	.ascii "\12Enter a Student ID to check : \0"
	.align 8
.LC27:
	.ascii "\12\11###  Student ID: { %u } Is Existing  ###\12\0"
	.align 8
.LC28:
	.ascii "\12\11###  Student ID Is Not Existing  ###\0"
	.align 8
.LC29:
	.ascii "\12\11Try Again? [1]\12\11Return To Command Menu [0] : \0"
	.align 8
.LC30:
	.ascii "\12Enter a Student ID to display his/her Data : \0"
	.align 8
.LC31:
	.ascii "\12\11###  Student ID Is Not Existing  in database  ###\0"
	.align 8
.LC32:
	.ascii "\12\11*Display Existing IDs   [2]\12\11*Try Again?            [1]\12\11*Return To Command Menu [0] : \0"
	.align 8
.LC33:
	.ascii "\12Number of IDs in data base is : %u\0"
.LC34:
	.ascii "\12\12ID List :  \0"
.LC35:
	.ascii "\12## { %u } ##\0"
	.align 8
.LC36:
	.ascii "\12Number of students in the data base is : %u\0"
	.align 8
.LC37:
	.ascii "\12\11\11### Database Is Not Full ###\12Do You want to add a New Student?\0"
	.align 8
.LC38:
	.ascii "\12Enter a Student ID to delete: \0"
	.align 8
.LC39:
	.ascii "Student ID Can't Be Zero.....Please Try Again:  \0"
	.align 8
.LC40:
	.ascii "\12Student ID is not existing....\12Do you want to try again?\0"
.LC41:
	.ascii "\12\11Yes [1]\12\11No  [0] : \0"
	.align 8
.LC42:
	.ascii "\12\11\11#### Student data of ID { %u }  have been deleted ####\12\0"
	.align 8
.LC43:
	.ascii "\12Do you want to delete another ID?\0"
	.align 8
.LC44:
	.ascii "\12INVALID VALUE!!\12Please Enter a number of an existing operation:  #\0"
	.align 8
.LC45:
	.ascii "\12\12\11########################################\0"
	.align 8
.LC46:
	.ascii "\11####         END OF PROGRAM         ####\0"
	.align 8
.LC47:
	.ascii "\11########################################\0"
	.text
	.globl	main
	.def	main;	.scl	2;	.type	32;	.endef
	.seh_proc	main
main:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	addq	$-128, %rsp
	.seh_stackalloc	128
	.seh_endprologue
	call	__main
	movl	$0, -20(%rbp)
	leaq	.LC0(%rip), %rcx
	call	printf
	movl	$10, %edx
	leaq	.LC1(%rip), %rcx
	call	printf
.L2:
	leaq	.LC2(%rip), %rcx
	call	puts
	leaq	.LC3(%rip), %rcx
	call	puts
	leaq	.LC4(%rip), %rcx
	call	printf
	leaq	.LC5(%rip), %rcx
	call	printf
	leaq	.LC6(%rip), %rcx
	call	printf
	leaq	.LC7(%rip), %rcx
	call	printf
	leaq	.LC8(%rip), %rcx
	call	printf
	leaq	.LC9(%rip), %rcx
	call	printf
	leaq	.LC10(%rip), %rcx
	call	printf
	leaq	.LC11(%rip), %rcx
	call	printf
.L3:
	leaq	-16(%rbp), %rax
	movq	%rax, %rdx
	leaq	.LC12(%rip), %rcx
	call	scanf
	movl	-16(%rbp), %eax
	cmpl	$8, %eax
	ja	.L4
	movl	%eax, %eax
	leaq	0(,%rax,4), %rdx
	leaq	.L6(%rip), %rax
	movl	(%rdx,%rax), %eax
	cltq
	leaq	.L6(%rip), %rdx
	addq	%rdx, %rax
	jmp	*%rax
	.section .rdata,"dr"
	.align 4
.L6:
	.long	.L4-.L6
	.long	.L20-.L6
	.long	.L12-.L6
	.long	.L11-.L6
	.long	.L10-.L6
	.long	.L9-.L6
	.long	.L8-.L6
	.long	.L52-.L6
	.long	.L56-.L6
	.text
.L60:
	nop
.L13:
.L20:
	call	SDB_IsFull
	movzbl	%al, %eax
	movl	%eax, -8(%rbp)
	cmpl	$1, -8(%rbp)
	jne	.L14
	leaq	.LC13(%rip), %rcx
	call	printf
	leaq	.LC14(%rip), %rcx
	call	printf
	leaq	-12(%rbp), %rax
	movq	%rax, %rdx
	leaq	.LC12(%rip), %rcx
	call	scanf
	movl	-12(%rbp), %eax
	cmpl	$1, %eax
	je	.L57
	jmp	.L2
.L14:
	leaq	.LC15(%rip), %rcx
	call	printf
.L16:
	leaq	-24(%rbp), %rax
	movq	%rax, %rdx
	leaq	.LC12(%rip), %rcx
	call	scanf
	movl	-24(%rbp), %eax
	cmpl	$1294967295, %eax
	jbe	.L17
	leaq	.LC16(%rip), %rcx
	call	printf
	jmp	.L16
.L17:
	movl	-24(%rbp), %eax
	testl	%eax, %eax
	jne	.L18
	leaq	.LC17(%rip), %rcx
	call	printf
	jmp	.L16
.L18:
	movl	-24(%rbp), %eax
	movl	%eax, %ecx
	call	SDB_IsIdExist
	movzbl	%al, %eax
	movl	%eax, -8(%rbp)
	cmpl	$1, -8(%rbp)
	jne	.L19
	leaq	.LC18(%rip), %rcx
	call	printf
	jmp	.L20
.L19:
	leaq	.LC19(%rip), %rcx
	call	printf
	leaq	-28(%rbp), %rax
	movq	%rax, %rdx
	leaq	.LC12(%rip), %rcx
	call	scanf
	movl	$0, -4(%rbp)
	jmp	.L21
.L24:
	movl	-4(%rbp), %eax
	addl	$1, %eax
	movl	%eax, %edx
	leaq	.LC20(%rip), %rcx
	call	printf
	leaq	-40(%rbp), %rax
	movl	-4(%rbp), %edx
	salq	$2, %rdx
	addq	%rdx, %rax
	movq	%rax, %rdx
	leaq	.LC12(%rip), %rcx
	call	scanf
	movl	-4(%rbp), %eax
	addl	$1, %eax
	movl	%eax, %edx
	leaq	.LC21(%rip), %rcx
	call	printf
	leaq	-52(%rbp), %rax
	movl	-4(%rbp), %edx
	salq	$2, %rdx
	addq	%rdx, %rax
	movq	%rax, %rdx
	leaq	.LC12(%rip), %rcx
	call	scanf
	jmp	.L22
.L23:
	leaq	.LC22(%rip), %rcx
	call	printf
	leaq	-52(%rbp), %rax
	movl	-4(%rbp), %edx
	salq	$2, %rdx
	addq	%rdx, %rax
	movq	%rax, %rdx
	leaq	.LC12(%rip), %rcx
	call	scanf
.L22:
	movl	-4(%rbp), %eax
	movl	-52(%rbp,%rax,4), %eax
	cmpl	$100, %eax
	ja	.L23
	addl	$1, -4(%rbp)
.L21:
	cmpl	$2, -4(%rbp)
	jbe	.L24
	movl	-28(%rbp), %edx
	movl	-24(%rbp), %eax
	leaq	-52(%rbp), %r8
	leaq	-40(%rbp), %rcx
	movq	%r8, %r9
	movq	%rcx, %r8
	movl	%eax, %ecx
	call	SDB_AddEntry
	movzbl	%al, %eax
	movl	%eax, -8(%rbp)
	cmpl	$1, -8(%rbp)
	jne	.L25
	leaq	.LC23(%rip), %rcx
	call	puts
	jmp	.L26
.L25:
	cmpl	$0, -8(%rbp)
	jne	.L26
	leaq	.LC24(%rip), %rcx
	call	puts
	jmp	.L20
.L26:
	leaq	.LC25(%rip), %rcx
	call	printf
	leaq	-12(%rbp), %rax
	movq	%rax, %rdx
	leaq	.LC12(%rip), %rcx
	call	scanf
	movl	-12(%rbp), %eax
	cmpl	$1, %eax
	jne	.L2
	jmp	.L20
.L12:
	leaq	.LC26(%rip), %rcx
	call	printf
	leaq	-24(%rbp), %rax
	movq	%rax, %rdx
	leaq	.LC12(%rip), %rcx
	call	scanf
	jmp	.L28
.L29:
	leaq	.LC17(%rip), %rcx
	call	printf
	leaq	-24(%rbp), %rax
	movq	%rax, %rdx
	leaq	.LC12(%rip), %rcx
	call	scanf
.L28:
	movl	-24(%rbp), %eax
	testl	%eax, %eax
	je	.L29
	movl	-24(%rbp), %eax
	movl	%eax, %ecx
	call	SDB_IsIdExist
	movzbl	%al, %eax
	movl	%eax, -8(%rbp)
	cmpl	$1, -8(%rbp)
	jne	.L30
	movl	-24(%rbp), %eax
	movl	%eax, %edx
	leaq	.LC27(%rip), %rcx
	call	printf
	jmp	.L2
.L30:
	cmpl	$0, -8(%rbp)
	jne	.L2
	leaq	.LC28(%rip), %rcx
	call	puts
	leaq	.LC29(%rip), %rcx
	call	printf
	leaq	-12(%rbp), %rax
	movq	%rax, %rdx
	leaq	.LC12(%rip), %rcx
	call	scanf
	movl	-12(%rbp), %eax
	cmpl	$1, %eax
	jne	.L2
	jmp	.L12
.L11:
	leaq	.LC30(%rip), %rcx
	call	printf
	leaq	-24(%rbp), %rax
	movq	%rax, %rdx
	leaq	.LC12(%rip), %rcx
	call	scanf
	jmp	.L33
.L34:
	leaq	.LC17(%rip), %rcx
	call	printf
	leaq	-24(%rbp), %rax
	movq	%rax, %rdx
	leaq	.LC12(%rip), %rcx
	call	scanf
.L33:
	movl	-24(%rbp), %eax
	testl	%eax, %eax
	je	.L34
	movl	$0, -4(%rbp)
	jmp	.L35
.L37:
	leaq	entry(%rip), %rax
	movl	-4(%rbp), %edx
	salq	$5, %rdx
	addq	%rdx, %rax
	movl	(%rax), %edx
	movl	-24(%rbp), %eax
	cmpl	%eax, %edx
	jne	.L36
	leaq	entry(%rip), %rax
	movl	-4(%rbp), %edx
	salq	$5, %rdx
	addq	%rdx, %rax
	addq	$4, %rax
	movl	(%rax), %eax
	movl	%eax, -28(%rbp)
	leaq	entry(%rip), %rax
	movl	-4(%rbp), %edx
	salq	$5, %rdx
	addq	%rdx, %rax
	addq	$8, %rax
	movl	(%rax), %eax
	movl	%eax, -40(%rbp)
	leaq	entry(%rip), %rax
	movl	-4(%rbp), %edx
	salq	$5, %rdx
	addq	%rdx, %rax
	addq	$12, %rax
	movl	(%rax), %eax
	movl	%eax, -52(%rbp)
	leaq	entry(%rip), %rax
	movl	-4(%rbp), %edx
	salq	$5, %rdx
	addq	%rdx, %rax
	addq	$16, %rax
	movl	(%rax), %eax
	movl	%eax, -36(%rbp)
	leaq	entry(%rip), %rax
	movl	-4(%rbp), %edx
	salq	$5, %rdx
	addq	%rdx, %rax
	addq	$20, %rax
	movl	(%rax), %eax
	movl	%eax, -48(%rbp)
	leaq	entry(%rip), %rax
	movl	-4(%rbp), %edx
	salq	$5, %rdx
	addq	%rdx, %rax
	addq	$24, %rax
	movl	(%rax), %eax
	movl	%eax, -32(%rbp)
	leaq	entry(%rip), %rax
	movl	-4(%rbp), %edx
	salq	$5, %rdx
	addq	%rdx, %rax
	addq	$28, %rax
	movl	(%rax), %eax
	movl	%eax, -44(%rbp)
.L36:
	addl	$1, -4(%rbp)
.L35:
	cmpl	$9, -4(%rbp)
	jbe	.L37
	movl	-24(%rbp), %ecx
	leaq	-52(%rbp), %r8
	leaq	-40(%rbp), %rdx
	leaq	-28(%rbp), %rax
	movq	%r8, %r9
	movq	%rdx, %r8
	movq	%rax, %rdx
	call	SDB_ReadEntry
	movzbl	%al, %eax
	movl	%eax, -8(%rbp)
	cmpl	$0, -8(%rbp)
	jne	.L2
	leaq	.LC31(%rip), %rcx
	call	puts
	leaq	.LC32(%rip), %rcx
	call	printf
	leaq	-12(%rbp), %rax
	movq	%rax, %rdx
	leaq	.LC12(%rip), %rcx
	call	scanf
	movl	-12(%rbp), %eax
	cmpl	$2, %eax
	je	.L58
	jmp	.L11
.L58:
	nop
.L10:
	movl	$0, -4(%rbp)
	jmp	.L40
.L41:
	movl	-4(%rbp), %eax
	movl	$0, -96(%rbp,%rax,4)
	addl	$1, -4(%rbp)
.L40:
	cmpl	$9, -4(%rbp)
	jbe	.L41
	leaq	-96(%rbp), %rdx
	leaq	-20(%rbp), %rax
	movq	%rax, %rcx
	call	SDB_GetIdList
	movl	-20(%rbp), %eax
	movl	%eax, %edx
	leaq	.LC33(%rip), %rcx
	call	printf
	leaq	.LC34(%rip), %rcx
	call	printf
	movl	$0, -4(%rbp)
	jmp	.L42
.L44:
	movl	-4(%rbp), %eax
	movl	-96(%rbp,%rax,4), %eax
	testl	%eax, %eax
	je	.L43
	movl	-4(%rbp), %eax
	movl	-96(%rbp,%rax,4), %eax
	movl	%eax, %edx
	leaq	.LC35(%rip), %rcx
	call	printf
.L43:
	addl	$1, -4(%rbp)
.L42:
	cmpl	$9, -4(%rbp)
	jbe	.L44
	jmp	.L2
.L9:
	call	SDB_GetUsedSize
	movl	%eax, -20(%rbp)
	movl	-20(%rbp), %eax
	movl	%eax, %edx
	leaq	.LC36(%rip), %rcx
	call	printf
	jmp	.L2
.L8:
	call	SDB_IsFull
	movzbl	%al, %eax
	movl	%eax, -8(%rbp)
	cmpl	$1, -8(%rbp)
	jne	.L45
	leaq	.LC13(%rip), %rcx
	call	printf
	leaq	.LC14(%rip), %rcx
	call	printf
	leaq	-12(%rbp), %rax
	movq	%rax, %rdx
	leaq	.LC12(%rip), %rcx
	call	scanf
	movl	-12(%rbp), %eax
	cmpl	$1, %eax
	je	.L59
	jmp	.L2
.L45:
	leaq	.LC37(%rip), %rcx
	call	printf
	leaq	.LC14(%rip), %rcx
	call	printf
	leaq	-12(%rbp), %rax
	movq	%rax, %rdx
	leaq	.LC12(%rip), %rcx
	call	scanf
	movl	-12(%rbp), %eax
	cmpl	$1, %eax
	je	.L60
	jmp	.L2
.L57:
	nop
	jmp	.L52
.L59:
	nop
.L7:
.L52:
	leaq	.LC38(%rip), %rcx
	call	printf
	leaq	-24(%rbp), %rax
	movq	%rax, %rdx
	leaq	.LC12(%rip), %rcx
	call	scanf
	jmp	.L48
.L49:
	leaq	.LC39(%rip), %rcx
	call	printf
	leaq	-24(%rbp), %rax
	movq	%rax, %rdx
	leaq	.LC12(%rip), %rcx
	call	scanf
.L48:
	movl	-24(%rbp), %eax
	testl	%eax, %eax
	je	.L49
	movl	-24(%rbp), %eax
	movl	%eax, %ecx
	call	SDB_IsIdExist
	movzbl	%al, %eax
	movl	%eax, -8(%rbp)
	cmpl	$0, -8(%rbp)
	jne	.L50
	leaq	.LC40(%rip), %rcx
	call	printf
	leaq	.LC41(%rip), %rcx
	call	printf
	leaq	-12(%rbp), %rax
	movq	%rax, %rdx
	leaq	.LC12(%rip), %rcx
	call	scanf
	movl	-12(%rbp), %eax
	cmpl	$1, %eax
	jne	.L2
	jmp	.L52
.L50:
	movl	-24(%rbp), %eax
	movl	%eax, %ecx
	call	SDB_DeleteEntry
	movl	-24(%rbp), %eax
	movl	%eax, %edx
	leaq	.LC42(%rip), %rcx
	call	printf
	leaq	.LC43(%rip), %rcx
	call	printf
	leaq	.LC41(%rip), %rcx
	call	printf
	leaq	-12(%rbp), %rax
	movq	%rax, %rdx
	leaq	.LC12(%rip), %rcx
	call	scanf
	movl	-12(%rbp), %eax
	cmpl	$1, %eax
	jne	.L2
	jmp	.L52
.L4:
	leaq	.LC44(%rip), %rcx
	call	printf
	jmp	.L3
.L56:
	nop
	leaq	.LC45(%rip), %rcx
	call	puts
	leaq	.LC46(%rip), %rcx
	call	puts
	leaq	.LC47(%rip), %rcx
	call	puts
	movl	$0, %eax
	subq	$-128, %rsp
	popq	%rbp
	ret
	.seh_endproc
	.globl	SDB_AddEntry
	.def	SDB_AddEntry;	.scl	2;	.type	32;	.endef
	.seh_proc	SDB_AddEntry
SDB_AddEntry:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	subq	$16, %rsp
	.seh_stackalloc	16
	.seh_endprologue
	movl	%ecx, 16(%rbp)
	movl	%edx, 24(%rbp)
	movq	%r8, 32(%rbp)
	movq	%r9, 40(%rbp)
	movl	$0, -4(%rbp)
	jmp	.L62
.L65:
	leaq	entry(%rip), %rax
	movl	-4(%rbp), %edx
	salq	$5, %rdx
	addq	%rdx, %rax
	movl	(%rax), %eax
	testl	%eax, %eax
	jne	.L63
	leaq	entry(%rip), %rax
	movl	-4(%rbp), %edx
	salq	$5, %rdx
	addq	%rdx, %rax
	movl	16(%rbp), %edx
	movl	%edx, (%rax)
	leaq	entry(%rip), %rax
	movl	-4(%rbp), %edx
	salq	$5, %rdx
	addq	%rdx, %rax
	addq	$4, %rax
	movl	24(%rbp), %edx
	movl	%edx, (%rax)
	movq	32(%rbp), %rax
	movl	(%rax), %edx
	leaq	entry(%rip), %rax
	movl	-4(%rbp), %ecx
	salq	$5, %rcx
	addq	%rcx, %rax
	addq	$8, %rax
	movl	%edx, (%rax)
	movq	40(%rbp), %rax
	movl	(%rax), %edx
	leaq	entry(%rip), %rax
	movl	-4(%rbp), %ecx
	salq	$5, %rcx
	addq	%rcx, %rax
	addq	$12, %rax
	movl	%edx, (%rax)
	movq	32(%rbp), %rax
	movl	4(%rax), %edx
	leaq	entry(%rip), %rax
	movl	-4(%rbp), %ecx
	salq	$5, %rcx
	addq	%rcx, %rax
	addq	$16, %rax
	movl	%edx, (%rax)
	movq	40(%rbp), %rax
	movl	4(%rax), %edx
	leaq	entry(%rip), %rax
	movl	-4(%rbp), %ecx
	salq	$5, %rcx
	addq	%rcx, %rax
	addq	$20, %rax
	movl	%edx, (%rax)
	movq	32(%rbp), %rax
	movl	8(%rax), %edx
	leaq	entry(%rip), %rax
	movl	-4(%rbp), %ecx
	salq	$5, %rcx
	addq	%rcx, %rax
	addq	$24, %rax
	movl	%edx, (%rax)
	movq	40(%rbp), %rax
	movl	8(%rax), %edx
	leaq	entry(%rip), %rax
	movl	-4(%rbp), %ecx
	salq	$5, %rcx
	addq	%rcx, %rax
	addq	$28, %rax
	movl	%edx, (%rax)
	movl	$1, %eax
	jmp	.L64
.L63:
	addl	$1, -4(%rbp)
.L62:
	cmpl	$9, -4(%rbp)
	jbe	.L65
	movl	$0, %eax
.L64:
	addq	$16, %rsp
	popq	%rbp
	ret
	.seh_endproc
	.globl	SDB_IsIdExist
	.def	SDB_IsIdExist;	.scl	2;	.type	32;	.endef
	.seh_proc	SDB_IsIdExist
SDB_IsIdExist:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	subq	$16, %rsp
	.seh_stackalloc	16
	.seh_endprologue
	movl	%ecx, 16(%rbp)
	movl	$0, -4(%rbp)
	jmp	.L67
.L70:
	leaq	entry(%rip), %rax
	movl	-4(%rbp), %edx
	salq	$5, %rdx
	addq	%rdx, %rax
	movl	(%rax), %eax
	cmpl	%eax, 16(%rbp)
	jne	.L68
	movl	$1, %eax
	jmp	.L69
.L68:
	addl	$1, -4(%rbp)
.L67:
	cmpl	$9, -4(%rbp)
	jbe	.L70
	movl	$0, %eax
.L69:
	addq	$16, %rsp
	popq	%rbp
	ret
	.seh_endproc
	.section .rdata,"dr"
.LC48:
	.ascii "\12Student ID      : %u\0"
.LC49:
	.ascii "\12Student year    : %u\0"
.LC50:
	.ascii "\12Subject %u ID    : %u\0"
.LC51:
	.ascii "\12Subject %u Grade : %u\0"
	.text
	.globl	SDB_ReadEntry
	.def	SDB_ReadEntry;	.scl	2;	.type	32;	.endef
	.seh_proc	SDB_ReadEntry
SDB_ReadEntry:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	subq	$48, %rsp
	.seh_stackalloc	48
	.seh_endprologue
	movl	%ecx, 16(%rbp)
	movq	%rdx, 24(%rbp)
	movq	%r8, 32(%rbp)
	movq	%r9, 40(%rbp)
	movl	$0, -4(%rbp)
	jmp	.L72
.L77:
	leaq	entry(%rip), %rax
	movl	-4(%rbp), %edx
	salq	$5, %rdx
	addq	%rdx, %rax
	movl	(%rax), %eax
	cmpl	%eax, 16(%rbp)
	jne	.L73
	movl	16(%rbp), %edx
	leaq	.LC48(%rip), %rcx
	call	printf
	movq	24(%rbp), %rax
	movl	(%rax), %eax
	movl	%eax, %edx
	leaq	.LC49(%rip), %rcx
	call	printf
	movl	$0, -8(%rbp)
	jmp	.L74
.L75:
	movl	-8(%rbp), %eax
	leaq	0(,%rax,4), %rdx
	movq	32(%rbp), %rax
	addq	%rdx, %rax
	movl	(%rax), %edx
	movl	-8(%rbp), %eax
	addl	$1, %eax
	movl	%edx, %r8d
	movl	%eax, %edx
	leaq	.LC50(%rip), %rcx
	call	printf
	movl	-8(%rbp), %eax
	leaq	0(,%rax,4), %rdx
	movq	40(%rbp), %rax
	addq	%rdx, %rax
	movl	(%rax), %edx
	movl	-8(%rbp), %eax
	addl	$1, %eax
	movl	%edx, %r8d
	movl	%eax, %edx
	leaq	.LC51(%rip), %rcx
	call	printf
	addl	$1, -8(%rbp)
.L74:
	cmpl	$2, -8(%rbp)
	jbe	.L75
	movl	$1, %eax
	jmp	.L76
.L73:
	addl	$1, -4(%rbp)
.L72:
	cmpl	$9, -4(%rbp)
	jbe	.L77
	movl	$0, %eax
.L76:
	addq	$48, %rsp
	popq	%rbp
	ret
	.seh_endproc
	.globl	SDB_GetIdList
	.def	SDB_GetIdList;	.scl	2;	.type	32;	.endef
	.seh_proc	SDB_GetIdList
SDB_GetIdList:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	subq	$48, %rsp
	.seh_stackalloc	48
	.seh_endprologue
	movq	%rcx, 16(%rbp)
	movq	%rdx, 24(%rbp)
	call	SDB_GetUsedSize
	movl	%eax, %edx
	movq	16(%rbp), %rax
	movl	%edx, (%rax)
	movl	$0, -4(%rbp)
	jmp	.L79
.L81:
	leaq	entry(%rip), %rax
	movl	-4(%rbp), %edx
	salq	$5, %rdx
	addq	%rdx, %rax
	movl	(%rax), %eax
	testl	%eax, %eax
	je	.L80
	movl	-4(%rbp), %eax
	leaq	0(,%rax,4), %rdx
	movq	24(%rbp), %rax
	addq	%rdx, %rax
	leaq	entry(%rip), %rdx
	movl	-4(%rbp), %ecx
	salq	$5, %rcx
	addq	%rcx, %rdx
	movl	(%rdx), %edx
	movl	%edx, (%rax)
.L80:
	addl	$1, -4(%rbp)
.L79:
	cmpl	$9, -4(%rbp)
	jbe	.L81
	nop
	addq	$48, %rsp
	popq	%rbp
	ret
	.seh_endproc
	.globl	SDB_GetUsedSize
	.def	SDB_GetUsedSize;	.scl	2;	.type	32;	.endef
	.seh_proc	SDB_GetUsedSize
SDB_GetUsedSize:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	subq	$16, %rsp
	.seh_stackalloc	16
	.seh_endprologue
	movl	$0, -8(%rbp)
	movl	$0, -4(%rbp)
	jmp	.L83
.L85:
	leaq	entry(%rip), %rax
	movl	-4(%rbp), %edx
	salq	$5, %rdx
	addq	%rdx, %rax
	movl	(%rax), %eax
	testl	%eax, %eax
	je	.L84
	addl	$1, -8(%rbp)
.L84:
	addl	$1, -4(%rbp)
.L83:
	cmpl	$9, -4(%rbp)
	jbe	.L85
	movl	-8(%rbp), %eax
	addq	$16, %rsp
	popq	%rbp
	ret
	.seh_endproc
	.globl	SDB_IsFull
	.def	SDB_IsFull;	.scl	2;	.type	32;	.endef
	.seh_proc	SDB_IsFull
SDB_IsFull:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	subq	$16, %rsp
	.seh_stackalloc	16
	.seh_endprologue
	movl	$0, -4(%rbp)
	jmp	.L88
.L91:
	leaq	entry(%rip), %rax
	movl	-4(%rbp), %edx
	salq	$5, %rdx
	addq	%rdx, %rax
	movl	(%rax), %eax
	testl	%eax, %eax
	jne	.L89
	movl	$0, %eax
	jmp	.L90
.L89:
	addl	$1, -4(%rbp)
.L88:
	cmpl	$9, -4(%rbp)
	jbe	.L91
	movl	$1, %eax
.L90:
	addq	$16, %rsp
	popq	%rbp
	ret
	.seh_endproc
	.globl	SDB_DeleteEntry
	.def	SDB_DeleteEntry;	.scl	2;	.type	32;	.endef
	.seh_proc	SDB_DeleteEntry
SDB_DeleteEntry:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	subq	$16, %rsp
	.seh_stackalloc	16
	.seh_endprologue
	movl	%ecx, 16(%rbp)
	movl	$0, -4(%rbp)
	jmp	.L93
.L96:
	leaq	entry(%rip), %rax
	movl	-4(%rbp), %edx
	salq	$5, %rdx
	addq	%rdx, %rax
	movl	(%rax), %eax
	cmpl	%eax, 16(%rbp)
	jne	.L94
	leaq	entry(%rip), %rax
	movl	-4(%rbp), %edx
	salq	$5, %rdx
	addq	%rdx, %rax
	movl	$0, (%rax)
	leaq	entry(%rip), %rax
	movl	-4(%rbp), %edx
	salq	$5, %rdx
	addq	%rdx, %rax
	addq	$4, %rax
	movl	$0, (%rax)
	leaq	entry(%rip), %rax
	movl	-4(%rbp), %edx
	salq	$5, %rdx
	addq	%rdx, %rax
	addq	$8, %rax
	movl	$0, (%rax)
	leaq	entry(%rip), %rax
	movl	-4(%rbp), %edx
	salq	$5, %rdx
	addq	%rdx, %rax
	addq	$12, %rax
	movl	$0, (%rax)
	leaq	entry(%rip), %rax
	movl	-4(%rbp), %edx
	salq	$5, %rdx
	addq	%rdx, %rax
	addq	$16, %rax
	movl	$0, (%rax)
	leaq	entry(%rip), %rax
	movl	-4(%rbp), %edx
	salq	$5, %rdx
	addq	%rdx, %rax
	addq	$20, %rax
	movl	$0, (%rax)
	leaq	entry(%rip), %rax
	movl	-4(%rbp), %edx
	salq	$5, %rdx
	addq	%rdx, %rax
	addq	$24, %rax
	movl	$0, (%rax)
	leaq	entry(%rip), %rax
	movl	-4(%rbp), %edx
	salq	$5, %rdx
	addq	%rdx, %rax
	addq	$28, %rax
	movl	$0, (%rax)
	jmp	.L92
.L94:
	addl	$1, -4(%rbp)
.L93:
	cmpl	$9, -4(%rbp)
	jbe	.L96
.L92:
	addq	$16, %rsp
	popq	%rbp
	ret
	.seh_endproc
	.ident	"GCC: (x86_64-posix-seh-rev0, Built by MinGW-W64 project) 8.1.0"
	.def	printf;	.scl	2;	.type	32;	.endef
	.def	puts;	.scl	2;	.type	32;	.endef
	.def	scanf;	.scl	2;	.type	32;	.endef
