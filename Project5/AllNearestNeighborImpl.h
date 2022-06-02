#include <algorithm>

#include "AllNearestNeighbor.h"
using namespace std;
template<class V>
AllNearestNeighbor<V>::AllNearestNeighbor() {

}

template<typename V>
template<typename D>
vector<GraphEdge<V, D>> AllNearestNeighbor<V>::getANN(vector<GraphEdge<V, D>> edges) {

    sort(edges.begin(), edges.end(), [](const GraphEdge<V, D>& edge1, const GraphEdge<V, D>& edge2) {
        return edge1.getLength() < edge2.getLength();
        });
    vector<GraphEdge<V, D>> ann_edges;
    map<int, vector<GraphEdge<V, D>>> ann_edges_helper;
    vector<GraphEdge<V, D>>  ann_edges_helper1;
   
    int k = 0;
    for (const auto& edge : edges) {
        for (const auto& edge1 : edges)
        {
            if (edge.getTo() == edge1.getFrom())
                ann_edges_helper[k].push_back(edge1);   
        }
        k++;
    }
    for (int i = 0; i < k; i++) {
        if (!ann_edges_helper[i].empty()) {
            GraphEdge <V, D> edgehelper = ann_edges_helper[i].front();
            for (const auto& edge2 : ann_edges_helper[i])
            {
                if (edge2.getLength() < edgehelper.getLength())
                    edgehelper = edge2;

                ann_edges.push_back(edgehelper);
                break;
            }
        }

    }
        return move(ann_edges);
    
}

