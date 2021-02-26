/* This is free and unencumbered software released into the public domain. */
#include <cxxversion_and_stdheaders/cxxversion.hpp>
#include <cxxversion_and_stdheaders/stdheaders.hpp>

using std::cout;
using std::endl;

int main(int argc, char* argv[])
{
    (void)argc;
    (void)argv;

    cout
        << "__cplusplus: " << __cplusplus << endl
        << endl
        << "C++ 98 mode: " << cxxversion_and_stdheaders_CXX98 << endl
        << "C++ 11 mode: " << cxxversion_and_stdheaders_CXX11 << endl
        << "C++ 14 mode: " << cxxversion_and_stdheaders_CXX14 << endl
        << "C++ 17 mode: " << cxxversion_and_stdheaders_CXX17 << endl
        // << "C++ 20 mode: " << cxxversion_and_stdheaders_CXX20
        << endl
        << "MSVC version: " << cxxversion_and_stdheaders_MSVC_VERSION << endl
        << "CLANG version: " << cxxversion_and_stdheaders_CLANG_VERSION << endl
        << "GCC version: " << cxxversion_and_stdheaders_GCC_VERSION << endl
        << endl;
}