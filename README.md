# tbaricault::filesystem

[![License: MIT](https://img.shields.io/badge/license-MIT-blue.svg)](LICENSE)
![C++23](https://img.shields.io/badge/C%2B%2B-23-blue)
![CMake](https://img.shields.io/badge/CMake-3.20%2B-blue)

## Description

This is a C++23 library providing some file system utility functions. This library is set to evolve to incorporate new features.

## Table of Contents

- [Description](#description)
- [Features](#features)
- [Requirements](#requirements)
- [Usage](#usage)
    - [Download and install](#download-and-install)
    - [Uninstall](#uninstall)
    - [CMake](#cmake)
    - [Include](#include)
    - [Environment](#environment)
- [Documentation](#documentation)
- [Examples](#examples)
    - [Retrieve path file extension](#retrieve-path-file-extension)
- [License](#license)

## Features

- Retrieve file extension from file path
- Read entires content of a file
- Write directly a string to a file

## Requirements

- C++23 or later
- CMake 3.20 or later

## Usage

### Download and install

```bash
git clone https://github.com/Thomas-Baricault/filesystem.git
cd filesystem
make install
```

### Uninstall

```bash
make uninstall
```

### CMake

Add the library to your project:

```cmake
find_package(tbaricault_filesystem REQUIRED)

target_link_libraries(
    my_target
    PRIVATE
        tbaricault::filesystem
)
```

### Include

```cpp
#include <tbaricault/filesystem.hpp>
```

### Environment

If you have a custom C++ installation, you can edit the `ENV` variable in the `Makefile` to specify your environment path.

Example on Windows with MSYS2/MinGW64:

```makefile
ENV = C:/msys64/mingw64
```

## Documentation

Read the complete documentation at [https://docs.thomas-baricault.fr/filesystem](https://docs.thomas-baricault.fr/filesystem).

## Examples

### Retrieve path file extension

```cpp
#include <iostream>
#include <tbaricault/filesystem.hpp>


int main()
{
    {
        std::string path = "path/to/your/file.json";
        std::cout << "Path: " << path << std::endl;
        std::cout << "Extension: " << tbaricault::filesystem::extension(path) << std::endl;
    }

    {
        std::string path = "path/to/your/file";
        std::cout << "Path: " << path << std::endl;
        std::cout << "Extension: " << tbaricault::filesystem::extension(path) << std::endl;
    }

    return (0);
}
```

Output:

```text
Path: path/to/your/file.json
Extension: json
Path: path/to/your/file
Extension:
```

## Roadmap

- Directory handler class

## License

This project is licensed under the MIT License.

See [LICENSE](LICENSE) for details.
