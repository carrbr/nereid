#ifndef GRAPHCOMPONENT_H
#define GRAPHCOMPONENT_H

#include "nereid.h"

/*
 * Base Class for components in a timely dataflow graph
 *
 * This class functions as an interface
 */
class GraphComponent {
    public:
        GraphComponent() {}
        virtual ~GraphComponent() {}
        /*
         * Checks if this graph component is an edge
         */
        virtual bool isEdge()=0;
        /*
         * Checks if this graph component is a vertex
         */
        virtual bool isVertex()=0;
};

#endif
