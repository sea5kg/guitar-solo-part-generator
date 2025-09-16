#include "unit_test_position_note_guitar.h"
#include <vector>
#include <wsjcpp_core.h>
#include <solo_part_guitar.h>

REGISTRY_WSJCPP_UNIT_TEST(UnitTestPositionNoteGuitar)

UnitTestPositionNoteGuitar::UnitTestPositionNoteGuitar()
    : WsjcppUnitTestBase("UnitTestPositionNoteGuitar") {
}

bool UnitTestPositionNoteGuitar::doBeforeTest() {
    return true;
};

void UnitTestPositionNoteGuitar::executeTest() {
    PositionNoteGuitar note(
        GuitarNumberString::GUITAR_STRING_3,
        4,
        GuitarTouchFinger::GUITAR_INDEX_FINGER,
        ::GUITAR_DURATION_OF_NOTE_1_1_SEMIBREVE
    );
    compare("String 3", (int)note.getGuitarString(), (int)GuitarNumberString::GUITAR_STRING_3);
    compare("Fret 4", note.getFret(), 4);
    compare("Finger index", (int)note.getFinger(), (int)GuitarTouchFinger::GUITAR_INDEX_FINGER);
}

bool UnitTestPositionNoteGuitar::doAfterTest() {
    return true;
}
