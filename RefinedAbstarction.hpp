#ifndef REFINEDABSTARCTION_HPP
#define REFINEDABSTARCTION_HPP

#include "Abstraction.hpp"

// 创建扩充抽象类
// 拉链式开关
class PullChainSwitch : public ISwitch
{
public:
    PullChainSwitch(IElectricalEquipment *ee) :ISwitch(ee) {}

    // 用拉链式开关打开电器
    virtual void On() override {
        qWarning() << "Switch on the equipment with a pull chain switch.";
        mPee->powerOn();
    }
    // 用拉链式开关关闭电器
    virtual void Off() override {
        qWarning() << "Switch off the equipment with a pull chain switch.";
        mPee->powerOff();
    }
};

// 两位开关
class TwoPositionSwitch : public ISwitch
{
public:
    TwoPositionSwitch(IElectricalEquipment *ee) :ISwitch(ee) {}

    // 用两位开关打开电器
    virtual void On() override {
        qWarning() << "Switch on the equipment with a pull TwoPosition Switch.";
        mPee->powerOn();
    }
    // 用两位开关关闭电器
    virtual void Off() override {
        qWarning() << "Switch off the equipment with a pull TwoPosition switch.";
        mPee->powerOff();
    }
};

#endif // REFINEDABSTARCTION_HPP
