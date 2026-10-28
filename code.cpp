#include <iostream>
#include <cstdlib>
#include <sstream>
#include <string>

int main() {
    std::cout << "File: ";

    std::string f;
    std::cin >> f;

    std::stringstream a(f);
    std::string t;

    while (a >> t)
        system((std::string("git add ") + t).c_str());

    system("git commit -m \".\" && git push origin master");
}
