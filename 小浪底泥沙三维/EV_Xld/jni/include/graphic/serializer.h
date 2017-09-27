#ifndef __Serializer_H__
#define __Serializer_H__
#pragma once
#include <core/memoryallocatedobject.h>
#include <core/stringdefines.h>
#include <core/datastream.h>
#include "graphic_config.h"

namespace EarthView
{
	namespace World
	{
		namespace Core
		{
			class DataStreamPtr;
			class CArchive;
			class CArchiveFactory;
			class CArchiveManager;
		}
	}
}

namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			namespace Math
			{
				class CVector3;
				class CQuaternion;
			}
		}
	}
}

namespace EarthView
{
    namespace World
    {
        namespace Graphic
        {
            /**** Generic class for serialising data to / from binary stream-based files.
            @remarks
                This class provides a number of useful methods for exporting / importing data
                from stream-oriented binary files (e.g. .mesh and .skeleton).
            ****/
            class EV_GRAPHIC_DLL CSerializer : public EarthView::World::Core::CAllocatedObject
            {
            ev_private:
                CSerializer(_in EarthView::World::Core::CNameValuePairList *pList);
            public:
                CSerializer();
                virtual ~CSerializer();
                //// The endianness of written files
                enum Endian
                {
                    //// Use the platform native endian
                    ENDIAN_NATIVE,
                    //// Use big endian (0x1000 is serialised as 0x10 0x00)
                    ENDIAN_BIG,
                    //// Use little endian (0x1000 is serialised as 0x00 0x10)
                    ENDIAN_LITTLE
                };

            protected:
                ev_uint32 mCurrentstreamLen;

                ////zxt updatefor v1.8
                EarthView::World::Core::DataStreamPtr mStream;
                EVString mVersion;
                ev_bool mFlipEndian; 			//// default to native endian, derive from header
            ev_internal:
                //// Internal methods
                virtual void writeFileHeader();
                virtual void writeChunkHeader(_in ev_uint16 id, _in ev_size_t size);
            protected:
                void writeFloats( _in const ev_real32 *const pfloat, _in ev_size_t count);
                void writeFloats( _in const ev_real64 *const pfloat, _in ev_size_t count);
                void writeShorts( _in const ev_uint16 *const pShort, _in ev_size_t count);
                void writeInts( _in const ev_uint32 *const pInt, _in ev_size_t count);
                void writeBools( _in const ev_bool *const pLong, _in ev_size_t count);
                void writeObject( _in const EarthView::World::Spatial::Math::CVector3 &vec);
                void writeObject( _in const EarthView::World::Spatial::Math::CQuaternion &q);

                void writeString( _in const EVString &string);
                void writeData( _in const void *const buf, _in ev_size_t size, _in ev_size_t count);
            ev_internal:
                virtual void readFileHeader(_in EarthView::World::Core::DataStreamPtr &stream);
                virtual ev_uint16 readChunk(_in EarthView::World::Core::DataStreamPtr &stream);
            protected:
                void readBools(_in EarthView::World::Core::DataStreamPtr &stream, _inout ev_bool *pDest, _in ev_size_t count);
                void readFloats(_in EarthView::World::Core::DataStreamPtr &stream, _inout ev_real32 *pDest, _in ev_size_t count);
                void readFloats(_in EarthView::World::Core::DataStreamPtr &stream, _inout ev_real64 *pDest, _in ev_size_t count);
                void readShorts(_in EarthView::World::Core::DataStreamPtr &stream, _inout ev_uint16 *pDest, _in ev_size_t count);
                void readInts(_in EarthView::World::Core::DataStreamPtr &stream, _inout ev_uint32 *pDest, _in ev_size_t count);
                void readObject(_in EarthView::World::Core::DataStreamPtr &stream, _inout EarthView::World::Spatial::Math::CVector3 &pDest);
                void readObject(_in EarthView::World::Core::DataStreamPtr &stream, _inout EarthView::World::Spatial::Math::CQuaternion &pDest);
                EVString readString(_in EarthView::World::Core::DataStreamPtr &stream);
                EVString readString(_in EarthView::World::Core::DataStreamPtr &stream, _in ev_size_t numChars);
            ev_internal:
                virtual void flipToLittleEndian(_inout void *pData, _in ev_size_t size, _in ev_size_t count);
                virtual void flipToLittleEndian(_inout void *pData, _in ev_size_t size);
                virtual void flipFromLittleEndian(_inout void *pData, _in ev_size_t size, _in ev_size_t count);
                virtual void flipFromLittleEndian(_inout void *pData, _in ev_size_t size);

                virtual void flipEndian(_inout void *pData, _in ev_size_t size, _in ev_size_t count);
                virtual void flipEndian(_inout void *pData, _in ev_size_t size);
                //// Determine the endianness of the incoming stream compared to native
                virtual void determineEndianness(_in EarthView::World::Core::DataStreamPtr &stream);
                //// Determine the endianness to write with based on option
                virtual void determineEndianness(_in Endian requestedEndian);
            };
        }
    }
}

#endif

