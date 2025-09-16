#pragma once

#include <wsjcpp_unit_tests.h>

class UnitTestParseRule : public WsjcppUnitTestBase {
    public:
        UnitTestParseRule();
        virtual bool doBeforeTest() override;
        virtual void executeTest() override;
        virtual bool doAfterTest() override;
};
