global _start
section .data
message	: db "hello, world", 0xa
message_len : equ $ - message

section .text

_start:
  mov rax, 1
  mov rdi, 1
  mov rsi, message
  mov rdx, message_len
  syscall
  mov rax, 60
  xor rdi, rdi
  syscall
