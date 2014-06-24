#include "vertex.h"
#include <iostream>

class TestVert : Vertex {
    public:
        OnRecv(Edge e, Message m, Timestame t) {
            std::cout << "Message Received" << std::endl;
        }

        OnNotfiy(Timestamp t) {
            std::cout << "Notification Received" << std::endl;
        }
}


