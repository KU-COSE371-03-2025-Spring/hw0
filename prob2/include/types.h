#ifndef TYPES_H
#define TYPES_H

// (jhpark): unify the boolean data type
#ifndef FALSE
#define FALSE 0
#endif

#ifndef TRUE
#define TRUE 1
#endif

#ifndef NULL
#define NULL 0
#endif

using ulong = unsigned long;
using uint = unsigned int;
using ushort = unsigned short;
using uchar = unsigned char;

enum class ErrorCode
{
    RANGE, MEM, NULLPTR, SIZE, COPY
};

void FatalError(ErrorCode ec);

#endif
