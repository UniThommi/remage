#ifndef MY_TRACK_INFO_HH
#define MY_TRACK_INFO_HH

#include "G4VUserTrackInformation.hh"

class MyTrackInfo : public G4VUserTrackInformation {
public:
    explicit MyTrackInfo(G4int ncID = -1, G4int gammaID = -1);
    ~MyTrackInfo() override;

    G4int GetNCID() const;
    void SetNCID(G4int ncID);

    G4int GetGammaID() const;
    void SetGammaID(G4int gammaID);

private:
    G4int fNCID;
    G4int fGammaID;
};

#endif // MY_TRACK_INFO_HH