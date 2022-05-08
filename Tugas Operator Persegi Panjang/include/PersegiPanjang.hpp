#ifndef __PERSEGIPANJANG_HPP__
#define __PERSEGIPANJANG_HPP__
    class PersegiPanjang{
        private:
            float x_maks, x_min, y_maks, y_min;
        public:
            PersegiPanjang(float titiktengah_x, float titiktengah_y, float panjang, float lebar);
            bool operator== (PersegiPanjang const &)const;
            PersegiPanjang operator+ (PersegiPanjang const &);
            PersegiPanjang operator- (PersegiPanjang const &);
            void operator++ ();
            void operator++(int);
            void operator-- ();
            void operator--(int);
            float operator[](int pilihan);
            void output();
    };
#endif