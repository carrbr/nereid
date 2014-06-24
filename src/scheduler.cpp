#include "nereid.h"
#include "worker.h"
#include "scheduler.h"

#include <unistd.h>

Result Scheduler::init() {
    Result rc = S_OK;
    
    // for now, just create one local worker process
    int pid = fork();
    if (pid < 0) {
       reportError(__FUNCTION__, __LINE__, "Error forking process");
       rc = S_FAIL;
    } else if (pid == 0) {
        std::string worker_file("inc/worker.o");
        char *argv[] = {};
        execv((BASEDIR + worker_file).c_str(), argv);
        reportError(__FUNCTION__, __LINE__, "execv failed");
        exit(1);
    } else {
        Worker new_worker(pid, 0);
        workers.push(new_worker);
    }

    return rc;
}

void Scheduler::execute() {
    std::cout << "Scheduler up!" << std::endl;
}

