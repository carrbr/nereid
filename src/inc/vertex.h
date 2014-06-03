#include "nereid.h"
#include "timestamp.h"
#include "message.h"
#include "edge.h"
#include "graphComponent.h"

/*
 * This is a vertex in a timely dataflow Graph
 *
 * A programmer working with the system should create vertices in their
 * timely dataflow graph by inheriting from this class, and defining both
 * OnRecv, and OnNotify
 */
class Vertex : public GraphComponent {
    public:
        Vertex() {}
        virtual ~Vertex() {}
        /*
         * Callback to be executed when this vertex receives a new message
         */
        virtual void OnRecv(Edge e, Message m, Timestame t)=0;
        /*
         * Sends message m by edge e with timestamp t
         */
        void SendBy(Edge e, Message m, Timestamp t);
        /*
         * Requests that this vertex is notifed once all messages of 
         * timestamp t have been delivered
         */
        void NotifyAt(Timestamp t);
        /*
         * Callback to be executed upon notification that all messages of
         * given timestamp have been completed
         */
        virtual void OnNotify(Timestamp t)=0;
    private:
};
