/*
 * Copyright (c) 2026-present Thomas Baricault
 *
 * SPDX-License-Identifier: MIT
 */


#pragma once


#include <string>
#include <string_view>


namespace tbaricault::filesystem
{

    /**
     * @brief Returns the extension of a file path
     * 
     * @param path File path
     * 
     * @return File extension, or an empty string if the path has no extension
     */
    std::string extension(std::string_view path);

    /**
     * @brief Reads the entire contents of a file
     *
     * @param path File path
     * @param content String that receives the file contents
     *
     * @return `true` if the file was successfully read, `false` otherwise
     */
    bool read(const std::string& path, std::string& content);

    /**
     * @brief Writes a string to a file
     *
     * @param path Destination file path
     * @param content Content to write
     *
     * @return `true` if the write operation succeeds, `false` otherwise
     */
    bool write(const std::string& path, std::string_view content);

}
