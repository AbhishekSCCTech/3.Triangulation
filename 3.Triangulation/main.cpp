#include "filereader.h"
#include "filewriter.h"
#include <iostream>

int main() {
    std::string inputFilename = "F:\\AbhishekSuryawanshiWorkspace\\3.Triangulation\\cube-ascii.stl";   
    std::string outputFilename = "output.dat";  

    // Read STL file
    Triangulation triangulation = FileReader::readSTL(inputFilename);

    // Write output to .dat file
    FileWriter::writeToDat(outputFilename, triangulation);

    return 0;
}
