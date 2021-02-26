#ifndef @PROJECT_NAME@_STDHEADERS__H
#define @PROJECT_NAME@_STDHEADERS__H

/** Standard C++ headers.
 *
 * These are included in groups as noted by https://en.cppreference.com/w/cpp/header and guarded by @PROJECT_NAME@_CXXnn.
 */
#include <@PROJECT_NAME@/cxxversion.hpp>

/* Utilities library */
#include <cstdlib>
#include <csignal>
#include <csetjmp>
#include <cstdarg>
#include <typeinfo>
#if @PROJECT_NAME@_CXX11
#include <typeindex>
#include <type_traits>
#endif
#include <bitset>
#include <functional>
#include <utility>
#include <ctime>
#if @PROJECT_NAME@_CXX11
#include <chrono>
#endif
#include <cstddef>
#if @PROJECT_NAME@_CXX11
#include <initializer_list>
#include <tuple>
#endif
#if @PROJECT_NAME@_CXX17
#include <any>
#include <optional>
#include <variant>
#endif

/* Dynamic memory maangement. */
#include <new>
#include <memory>
#if @PROJECT_NAME@_CXX11
#include <scoped_allocator>
#endif
#if @PROJECT_NAME@_CXX17 && (!@PROJECT_NAME@_GCC_VERSION || @PROJECT_NAME@_GCC_VERSION > 90100)
#include <memory_resource>
#endif

/* Numeric limits. */
#include <climits>
#include <cfloat>
#if @PROJECT_NAME@_CXX11
#include <cstdint>
#include <cinttypes>
#endif
#include <limits>

/* Error handling. */
#include <exception>
#include <stdexcept>
#include <cassert>
#if @PROJECT_NAME@_CXX11
#include <system_error>
#endif
#include <cerrno>

/* Strings library. */
#include <cctype>
#include <cwctype>
#include <cstring>
#include <cwchar>
#if @PROJECT_NAME@_CXX11
#include <cuchar>
#endif
#include <string>
#if @PROJECT_NAME@_CXX17
#include <string_view>
#include <charconv>
#endif

/* Containers library. */
#if @PROJECT_NAME@_CXX11
#include <array>
#endif
#include <vector>
#include <deque>
#include <list>
#if @PROJECT_NAME@_CXX11
#include <forward_list>
#endif
#include <set>
#include <map>
#if @PROJECT_NAME@_CXX11
#include <unordered_set>
#include <unordered_map>
#endif
#include <stack>
#include <queue>

/* Iterators library. */
#include <iterator>

/* Algorithms library. */
#include <algorithm>
#if @PROJECT_NAME@_CXX17 && (!@PROJECT_NAME@_GCC_VERSION || @PROJECT_NAME@_GCC_VERSION > 90100)
#include <execution>
#endif

/* Numerics library. */
#include <cmath>
#include <complex>
#include <valarray>
#if @PROJECT_NAME@_CXX11
#include <random>
#endif
#include <numeric>
#if @PROJECT_NAME@_CXX11
#include <ratio>
#include <cfenv>
#endif

/* Input/output library. */
#include <iosfwd>
#include <ios>
#include <istream>
#include <ostream>
#include <iostream>
#include <fstream>
#include <sstream>
#include <iomanip>
#include <streambuf>
#include <cstdio>

/* Localization library. */
#include <locale>
#include <clocale>

/* Regular Expressions library. */
#if @PROJECT_NAME@_CXX11
#include <regex>
#endif

/** Atomic Operations library. */
#if @PROJECT_NAME@_CXX11
#include <atomic>
#endif

/* Thread support library. */
#if @PROJECT_NAME@_CXX11
#include <thread>
#include <mutex>
#include <shared_mutex>
#include <future>
#include <condition_variable>
#endif

/* Filesystem library. */
#if @PROJECT_NAME@_CXX17
#include <filesystem>
#endif

#endif // @PROJECT_NAME@_STDHEADERS__H