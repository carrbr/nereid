/*
 * This is a vertex in a timely dataflow Graph
 */
class Vertex : public GraphComponent {
    public:
        Vertex();
        ~Vertex();
        OnRecv();
        SendBy(Edge e, Message m, Timestamp t);
        NotifyAt(Timestamp t);
        OnNotify();
    private:
};
