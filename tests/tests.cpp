#include <iostream>

#include <list>
#include <map>
#include <string>
#include <vector>

#include <ghstl/list>
#include <ghstl/map>
#include <ghstl/memory>
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

	ghstl::string* testAssign = new ghstl::string();
	testAssign->assign(std_short_str);

	ghstl::string from_str = std::to_string(3);
	std::string std_ref_str = std::string("Hello!");
	ghstl::string from_lstr = std_ref_str;

	std::vector<uint32_t> std_empty_vec;
	std::cout << "&std_empty_vec: " << &std_empty_vec << std::endl;
	std::vector<uint32_t> std_counter_vec = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	std::cout << "&std_counter_vec: " << &std_counter_vec << std::endl;
	std::vector<uint64_t> std_big_counter_vec = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	std::cout << "&std_big_counter_vec: " << &std_big_counter_vec << std::endl;
	
	ghstl::vector<uint32_t> ghstl_empty_vec;
	std::cout << "&ghstl_empty_vec: " << &ghstl_empty_vec << std::endl;
	ghstl::vector<uint32_t> ghstl_counter_vec = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	std::cout << "&ghstl_counter_vec: " << &ghstl_counter_vec << std::endl;
	ghstl::vector<uint64_t> ghstl_big_counter_vec = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	std::cout << "&ghstl_big_counter_vec: " << &ghstl_big_counter_vec << std::endl;

	std::shared_ptr<uint64_t> std_num_ptr = std::shared_ptr<uint64_t>(new uint64_t(0xDEADBEEF));
	std::cout << "&std_num_ptr: " << &std_num_ptr << std::endl;

	ghstl::shared_ptr<uint64_t> ghstl_num_ptr = ghstl::shared_ptr<uint64_t>(new uint64_t(0xDEADBEEF));
	std::cout << "&ghstl_num_ptr: " << &ghstl_num_ptr << std::endl;

	std::map<std::string, int> std_map_empty;
	std::cout << "&std_map_empty: " << &std_map_empty << std::endl;
	std::map<std::string, int> std_map_count = {
		{ "one", 1 },
		{ "two", 2 },
		{ "three", 3 }
	};
	std::cout << "&std_map_count: " << &std_map_count << std::endl;

	std::list<uint32_t> std_list_empty;
	std::cout << "&std_list_empty: " << &std_list_empty << std::endl;
	std::list<uint32_t> std_list_count = { 0, 1, 2, 3, 4, 5 };
	std::cout << "&std_list_count: " << &std_list_count << std::endl;
	std::cout << "std_list_count: " << *(void**)&std_list_count << std::endl;

	ghstl::list<uint32_t> ghstl_list_empty;
	std::cout << "&std_list_empty: " << &ghstl_list_empty << std::endl;
	ghstl::list<uint32_t> ghstl_list_count = { 0, 1, 2, 3, 4, 5 };
	std::cout << "&std_list_count: " << &ghstl_list_count << std::endl;
	std::cout << "std_list_count: " << *(void**)&ghstl_list_count << std::endl;

	std::cin.get();
}