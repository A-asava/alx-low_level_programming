global    main
extern    printf

main:
    mov   rdi, format
    xor   rax, rax
    call  printf
    xor   rax, rax
    ret

format: db `Hello, Holberton\n`, 0

