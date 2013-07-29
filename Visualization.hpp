#ifndef VISUALIZATION_HPP_
#define VISUALIZATION_HPP_

#include "Core.hpp"
#include <vector>
#include <map>

namespace SIPL {
class Visualization {
    public:
        Visualization(BaseDataset * image);
        Visualization(BaseDataset * image, BaseDataset * image2);
        Visualization(BaseDataset * image, BaseDataset * image2, BaseDataset * image3);
        void addImage();
        void addVolume();
        void display();
        void update();
        static int windowCounter;
    private:
        bool isVolumeVisualization;
        std::vector<BaseDataset *> images;
        std::map<BaseDataset *, float> level;
        std::map<BaseDataset *, float> window;
        slice_plane direction;
        int slice;
        GdkPixbuf * render();
        void renderSlice(int, GdkPixbuf *);
        void renderImage(int, GdkPixbuf *);
};


}; // END SIPL NAMESPACE

#endif /* VISUALIZATION_HPP_ */