This file contains the aim, procedure, output, and result for the program to do code injection.

AIM:
  To do code injection on Firefox using ptrace system call.
ALGORITHM :
  Step1: Find out the PID of the running Firefox program.
  Step2: Create the code injection file.
  Step3: Allocate memory buffers for the shellcode.
  Step4: Attach to the victim process with PTRACE_ATTACH.
  Step5: Get the register values for the attached process.
  Step6: Use PTRACE_POKETTEXT to insert the shellcode.
  Step7: Detach from the victim process using PTRACCE_DETACH.

OUTPUT:
  ------------Memory bytecode injector
Writing EIP 0x12345678, process 12345


RESULT:
  The process to do code injecction on Firefox using ptrace system call has been successfully implemented.
