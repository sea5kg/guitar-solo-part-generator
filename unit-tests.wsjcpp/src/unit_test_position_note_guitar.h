#pragma once

#include <wsjcpp_unit_tests.h>

// Description: TODO
class UnitTestPositionNoteGuitar : public WsjcppUnitTestBase {
    public:
        UnitTestPositionNoteGuitar();

        virtual bool doBeforeTest() override;
        virtual void executeTest() override;
        virtual bool doAfterTest() override;
};
