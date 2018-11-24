#include "RefinedAbstarction.hpp"
#include "ConcreteImplementor.hpp"

#ifndef SAFE_DELETE
#define SAFE_DELETE(p) { if(p) { delete(p); (p) = NULL; }}
#endif

int main()
{
    // 创建电器-电灯、风扇
    IElectricalEquipment *light = new Light();
    IElectricalEquipment *fan = new Fan();

    /**
     * 创建开关-拉链式开关、两位开关
     * 将拉链式开关和电灯关联，将两位开关和风扇关联
    **/
    ISwitch *pullChainSwitch = new PullChainSwitch(light);
    ISwitch *twoPositionSwitch = new PullChainSwitch(fan);

    // 开关灯
    pullChainSwitch->On();
    pullChainSwitch->Off();

    // 开关风扇
    twoPositionSwitch->On();
    twoPositionSwitch->Off();

    SAFE_DELETE(twoPositionSwitch);
    SAFE_DELETE(pullChainSwitch);

    SAFE_DELETE(fan);
    SAFE_DELETE(light);

    getchar();
    return 0;
}
