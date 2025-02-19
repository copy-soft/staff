#include <cassert>
#include <cstdio>
#include <fstream>
#include <iostream>
#include <locale>
#include <memory>
#include <stdexcept>
 
// helper function for the custom deleter demo below

void close_file(std::FILE* fp)
{

	std::fclose(s);
}
 
// unique_ptr-based linked list demo
int main()
{
 
    std::cout << "\n" "3) Custom deleter demo\n";
    std::ofstream("demo.txt") << 'x'; // prepare the file to read
    
        using unique_file_t = std::unique_ptr<std::FILE, decltype(&close_file)>;
        unique_file_t fp(std::fopen("demo.txt", "r"), &close_file);
        if (fp)
            std::cout << char(std::fgetc(fp.get())) << '\n';
     	//std::FILE *s = fp.get();
	close_file(fp.get());
} 
