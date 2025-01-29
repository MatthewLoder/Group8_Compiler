compiler/ // Root directory for the entire project
├── src/ // Source code files (.c and .h)
│ ├── lexer/ // Lexical analysis (Scanner) related files
│ │ ├── lexer.c // Scanner implementation
│ │ ├── lexer.h // Header file for lexer
│ │ └── ... // Any helper functions/data structures
│ ├── parser/ // Syntax analysis (Parser) related files
│ │ ├── parser.c // Parser implementation
│ │ ├── parser.h // Header file for parser
│ │ └── ... // Grammar definitions, parsing tables, etc.
│ ├── semantic/ // Semantic analysis related files
│ │ ├── semantic.c // Semantic analysis implementation
│ │ ├── semantic.h // Header file for semantic analysis
│ │ └── ... // Symbol table, type checking logic, etc.
│ ├── codegen/ // Code generation related files
│ │ ├── codegen.c // Code generation implementation
│ │ ├── codegen.h // Header file for code generation
│ │ └── ... // Target code generation, intermediate representation, etc.
│ ├── common/ // Common data structures and utilities
│ │ ├── symbol_table.c // Symbol table implementation
│ │ ├── symbol_table.h // Header for symbol table
│ │ ├── error.c // Error handling functions
│ │ ├── error.h // Header for error handling
│ │ ├── util.c // Utility functions (memory management, string manipulation, etc.)
│ │ └── util.h // Header for utilities
│ ├── main.c // Main compiler driver (handles command line args, calls phases)
│ └── ... // Any other core modules
├── include/ // Header files that need to be accessible project-wide
│ ├── lexer.h // (Copy or symlink from src/lexer)
│ ├── parser.h // (Copy or symlink from src/parser)
│ ├── semantic.h // (Copy or symlink from src/semantic)
│ ├── codegen.h // (Copy or symlink from src/codegen)
│ ├── symbol_table.h // (Copy or symlink from src/common)
│ ├── error.h // (Copy or symlink from src/common)
│ └── util.h // (Copy or symlink from src/common)
├── build/ // Compiled object files and executables (created by build system)
├── examples/ // Example source code files for your language
├── tests/ // Test cases for different parts of the compiler
├── doc/ // Documentation (generated or manual)
├── Makefile // Build instructions using Make
└── README.md // Project overview and instructions
