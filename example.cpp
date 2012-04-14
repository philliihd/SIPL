#include "Core.h"
using namespace SIPL;

int main(int argc, char ** argv)
{
    Init();

	Image<PIXEL_COLOR_UCHAR> image = Image<PIXEL_COLOR_UCHAR>("images/example.bmp");
    image.show();
    for(int i = 0; i < image.getWidth(); i++) {
    for(int j = 0; j < image.getHeight(); j++) {
        PIXEL_COLOR_UCHAR c;
        c.green = 255;
        image.set(i,j,c);
    }}
    image.update();
	Image<PIXEL_COLOR_UCHAR> image2 = Image<PIXEL_COLOR_UCHAR>("images/example.bmp");
    image2.show();

	return 0;
}
