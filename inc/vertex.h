#ifndef VERTEX_H
#define VERTEX_H

#include "nereid.h"
#include "timestamp.h"
#include "edge.h"
#include "graphComponent.h"

// forward defs
class Message;
class Worker;

// Unique identifier for verticies
typedef uint VertexID;

/*
 * This is a vertex in a timely dataflow Graph
 *
 * A programmer working with the system should create vertices in their
 * timely dataflow graph by inheriting from this class, and defining both
 * OnRecv, and OnNotify
 */
class Vertex : public GraphComponent {
    public:
        Vertex(Worker& w, VertexID vID) : m_worker(w), m_ID(vID) {}
        virtual ~Vertex() {}
        /*
         * Callback to be executed when this vertex receives a new message
         */
        virtual void OnRecv(Edge e, Message m, Timestamp t)=0;
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
        virtual inline bool isEdge() { return false; }
        virtual inline bool isVertex() { return true; }
    private:
        /*
         * reference to worker that vertex was instantiated by
         */
        Worker& m_worker;
        /*
         * Unique identifier assigned to vertex upon instantiation
         */
        const VertexID m_ID;
};

#endif
