#ifndef __VertexBoneAssignment_H__
#define __VertexBoneAssignment_H__
#pragma once
#include "graphic/graphic_config.h"
#include "prerequisites.h"

namespace EarthView
{
    namespace World
    {
        namespace Graphic
        {

            struct VertexBoneAssignment
            {
                ev_uint32 vertexIndex;
                ev_uint16 boneIndex;
                Real weight;
            } ;

        }
    }
}

#endif

