#include "printdata.h"

printData::printData()
{
}


void printData::print(string &picture)
{
    try
    {
        Exiv2::Image::AutoPtr image = Exiv2::ImageFactory::open(picture);
        assert(image.get() != 0);
        image->readMetadata();

        Exiv2::ExifData &exifData = image->exifData();
        if(exifData.empty())
        {
            string error(picture);
            error += " : No EXIF data found on file";
            throw Exiv2::Error(1, error);
        }

        Exiv2::ExifData::const_iterator end = exifData.end();
        for(Exiv2::ExifData::const_iterator i = exifData.begin(); i != end; i++)
        {
            const char* tn = i->typeName();
            std::cout << std::setw(44) << std::setfill(' ') << std::left
                      << i->key() << " "
                      << "0x" << std::setw(4) << std::setfill('0') << std::right
                      << std::hex << i->tag() << " "
                      << std::setw(9) << std::setfill(' ') << std::left
                      << (tn ? tn : "Unknown") << " "
                      << std::dec << std::setw(3)
                      << std::setfill(' ') << std::right
                      << i->count() << "  "
                      << std::dec << i->value()
                      << "\n";
        }
    }catch(Exiv2::Error& e)
    {
        cout<<"Caught Exiv2 Exception: "<<e.what()<<endl;
    }


}
