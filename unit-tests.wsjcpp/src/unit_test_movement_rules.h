#pragma once

#include <wsjcpp_unit_tests.h>

class UnitTestMovementRules : public WsjcppUnitTestBase {
    public:
        UnitTestMovementRules();
        virtual bool doBeforeTest() override;
        virtual void executeTest() override;
        virtual bool doAfterTest() override;
};
