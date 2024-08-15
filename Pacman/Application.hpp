//
//  Application.hpp
//  Pacman
//
//  Created by  Artur Kuanyshv on 13.08.2024.
//

#ifndef Application_hpp
#define Application_hpp
#include "IStateManager.h"
class Application : public IStateManager{
public:
    Application();// конструктор класса
    void set_next_state(IState *state) override;//реализация функции смены состояний
    int run();
private:
    void apply_deffer_state_change();
    IState* m_ptr_state_current;
    IState* m_ptr_state_next;
};

#endif /* Application_hpp */
