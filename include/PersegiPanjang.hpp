#ifndef __persegipanjang_hpp__
#define __persegipanjang_hpp__

using namespace std;

class PersegiPanjang
{
    private:
        float xmin, xmax, ymin, ymax;

    public :
        PersegiPanjang();
        PersegiPanjang(float tengah_x, float tengah_y, float panjang, float lebar);
        bool operator == (PersegiPanjang const &) const;
        PersegiPanjang operator+(PersegiPanjang const &);
        PersegiPanjang operator-(PersegiPanjang const &);
        void operator ++();
        void operator ++(int);
        void operator --();
        void operator --(int);
        float operator [](int);
        void print();
      
};

#endif