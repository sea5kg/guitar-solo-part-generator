#pragma once

#include <wsjcpp_unit_tests.h>

// Description: TODO
class UnitTestNoteGuitarConverter : public WsjcppUnitTestBase {
    public:
        UnitTestNoteGuitarConverter();
        virtual bool doBeforeTest() override;
        virtual void executeTest() override;
        virtual bool doAfterTest() override;
};
