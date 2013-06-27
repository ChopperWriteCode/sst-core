
#ifndef _H_SST_RAND
#define _H_SST_RAND

#include <iostream>
#include <fstream>

#include <stdint.h>

using namespace std;

namespace SST {
namespace RNG {

/**
	Implements the base class for random number generators for the SST core. This does not
	implement an actual RNG itself only the base class which describes the methods each
	class will implement.
*/
class SSTRandom {

    public:
	/**
		Generates the next random number in the range 0 to 1.
	*/
	virtual double   nextUniform() = 0;

	/**
		Generates the next random number as an unsigned 32-bit integer.
	*/
	virtual uint32_t generateNextUInt32() = 0;

	/**
		Generates the next random number as an unsigned 64-bit integer.
	*/
	virtual uint64_t generateNextUInt64() = 0;

	/**
		Generates the next random number as a signed 64-bit integer.
	*/
	virtual int64_t	 generateNextInt64() = 0;

	/**
		Generates the next random number as a signed 32-bit integer
	*/
        virtual int32_t  generateNextInt32() = 0;

};

}
}

#endif
