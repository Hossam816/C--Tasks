#ifndef DRIVED_H
#define DRIVED_H
#include <Base.h>

using namespace std;

class Drived : public Base
{
private:
    int z;
public:
    Drived();
    Drived(int x, int y, int z);


    int getZ();
    void setZ(int z);

    int sumNumbers() override;
    void displayNumbers() override;


    ~Drived();
};

#endif // DRIVED_H
