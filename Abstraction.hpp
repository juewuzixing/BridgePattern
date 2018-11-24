#ifndef ABSTRACTION_HPP
#define ABSTRACTION_HPP

#include "Implementor.hpp"

// 创建抽象类
class ISwitch
{
public:
    ISwitch(IElectricalEquipment *ee) { mPee = ee; }
    virtual ~ISwitch() {}

    // 打开电器
    virtual void On() = 0;
    // 关闭电器
    virtual void Off() = 0;

protected:
    IElectricalEquipment *mPee;
};

#endif // ABSTRACTION_HPP
