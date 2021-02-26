# cxxversion_and_stdheaders

__cplusplus may say C++ version X, but does your toolchain have the right parts?

When you configure your compiler for a C++ version or its WIP towards it (e.g. -std=c++0x): sometimes pieces are missing. But the __cplusplus macro is set anyway. That can lead to annoying failures to compile.

I created this for various projects to cope with that issue. Such that PROJECT_CXXnn will be set if the headers from C++nn are available and generally working. Data gleaned from my [favorite reference](https://en.cppreference.com/w/cpp/compiler_support) and various environments I've programmed in.

## Use

1. Copy the two headers into your project.
2. Replace all instances of "PROJECT_" with "YOURPREFIX_".
3. Send a pull request if changes needed.

### cxxversion.hpp

This inspects __cplusplus and various compiler specific macros to set the following macros:

- PROJECT_CXX17
  - Set when C++ 2017 can be expected to work.
- PROJECT_CXX14
  - Set when C++ 2014 can be expected to work.
- PROJECT_CXX11
  - Set when C++ 2011 can be expected to work.
  - But you probably want an environment capable of C++14.
- PROJECT_CXX98
  - Set if __cplusplus says it so.
  - Don't blame me if your environment is that old.
- PROJECT_MSVC_VERSION
  - Defined to 0 or _MSC_VER.
- PROJECT_CLANG_VERSION
  - Defined to 0 or a sum based on __clang_{major,minor,patchlevel}.
- PROJECT_GCC_VERSION
  - Defined to 0 or a sum based on __GNUC__, __GNUC_MINOR__, and __GNUC_PATCHLEVEL__.

At the end of the header is an #if 0 / #endif block. Turn it on if you want a message printed to indicate what PROJECT_CXXnn macros are set.

### stdheaders.hpp

This includes all the standard headers associated with PROJECT_CXXnn. Such that a missing header should cause #include to fail.

It assumes #include <PROJECT_/cxxversion.hpp> will work or that you edit the header to your needs.

If you have special needs like not caring about header xyz on your specific project, feel free to hack away.
