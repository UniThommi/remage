#include "MyTrackInfo.hh"

MyTrackInfo::MyTrackInfo(G4int ncID, G4int gammaID)
    : fNCID(ncID), fGammaID(gammaID) {}

MyTrackInfo::~MyTrackInfo() {}

G4int MyTrackInfo::GetNCID() const { return fNCID; }
void MyTrackInfo::SetNCID(G4int ncID) { fNCID = ncID; }

G4int MyTrackInfo::GetGammaID() const { return fGammaID; }
void MyTrackInfo::SetGammaID(G4int gammaID) { fGammaID = gammaID; }