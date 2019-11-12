/*
    Exceptf.h

    Created by <chickchirik> on 31/05/2019.

    DESCRIPTION:
    Exceptf - exception class derived from std::exception.
    Constructor uses printf function API.
    Exceptf(const char* format, ...);
    At its base it uses vsnprintf function.
    Everything else acts the same as std::exception.
*/

#pragma once
#include <stdexcept>
#include <cstdarg>
#include <string>
#include <cstdio>

class Exceptf : public std::exception {
public:
    explicit Exceptf(const char* format, ...) {
        va_list origArgs;
        va_start(origArgs, format);
        va_list copyArgs;
        va_copy(copyArgs, origArgs);
        size_t bufSize = vsnprintf(nullptr, 0, format, origArgs);
        char* buffer = new char[sizeof(char) * (bufSize + 10)];
        vsnprintf(buffer, bufSize + 10, format, copyArgs);
        msg.append(buffer);
        delete[] buffer;
        va_end(origArgs);
        va_end(copyArgs);
    }
    ~Exceptf() throw() {}
    const char* what() const throw() { return msg.c_str(); }
private:
    std::string msg = "";
};
