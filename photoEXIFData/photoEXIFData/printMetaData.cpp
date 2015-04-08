//
//  printMetaData.cpp
//  photoEXIFData
//
//  Created by Daniel Shteremberg on 4/7/15.
//  Copyright (c) 2015 Daniel Shteremberg. All rights reserved.
//

#include "printMetaData.h"

printMetaData::printMetaData(std::string &picture)
{
    try {
        Exiv2::Image image;
        
        assert(image.get() != 0);
    } catch (<#catch parameter#>) {
        <#statements#>
    }
}