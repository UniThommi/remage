#include "MyTrackInfo.hh"

#include "RMGLog.hh"
#include "RMGHardware.hh"
#include "RMGManager.hh"


// Constructor initializes track IDs
MyTrackInfo::MyTrackInfo(
    G4int trackID,
    G4ThreeVector pos,
    G4double time,
    G4String physVol,
    G4String material,
    G4int amount,
    G4double totalEnergy,
    G4bool fGe77,
    G4double kineticEnergy
    G4ThreeVector momDir1, G4double kinE1,
    G4ThreeVector momDir2, G4double kinE2,
    G4ThreeVector momDir3, G4double kinE3,
    G4ThreeVector momDir4, G4double kinE4
) 
    : nCTrackID(trackID),
    nCPos(pos), 
    nCTime(time),
    nCPhysVol(physVol),
    nCMaterial(material),
    nCGammaAmount(amount),
    nCGammaTotalEnergy(totalEnergy),
    nCfGe77(fGe77), 
    photonGammaKineticEnergy(kineticEnergy)
{
    gammaMomentumDirections = {momDir1, momDir2, momDir3, momDir4};
    gammaKineticEnergies = {kinE1, kinE2, kinE3, kinE4};
}

// Destructor
MyTrackInfo::~MyTrackInfo() {}

// Get and Set Info
G4int MyTrackInfo::GetnCTrackID() const { return this->nCTrackID; }
void MyTrackInfo::SetnCTrackID(G4int trackID) { this->nCTrackID = trackID; }

const G4ThreeVector& MyTrackInfo::GetnCPos() const { return this->nCPos; }
void MyTrackInfo::SetnCPos(const G4ThreeVector& pos) { this->nCPos = pos; }

G4bool MyTrackInfo::GetnCfGe77() const { return this->nCfGe77; }
void MyTrackInfo::SetnCfGe77(G4bool fGe77) { this->nCfGe77 = fGe77; }

G4double MyTrackInfo::GetnCTime() const { return this->nCTime; }
void MyTrackInfo::SetnCTime(G4double time) { this->nCTime = time; }

const G4String& MyTrackInfo::GetnCPhysVol() const { return this->nCPhysVol; }
void MyTrackInfo::SetnCPhysVol(const G4String& physVol) { this->nCPhysVol = physVol; }

const G4String& MyTrackInfo::GetnCMaterial() const { return this->nCMaterial; }
void MyTrackInfo::SetnCMaterial(const G4String& material) { this->nCMaterial = material; }

G4int MyTrackInfo::GetnCGammaAmount() const { return this->nCGammaAmount; }
void MyTrackInfo::SetnCGammaAmount(G4int amount) { this->nCGammaAmount = amount; }

G4double MyTrackInfo::GetnCGammaTotalEnergy() const { return this->nCGammaTotalEnergy; }
void MyTrackInfo::SetnCGammaTotalEnergy(G4double totalEnergy) { this->nCGammaTotalEnergy = totalEnergy; } 

G4double MyTrackInfo::GetGammaKineticEnergy() const { return this->photonGammaKineticEnergy; }
void MyTrackInfo::SetGammaKineticEnergy(G4double kineticEnergy) { this->photonGammaKineticEnergy = kineticEnergy; }

const G4ThreeVector& MyTrackInfo::GetGammaMomentumDirection(size_t idx) const {
    return gammaMomentumDirections.at(idx);
}

G4double MyTrackInfo::GetGammaKineticEnergy(size_t idx) const {
    return gammaKineticEnergies.at(idx);
}

void MyTrackInfo::SetGammaMomentumDirection(size_t idx, const G4ThreeVector& dir) {
    gammaMomentumDirections.at(idx) = dir;
}

void MyTrackInfo::SetGammaKineticEnergy(size_t idx, G4double energy) {
    gammaKineticEnergies.at(idx) = energy;
}

