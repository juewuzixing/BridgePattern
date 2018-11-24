#ifndef IELECTRICALEQUIPMENT_HPP
#define IELECTRICALEQUIPMENT_HPP

#include <QDebug>

//创建实现类接口

// 电器类
class IElectricalEquipment
{
public:
    virtual ~IElectricalEquipment() {}

    // 打开
    virtual void powerOn() = 0;
    // 关闭
    virtual void powerOff() = 0;
};

#endif // IELECTRICALEQUIPMENT_HPP
