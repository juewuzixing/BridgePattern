#ifndef CONCRETEIMPLEMENTOR_HPP
#define CONCRETEIMPLEMENTOR_HPP

#include "Implementor.hpp"

// 创建具体实现类

// 电灯
class Light : public IElectricalEquipment
{
public:
    // 开灯
    virtual void powerOn() override {
        qWarning() << "Light is on.";
    }
    // 关灯
    virtual void powerOff() override {
        qWarning() << "Light is off.";
    }
};

// 风扇
class Fan : public IElectricalEquipment
{
public:
    // 开风扇
    virtual void powerOn() override {
        qWarning() << "Fan is on.";
    }
    // 关风扇
    virtual void powerOff() override {
        qWarning() << "Fan is off.";
    }
};

#endif // CONCRETEIMPLEMENTOR_HPP
