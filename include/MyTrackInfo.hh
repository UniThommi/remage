#ifndef MY_TRACK_INFO_HH
#define MY_TRACK_INFO_HH

#include "G4VUserTrackInformation.hh"
#include "G4Step.hh"
#include <vector>

class MyTrackInfo : public G4VUserTrackInformation {
public:
    explicit MyTrackInfo(
        G4int trackID,
        G4ThreeVector pos,
        G4double time,
        G4String physVol,
        G4String material,
        G4int amount,
        G4double totalEnergy,
        G4bool fGe77,
        G4double kineticEnergy,
        G4ThreeVector momDir1, G4double kinE1,
        G4ThreeVector momDir2, G4double kinE2,
        G4ThreeVector momDir3, G4double kinE3,
        G4ThreeVector momDir4, G4double kinE4
    );
    ~MyTrackInfo() override;

    G4int GetnCTrackID() const;
    void SetnCTrackID(G4int trackID);

    const G4ThreeVector& GetnCPos() const;
    void SetnCPos(const G4ThreeVector& pos);

    G4bool GetnCfGe77() const;
    void SetnCfGe77(G4bool fGe77);

    G4double GetnCTime() const;
    void SetnCTime(G4double time);

    const G4String& GetnCPhysVol() const;
    void SetnCPhysVol(const G4String& physVol);

    const G4String& GetnCMaterial() const;
    void SetnCMaterial(const G4String& material);

    G4int GetnCGammaAmount() const;
    void SetnCGammaAmount(G4int amount);

    G4double GetnCGammaTotalEnergy() const;
    void SetnCGammaTotalEnergy(G4double totalEnergy);

    const G4ThreeVector& GetGammaMomentumDirection(size_t idx) const;
    void SetGammaMomentumDirection(size_t idx, const G4ThreeVector& dir);

    G4double GetGammaKineticEnergy(size_t idx) const;
    void SetGammaKineticEnergy(size_t idx, G4double energy);

    G4double GetPhotonGammaKineticEnergy() const;
    void SetPhotonGammaKineticEnergy(G4double kineticEnergy);


private:
    G4int nCTrackID;
    G4ThreeVector nCPos;
    G4double nCTime;
    G4String nCPhysVol;
    G4String nCMaterial;
    G4int nCGammaAmount;
    G4double nCGammaTotalEnergy;
    G4bool nCfGe77;
    std::array<G4ThreeVector, 4> gammaMomentumDirections;
    std::array<G4double, 4> gammaKineticEnergies;
    G4double photonGammaKineticEnergy;
    
};

#endif // MY_TRACK_INFO_HH
