#include <iostream>

#include <string>
#include <vector>

#include <ghstl/string>
#include <ghstl/vector>

#ifdef _DEBUG
#pragma message("GHSTL cannot be tested against Release MSVC STL when MSVC STL is compiled in Debug")
#endif

int main() {
	std::string std_short_str = "Im short";
	std::cout << "&std_short_str: " << &std_short_str << std::endl;
	std::string std_long_str = "Im a longer string that doesn't fit within the 16 byte buffer";
	std::cout << "&std_long_str: " << &std_long_str << std::endl;
	std::string std_perfect_str = "I fit perfectly";
	std::cout << "&std_perfect_str: " << &std_perfect_str << std::endl;

	ghstl::string ghstl_short_str = "Im short";
	std::cout << "&ghstl_short_str: " << &ghstl_short_str << std::endl;
	ghstl::string ghstl_long_str = "Im a longer string that doesn't fit within the 16 byte buffer";
	std::cout << "&ghstl_long_str: " << &ghstl_long_str << std::endl;
	ghstl::string ghstl_perfect_str = "I fit perfectly";
	std::cout << "&ghstl_perfect_str: " << &ghstl_perfect_str << std::endl;

	std::cin.get();
}