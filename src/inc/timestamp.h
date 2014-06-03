#include "nereid.h"

/*
 * Class which stores the time of a particular event
 */
class Timestamp {
    public:
        Timestamp() {}
        ~Timestamp() {}
        /*
         * Setter method for the time
         */
        void setTime(const uint t) {
            assert_greater_than(t, 0);
            time = t;
        }
            
        /*
         * Getter method for the time
         */
        uint_t getTime() {
            return time;
        }
    private:
        uint time;
}
