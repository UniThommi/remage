#include "MyTrackInfo.hh"

MyTrackInfo::MyTrackInfo(G4int muonID, G4int ncID, G4int gammaID)
    : fMuonID(muonID), fNCID(ncID), fGammaID(gammaID) {}

MyTrackInfo::~MyTrackInfo() {}

G4int MyTrackInfo::GetMuonID() const { return fMuonID; }
void MyTrackInfo::SetMuonID(G4int muonID) { fMuonID = muonID; }

G4int MyTrackInfo::GetNCID() const { return fNCID; }
void MyTrackInfo::SetNCID(G4int ncID) { fNCID = ncID; }

G4int MyTrackInfo::GetGammaID() const { return fGammaID; }
void MyTrackInfo::SetGammaID(G4int gammaID) { fGammaID = gammaID; }