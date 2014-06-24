#ifndef POINTSTAMP_H
#define POINTSTAMP_H

#include "nereid.h"
#include "vertex.h"
#include "timestamp.h"

typedef uint VertexID;

/*
 * A pointstamp, used for various calculations involved in managing flow of
 * computations through the timely dataflow graph consists of both a
 * a timestamp specifying when the event happened, and a location in the
 * graph where the event happened
 */
class Pointstamp {
    public:
        Pointstamp(const Timestamp t, const VertexID vID) : m_timestamp(t), m_location(vID) {}
        ~Pointstamp() {}
        /*
         * getter method for the time
         */
        Timestamp getTimeStamp();
        /*
         * Getter method for the location
         */
        VertexID getLocation();
    private:
        const Timestamp m_timestamp;
        const VertexID m_location;
};

#endif
