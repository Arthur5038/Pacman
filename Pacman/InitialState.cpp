//
//  InitialState.cpp
//  Pacman
//
//  Created by  Artur Kuanyshv on 15.08.2024.
//

#include "InitialState.hpp"
#include <iostream>//для вывода сообщений в консоль

InitialState::InitialState(){
    // здесь можно инициализировать пременые состояния если они есть
}

bool InitialState::do_step(){
    std::cout<< "InitialState is running...\n";
    return false; //выводим false чтоб завершить цикл и выйти из программы
}
