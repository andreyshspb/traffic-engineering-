#pragma once


#include <omnetpp.h>

#include "Topology.h"
#include "Tunnel.h"


namespace TrafficEngineering  {

const std::vector<std::string> FAT_TREE_UNITS = {"inet.node.inet.StandardHost", "inet.node.inet.Router"};

Topology makeTopology(omnetpp::cTopology &topology);
Topology makeTopologyFromCurrentNetwork(const std::vector<std::string> &nedTypeNames = FAT_TREE_UNITS);

Tunnel getRandomSpanningTree(const Topology &topology);
Tunnel getSpanningTree(const Topology &topology, const std::string &rootNodeName);

} // namespace TrafficEngineering
