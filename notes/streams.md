Stream-related classes in C++ provide functionalities for input and output operations on different types of data sources or destinations. These classes are part of the C++ Standard Library and are primarily defined in the `<iostream>` header.

Here are some commonly used stream-related classes:

1. `std::istream`: This is the base class for input streams. It provides functionality for reading data from input sources such as the keyboard or files. Examples include `std::cin` for standard input and `std::ifstream` for file input.

2. `std::ostream`: This is the base class for output streams. It provides functionality for writing data to output destinations such as the console or files. Example classes include `std::cout` for standard output and `std::ofstream` for file output.

3. `std::iostream`: This class combines the functionalities of both `std::istream` and `std::ostream`, allowing bidirectional input and output operations. Example classes include `std::stringstream` for in-memory string-based input and output.

4. `std::ifstream`: This class represents an input file stream, allowing you to read data from files.

5. `std::ofstream`: This class represents an output file stream, allowing you to write data to files.

6. `std::stringstream`: This class provides input and output operations on a string-based stream. It allows you to treat a string as a stream and perform operations such as extracting values or writing to the string.

These classes, along with their member functions and operators, provide a powerful and flexible way to handle input and output operations in C++. They support various data types, including fundamental types (e.g., `int`, `float`), strings, and user-defined types, making them widely used for I/O tasks in C++ programming.