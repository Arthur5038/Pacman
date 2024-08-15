//
//  Application.cpp
//  Pacman
//
//  Created by  Artur Kuanyshv on 13.08.2024.
//

#include "Application.hpp"
#include <iostream>
#include "InitialState.hpp"
Application::Application()
:m_ptr_state_next(nullptr), m_ptr_state_current(nullptr){
    //установим новое начально состояние
    set_next_state(new InitialState());
}

void Application::set_next_state(IState* state){
    m_ptr_state_next = state;
}

void Application::apply_deffer_state_change() {
    if (m_ptr_state_next) {
        delete m_ptr_state_current;
        m_ptr_state_current = m_ptr_state_next;
        m_ptr_state_next = nullptr;
    }
}

int Application::run() {
    try {
        while (m_ptr_state_current && m_ptr_state_current->do_step()) {
            apply_deffer_state_change();
        }
    } catch (std::exception& ex) {
        std::cout << ex.what() << '\n';
        return 1;
    } catch (...) {
        std::cout << "Unknown exception\n";
        return 2;
    }
    return 0;
}
