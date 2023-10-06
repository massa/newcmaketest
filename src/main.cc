#include <iostream>
#include <string_view>
using namespace std;

int main(int  /*argc*/, char**  /*argv*/) {
    string_view str { "hello, world\n" };
    cout << str;
    return 0;
}