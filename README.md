# FixedP - Fixed-Point Arithmetic Library for C++ & Python

FixedP is a library that allows the user to allocate arbitrary numbers of bytes to a fixed-point number's integer and fractional parts. As long as numbers with smaller or the same precision are always added to the target number (e.g. the target number handles the addition operation), rounding errors will not occur, but the fixed-point numbers are still prone to overflow.

A C/C++ extension for Python is currently being created to add Python support for this library.

FixedP is still in development and does not currently support all of the features listed here.