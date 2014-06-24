#ifndef WORKER_H
#define WORKER_H

#include "nereid.h"
#include "message.h"
#include "timestamp.h"

class Edge;

class Worker {
    public:
        Worker(const uint proc, const uint node) : pid(proc), node_id(node) {};
        ~Worker() {};
        /*
         * TODO
         */
        void registerForNotification(Timestamp t);
        /*
         * TODO
         */
        void sendMessage(Edge e, Message m, Timestamp t);
    private:
        /*
         * Process Identification Number of the worker
         */
        const uint pid;

        /*
         * Node id number of the worker
         */
        const uint node_id;
};

#endif
