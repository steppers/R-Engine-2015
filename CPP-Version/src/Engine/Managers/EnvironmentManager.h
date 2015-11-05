//
// Created by Ollie on 05/11/2015.
//

#ifndef SSIMCPP_ENVIRONMENTMANAGER_H
#define SSIMCPP_ENVIRONMENTMANAGER_H

#include "Manager.h"
#include "../Engine.h"

class EnvironmentManager : Manager {
public:
    static EnvironmentManager& getInstance(){
        static EnvironmentManager instance;
        return instance;
    }

    void init(Engine* engine);

    void stopEngine();

private:
    //Singleton initialisation----------------------------------------------------
    EnvironmentManager(){}  //Keep the constructor and destructor private
    ~EnvironmentManager(){}

    EnvironmentManager(EnvironmentManager const&) = delete;   //Prevent us from using these
    void operator=(EnvironmentManager const&) = delete;
    //----------------------------------------------------------------------------

    Engine* _engine;
};


#endif //SSIMCPP_ENVIRONMENTMANAGER_H