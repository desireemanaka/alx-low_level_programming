section .data
    hello_format db "Hello, Holberton",0x0a,0
    format db "%s",0

section .text
    global main

extern printf

main:
    push rbp
    mov rdi, format
    mov rax, 0
    call printf
    pop rbp
    ret
