#include <iostream>
#include <string>
#include <regex>
#include <set>
using namespace std::string_literals;

int main()
{
    std::string str("apple abby android ananas"); 
    char c = 'a';// символ 
    std::regex rc(""s + c);
    str = std::regex_replace(str, rc, "$& ");
    std::regex rw("[[:alnum:]]+");
    std::set<std::string> ss((std::sregex_token_iterator(str.begin(), str.end(), rw)), std::sregex_token_iterator());
    std::cout << str << '\n' << ss.size() << std::endl;
}