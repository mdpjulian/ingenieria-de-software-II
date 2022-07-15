#ifndef FOLDER_H
#define FOLDER_H

#include "IComposibleOfListable"

class Folder : public IListable, IComposableOfListable {

    public:
        Folder(){};
        ~Folder(){};
        void list(int depth){};
        void add(IListable* component){};
        void remove(IListable* component){};
};


#endif // FOLDER_H