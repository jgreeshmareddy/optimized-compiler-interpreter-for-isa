#include <iostream>
#include <vector>
#include <fstream>
using namespace std;


int main(int argc, char** argv) {
if(argc < 2) return -1;
ifstream f(argv[1], ios::binary);
vector<uint8_t> code((istreambuf_iterator<char>(f)), {});


cout << "Executing ISA..." << endl;


vector<int> R(8,0);


for(uint8_t op : code) {
switch(op) {
case 0x01: cout << "LOAD executed" << endl; break;
case 0x02: cout << "BIAS executed" << endl; break;
case 0x03: cout << "WEIGHTS executed" << endl; break;
case 0x04: cout << "STORE executed" << endl; break;
case 0x05: cout << "LDSTORE executed" << endl; break;
}
}


return 0;
}
