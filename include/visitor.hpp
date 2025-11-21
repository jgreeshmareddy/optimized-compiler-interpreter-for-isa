#ifndef VISITOR_HPP
#define VISITOR_HPP


#include <memory>
struct LayersNode;
struct LayerNode;
struct VariableNode;
struct IdentifierNode;
struct NumberNode;
struct TensorNode;
struct CallNode;


struct Visitor : public std::enable_shared_from_this<Visitor> {
virtual void visit(std::shared_ptr<LayersNode>) = 0;
virtual void visit(std::shared_ptr<LayerNode>) = 0;
virtual void visit(std::shared_ptr<VariableNode>) = 0;
virtual void visit(std::shared_ptr<IdentifierNode>) = 0;
virtual void visit(std::shared_ptr<NumberNode>) = 0;
virtual void visit(std::shared_ptr<TensorNode>) = 0;
virtual void visit(std::shared_ptr<CallNode>) = 0;
};


#endif
