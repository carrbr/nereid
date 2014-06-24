#ifndef MESSAGE_H
#define MESSAGE_H

#include "nereid.h"
#include "pointstamp.h"
#include <string>

class Message {
    public:
        Message(Pointstamp p) : m_message(""), m_pointstamp(p) {}
        Message(std::string msg, Pointstamp p) : m_message(msg), m_pointstamp(p) {}
        ~Message() {}
        /*
         * Set the message string
         */
        inline void setMessage(std::string msg) { m_message = msg; }
        /*
         * get message string
         */
        inline const std::string& getMessage() { return m_message; }
        /*
         * get pointstamp
         */
        inline const Pointstamp& getPointstamp() {return m_pointstamp; }
    private:
        std::string m_message;
        const Pointstamp m_pointstamp;
};

#endif
