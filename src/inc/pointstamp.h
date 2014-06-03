#include "nereid.h"

/*
 * A pointstamp, used for various calculations involved in managing flow of
 * computations through the timely dataflow graph consists of both a
 * a timestamp specifying when the event happened, and a location in the
 * graph where the event happened
 */
class Pointstamp {
    public:
        Pointstamp() {}
        Pointstamp(Timestamp t, GraphComponent g) : timestamp = t, 
            location = g {}
        ~Pointstamp() {}
        /*
         * getter method for the time
         */
        TImestamp getTimeStamp();
        /*
         * Setter method for the time
         */
        void setTimeStamp(Timestamp);
        /*
         * Getter method for the location
         */
        GraphComponent getLocation();
        /*
         * Setter method for the location
         */
        void setLocation();
    private:
        Timestamp timestamp;
        GraphComponent location;
};
