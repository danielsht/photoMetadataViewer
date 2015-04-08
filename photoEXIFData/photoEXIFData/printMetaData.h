//
//  printMetaData.h
//  photoEXIFData
//
//  Created by Daniel Shteremberg on 4/7/15.
//  Copyright (c) 2015 Daniel Shteremberg. All rights reserved.
//

#ifndef __photoEXIFData__printMetaData__
#define __photoEXIFData__printMetaData__

#include "exiv2/exiv2.hpp"
#include <stdio.h>
#include <iostream>
#include <iomanip>
#include <cassert>



class printMetaData
{
private:
    
    
public:
    photoMetaData(std::string& picture);
    void printMetaData(std::string& picture);
};

#endif /* defined(__photoEXIFData__printMetaData__) */
