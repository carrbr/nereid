#include "nereid.h"
#include "scheduler.h"

int main() {
    Scheduler sched;
    sched.init();
    sched.execute();

    return 0;
}
