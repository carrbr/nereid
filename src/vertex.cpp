#include "nereid.h"
#include "vertex.h"
#include "worker.h"

void Vertex::SendBy(Edge e, Message m, Timestamp t) {
    m_worker.sendMessage(e, m, t);
}

void Vertex::NotifyAt(Timestamp t) {
    m_worker.registerForNotification(t);
}
