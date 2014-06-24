#ifndef WORKER_H
#define WORKER_H

#include "nereid.h"

class Worker {
    public:
        Worker(uint proc, uint node) : pid(proc), node_id(node) {};
        ~Worker() {};
    private:
        /*
         * Process Identification Number of the worker
         */
        uint pid;

        /*
         * Node id number of the worker
         */
        uint node_id;
};

#endif
