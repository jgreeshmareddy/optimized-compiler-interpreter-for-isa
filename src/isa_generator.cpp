#include "isa_generator.hpp"
#include <iostream>


void ISAGenerator::visit(std::shared_ptr<LayersNode> node) {
for (auto &x : node->layers) x->accept(shared_from_this());
}


void ISAGenerator::visit(std::shared_ptr<LayerNode> layer) {
for (auto &elem : layer->elements)
elem->accept(shared_from_this());
}


void ISAGenerator::visit(std::shared_ptr<CallNode> call) {
if(call->name == "load") bytecode.push_back(0x01);
if(call->name == "bias") bytecode.push_back(0x02);
if(call->name == "weights") bytecode.push_back(0x03);
if(call->name == "store") bytecode.push_back(0x04);
if(call->name == "ldstore") bytecode.push_back(0x05);
}


void ISAGenerator::write_file(const std::string &filename) {
std::ofstream f(filename, std::ios::binary);
for (auto b : bytecode) f.write((char*)&b, 1);
f.close();
}
