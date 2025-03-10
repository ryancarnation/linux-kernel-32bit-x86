.section .multiboot
    .align 4
    .long 0x1BADB002
    .long 0x00
    .long -(0x1BADB002 + 0x00)

.section .text
.globl _start
_start:
    cli
    mov $stack_top, %esp
    call kernel_main
hang:
    hlt
    jmp hang

.section .bss
.align 4
stack_bottom:
    .skip 16384
stack_top:

