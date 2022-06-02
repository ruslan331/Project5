#ifndef DELAUNAY_TRIANGULATIONS_ALLNEARESTNEIGHBOR_H
#define DELAUNAY_TRIANGULATIONS_ALLNEARESTNEIGHBOR_H

#include <vector>
#include <map>

#include "GraphEdge.h"

using namespace std;

template <class V>
class AllNearestNeighbor {
public:
    AllNearestNeighbor();

    // return ann edges
    template <typename D>
    vector<GraphEdge<V, D>> getANN(vector<GraphEdge<V, D>> edges);

};


#endif //DELAUNAY_TRIANGULATIONS_ALLNEARESTNEIGHBOR_H#pragma once
