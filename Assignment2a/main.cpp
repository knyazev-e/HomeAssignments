#include <filesystem>
#include <fstream>
#include <iostream>

int main() {

    //opening the source file
    std::filesystem::path f_path = "source.pdf";
    std::fstream input_file;
    input_file.open(f_path, std::ios::binary | std::ios::in);

    //cheking whether the file has been opened
    if (input_file.is_open()) {
        std::cout << "File opened succesfully" << std::endl;
    }
    else {
        std::cout << "A problem occured while opening the file" << std::endl;
    }


    //measuring file's size
    int f_size = std::filesystem::file_size(f_path);
    std::cout << f_size << std::endl;

    //allocating dynamic memory for a list
    char* contents = new char[f_size];

    //reading the file's contents
    input_file.read(contents, f_size);
    input_file.close();

    //flipping the array
    for (int i = 0; i < f_size/2; i++) {
        std::swap(contents[1], contents[f_size - i - 1]);
    }

    //creating the output file
    std::fstream output_file;
    output_file.open("result.pdf", std::ios::binary | std::ios::out);
    output_file.write(contents, f_size);
    output_file.close();

    //clearing dynamic memory
    delete[] contents;


    }
