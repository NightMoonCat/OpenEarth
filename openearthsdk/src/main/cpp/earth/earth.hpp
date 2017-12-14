#pragma once
//
// Created by GXSN-Pro on 2017/11/29.
//

#ifndef OPENEARTH_EARTH_HPP
#define OPENEARTH_EARTH_HPP


namespace OpenEarth{
    static float  const  DEFAULT_RADIUS = 1.0f;
    static int const  TILE_SIZE  = 256;
    class Earth{
    public:
        static void setRadius(float r);
        static float getRadius();
    };
}

#endif //OPENEARTH_EARTH_HPP
