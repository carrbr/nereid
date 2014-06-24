#ifndef EDGE_H
#define EDGE_H

#include "nereid.h"
#include "worker.h"
#include "graphComponent.h"
#include "vertex.h"
#include "edge.h"

/*
 * This is an edge in a timely dataflow graph.  These edges are directed
 */
class Edge : public GraphComponent {
    public:
        Edge(const VertexID sender, const VertexID receiver) : m_senderID(sender), m_receiverID(receiver) {}
        ~Edge() {}

        /*
         * get ID for broadcasting vertex of directed edge
         */
        inline VertexID getSender() { return m_senderID; }

        /*
         * get ID for receiving vertex of directed edge
         */
        inline VertexID getReceiver() { return m_receiverID; }
        virtual inline bool isEdge() {
            return false;
        }

        inline bool isVertex() {
            return true;
        }
    private:
        const VertexID m_senderID;
        const VertexID m_receiverID;
};

#endif
