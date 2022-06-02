#ifndef DELAUNAY_TRIANGULATIONS_GRAPHEDGE_H
#define DELAUNAY_TRIANGULATIONS_GRAPHEDGE_H

template <typename Vertex, typename Length>
class GraphEdge {
public:
    GraphEdge(Vertex _from, Vertex _to, Length _length) :
        from(_from), to(_to), length(_length) {
    }

    GraphEdge& operator=(const GraphEdge& other) = default;
    bool operator==(const GraphEdge& edge1)
    {
        if (((this.getTo().getX() == edge1.getTo().getX()) && (this.getTo().getY() == edge1.getTo().getY())
            && (this.getFrom().getX() == edge1.getFrom().getX()) && (this.getFrom().getY() == edge1.getFrom().getY()))
            || ((this.getFrom().getX() == edge1.getTo().getX()) && (this.getFrom().getY() == edge1.getTo().getY())
                && (this.getTo().getX() == edge1.getFrom().getX()) && (this.getTo().getY() == edge1.getFrom().getY()))
            || ((edge1.getFrom().getX() == this.getTo().getX()) && (edge1.getFrom().getY() == this.getTo().getY())
                && (edge1.getTo().getX() == this.getFrom().getX()) && (edge1.getTo().getY() == this.getFrom().getY()))) {
            return true;
        }
        else return false;
        
    }

    const Vertex& getFrom() const {
        return from;
    }

    const Vertex& getTo() const {
        return to;
    }

    const Length& getLength() const {
        return length;
    }


private:
    Vertex from;
    Vertex to;
    Length length;
};


#endif //DELAUNAY_TRIANGULATIONS_GRAPHEDGE_H#pragma once
