#ifndef INCLUDED_DATA_
#define INCLUDED_DATA_


class DataImp;

class Data
{
    DataImp *d_pimpl;

    public:
        Data();
        bool read();
        void display() const;
};

#endif