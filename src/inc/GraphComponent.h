/*
 * Base Class for components in a timely dataflow graph
 *
 * This class functions as an interface
 */
class GraphComponent {
    public:
        GraphComponent() {}
        virtual ~GraphComponent() {}
        virtual isEdge()=0;
        virtual isVertex()=0;
};
