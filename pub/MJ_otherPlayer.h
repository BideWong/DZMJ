#ifndef MJ_OTHERPLAYER_H
#define MJ_OTHERPLAYER_H
#include "MJ_Base.h"
#include <string>

class MJ_otherPlayer : public MJ_Base
{

public:
    MJ_otherPlayer();

    void init();

    void init(pCCARD lst, CARD wang);
    int Gang(CARD c) override;
    int Peng(CARD c) override;
    int Chi(CARD c, pCCARD ll) override;
    int Hu(CARD c, pCCARD ll) override;

    int ChuPai(CARD c) override;

public:

};

#endif // MJ_OTHERPLAYER_H
