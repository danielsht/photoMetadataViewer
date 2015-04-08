//
//  main.cpp
//  photoEXIFData
//
//  Created by Daniel Shteremberg on 4/7/15.
//  Copyright (c) 2015 Daniel Shteremberg. All rights reserved.
//

#include <iostream>
#include "printMetaData.h"

using namespace std;

int main(int argc, const char * argv[]) {
    if(argc != 2)
        cout<<"Usage: "<< argv[0]<<" file\n";
    else
    {
        printMetaData picture;
        
    }
    return 0;
}
