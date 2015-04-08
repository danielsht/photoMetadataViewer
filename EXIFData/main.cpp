#include <iostream>
#include "printdata.h"

using namespace std;

int main(int argc, const char* argv[])
{
    if(argc != 2)
        cout<<"Usage: "<<argv[0]<< " file\n";
    else
    {
        printData picture;
        picture.print(argv[1]);

    }

    return 0;
}

