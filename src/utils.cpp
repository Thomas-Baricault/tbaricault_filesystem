/*
 * Copyright (c) 2026-present Thomas Baricault
 *
 * SPDX-License-Identifier: MIT
 */

 
#include <fstream>
#include <sstream>

#include "filesystem/utils.hpp"


namespace tbaricault::filesystem
{

    std::string extension(std::string_view path)
    {
        std::size_t i = path.rfind('.');
        std::size_t j = path.rfind('/');
        if (i == std::string::npos || (j != std::string::npos && j > i))
            return "";
        return std::string(path.substr(i + 1));
    }

    bool read(const std::string& path, std::string& content)
    {
        std::ifstream in(path);
        if (!in.is_open())
            return (false);
        std::stringstream buffer;
        buffer << in.rdbuf();
        in.close();
        content += buffer.str();
        return (true);
    }

    bool write(const std::string& path, std::string_view content)
    {
        std::ofstream out(path);
        if (!out.is_open())
            return (false);
        out << content;
        out.close();
        return (true);
    }

}
