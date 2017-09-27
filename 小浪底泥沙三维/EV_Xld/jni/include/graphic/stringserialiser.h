#ifndef __StringSerialiser_H__
#define __StringSerialiser_H__
#include <graphic/prerequisites.h>
namespace EarthView
{
    namespace World
    {
        namespace Graphic
        {

            class CStringSerialiser
            {
            private:
                char *mBuffer;
                size_t mBufferSize, mTotalSize;
            public:
                //// Initializes the serialiser with a starting buffer size
                CStringSerialiser(size_t size = 0);
                ~CStringSerialiser();
                //// Returns the generated string
                EVString str() const;
                CStringSerialiser &operator << (const char *str);
                CStringSerialiser &operator << (const EVString &str);
                CStringSerialiser &operator << (char val);
                CStringSerialiser &operator << (short val);
                CStringSerialiser &operator << (int val);
                CStringSerialiser &operator << (unsigned char val);
                CStringSerialiser &operator << (unsigned short val);
                CStringSerialiser &operator << (unsigned int val);
                CStringSerialiser &operator << (float val);
                CStringSerialiser &operator << (double val);
            private:
                void growBuffer(size_t n);
            };
        }
    }
}

#endif

