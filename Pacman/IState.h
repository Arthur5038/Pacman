//
//  IState.h
//  Pacman
//
//  Created by  Artur Kuanyshv on 13.08.2024.
//

#ifndef IState_h
#define IState_h

class IState{
public:
    virtual ~IState() = default;// чисто виртуальный диструктор
    virtual bool do_step() = 0;// виртуальная функция для реализации в наследниках.
};

#endif /* IState_h */
