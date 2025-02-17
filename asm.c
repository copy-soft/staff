int main(void){

asm("push   %rbp");
asm("mov %rsp,%rbp");
asm("movl $0x5,-0x8(%rbp)");
asm("mov -0x8(%rbp),%eax");
asm("add $0x6,%eax");
asm("mov %eax,-0x4(%rbp)");
asm("mov $0x0,%eax");
asm("pop %rbp");
//asm("ret");

}
