#pragma once

bool bBooted = false;       // global used to inhibit restart when restoring Farenheit switch.

enum eEditMode {
    eStart,
    eNoEdit = eStart,
    eEnable,
    eUnits,
    eSP,
    eTimeout,
    eEnd = eTimeout
};