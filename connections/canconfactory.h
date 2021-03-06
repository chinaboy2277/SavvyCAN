#ifndef CANCONFACTORY_H
#define CANCONFACTORY_H

#include "canconconst.h"
#include "canconnection.h"

class CanConFactory
{
public:
    static CANConnection* create(CANCon::type, QString pPortName);
};

#endif // CANCONFACTORY_H
