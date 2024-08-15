//
//  IStateManager.h
//  Pacman
//
//  Created by  Artur Kuanyshv on 13.08.2024.
//

#ifndef IStateManager_h
#define IStateManager_h
#include "IState.h"

class IStateManager{
public:
    virtual ~IStateManager() = default;
    virtual void set_next_state(IState*state) = 0;// чисто виртуальная фцнкция
};
#endif /* IStateManager_h */
