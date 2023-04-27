section .data
    hi db 'Hello, Holberton', 10, 0 ; format string to printf
          
section .text
    global main        ; make fn cisible to linker
    extern printf      ; printf is external
    
main:
    push rbp           ; save base ptr
    mov rbp, rsp       ; set base ptr to stack ptr
    
    sub rsp, 8         ; allocate space for variable
    lea rdi, [hi]      ; load effective address to a random register
    xor eax, eax       ; set eax register to 0
    call printf        ; call function
    
    add rsp, 8         ; free memory
    xor eax, eax       ; return 0
    pop rbp            ; restore base ptr
    ret                ; return to os
