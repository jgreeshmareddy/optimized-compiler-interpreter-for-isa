#ifndef ISA_GENERATOR_HPP
#define ISA_GENERATOR_HPP


#include "visitor.hpp"
#include <vector>
#include <fstream>


class ISAGenerator : public Visitor {
public:
std::vector<uint8_t> bytecode;


void visit(std::shared_ptr<LayersNode>) override;
void visit(std::shared_ptr<LayerNode>) override;
void visit(std::shared_ptr<VariableNode>) override {}
void visit(std::shared_ptr<IdentifierNode>) override {}
void visit(std::shared_ptr<NumberNode>) override {}
void visit(std::shared_ptr<TensorNode>) override {}
void visit(std::shared_ptr<CallNode>) override;


void write_file(const std::string &filename);
};


#endif
