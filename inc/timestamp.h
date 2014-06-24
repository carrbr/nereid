#ifndef TIMESTAMP_H
#define TIMESTAMP_H

#include "nereid.h"

/*
 * Class which stores the time of a particular event
 */
class Timestamp {
    public:
        Timestamp(const uint t) : m_time(t) {assert_greater_than(t, 0);}
        ~Timestamp() {} 
        /*
         * Getter method for the time
         */
        inline uint getTime() {
            return m_time;
        }
    private:
        const uint m_time;
};

#endif
