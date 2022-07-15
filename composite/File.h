#ifndef FILE_H
#define FILE_H
#include <IListable.h>

class File : public IListable{
    public:
        File(){};
        ~File(){};
        virtual void list(int depth){};
};


#endif // FILE_H