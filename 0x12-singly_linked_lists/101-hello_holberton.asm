section .data
    hello_holberton db 'Hello, Holberton', 0  ; Null-terminated string

section .text
    global main
    extern printf

main:
    ; Set up the stack frame (for compatibility with C functions)
    push rbp
    mov rbp, rsp

    ; Call printf function to print the string
    mov rdi, hello_holberton  ; Pass the address of the string as the first argument (format string)
    xor rax, rax              ; Clear rax (to indicate no vector registers used)
    call printf               ; Call the printf function

    ; Clean up the stack frame and return
    leave
    ret

section .bss
    ; Empty BSS section to satisfy the linker

