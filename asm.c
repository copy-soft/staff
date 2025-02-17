int main(void){

asm("push   %rbp\n"
"mov %rsp,%rbp\n"
"movl $0x5,-0x8(%rbp)\n"
"mov -0x8(%rbp),%eax\n"
"add $0x6,%eax\n"
"mov %eax,-0x4(%rbp)\n"
"mov $0x0,%eax\n"
"pop %rbp");
//asm("ret");

}
