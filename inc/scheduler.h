#ifndef SCHEDULER_H
#define SCHEDULER_H

#include "nereid.h"
#include "worker.h"

#include <queue>


class Scheduler {
    public:
        Scheduler() : workers() {}
        ~Scheduler() {}
       
        /*
         * This function initializes the scheduler
         */
        Result init();

        /*
         * This function will cause the scheduler to run.
         *
         * For the time being, assume that it will run indefinitely, but that
         * will hopefully change :P
         */
        void execute();
    private:
        /*
         * Container which keeps track of all current worker processes, both
         * local and remote
         */
        std::queue<Worker> workers; 

        /*
         * This function makes a worker process for the scheduler to
         * supervise
         *
         * The remote parameter determines if the process will be local or
         * not, and the node_id determines which node in the cluster the new
         * processes will be forked on if remote was selected.
         */
        Result create_worker(bool remote, int node_id);
};

#endif
