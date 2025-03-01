/* Kniazeva Eva Andreevna
st128104@student.spbu.ru */


#include <filesystem>
#include <fstream>
#include <iostream>

int main() {

    //opening the source file
    std::filesystem::path f_path = "source.bin";
    std::fstream input_file;
    input_file.open(f_path, std::ios::binary | std::ios::in);

    //measuring file's size
    int f_size = std::filesystem::file_size(f_path);

    //allocating dynamic memory for a list
    char* contents = new char[f_size];

    //reading the file's contents
    input_file.read(contents, f_size);
    input_file.close();

    //flipping the array
    for (int i = 0; i < f_size/2; i++) {
        std::swap(contents[i], contents[f_size - i - 1]);
    }

    //creating the output file
    std::fstream output_file;
    output_file.open("result.bin", std::ios::binary | std::ios::out);
    output_file.write(contents, f_size);
    output_file.close();

    //clearing dynamic memory
    delete[] contents;


    }



