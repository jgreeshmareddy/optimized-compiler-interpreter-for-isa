# optimized-compiler-interpreter-for-isa
# Compiler + Interpreter (DSL → ISA → Execution)


(DSL- Domain Specific Language)


This repository contains a complete toolchain:


1. **Lexer** – Tokenizes `.mdsc` DSL files
2. **Parser** – Builds an AST
3. **Semantic validator** – Layer structure & directive validation
4. **ISA Generator** – Emits machine instructions
5. **Interpreter** – Executes ISA instructions
6. **Tests** – Compare expected & actual outputs
