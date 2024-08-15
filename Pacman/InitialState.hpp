//
//  InitialState.hpp
//  Pacman
//
//  Created by  Artur Kuanyshv on 15.08.2024.
//

#ifndef InitialState_hpp
#define InitialState_hpp
#include <stdio.h>
#include "IState.h"

class InitialState :public IState{
public:
    InitialState(); //Создаем конструктор
    bool do_step() override;// реализуем МЕТОД класса
};
#endif /* InitialState_hpp */
