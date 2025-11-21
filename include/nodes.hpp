#ifndef NODES_HPP
#define NODES_HPP


#include <string>
#include <vector>
#include <memory>
#include "visitor.hpp"


enum NodeType {
layers_n,
layer_n,
variable_n,
identifier_n,
number_n,
tensor_n,
call_n
};


struct ASTNode {
NodeType node_type;
virtual void accept(std::shared_ptr<Visitor> v) = 0;
virtual ~ASTNode() {}
};


struct LayersNode : ASTNode {
std::vector<std::shared_ptr<ASTNode>> layers;
LayersNode() { node_type = layers_n; }
void accept(std::shared_ptr<Visitor> v) override { v->visit(shared_from_this()); }
};


#endif
