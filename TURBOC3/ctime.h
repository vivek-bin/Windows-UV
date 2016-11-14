#ifndef C_TIME_H
#define C_TIME_H

#include <SDL.h>
#include "SimpleXMLTransfer.h"

#define MAX_SKIPPED_FRAME   (20)  ///< max number of cycles to do before the game is slowdown
#define DEFAULT_GAME_SPEED  (60)  ///< default frames-per-second

/**
 * This class calls SDL_Delay() in order to not consume too much 
 * CPU cycles as long as the frame rate is high enough.
 */
class CTime
{
  public:

    CTime(SimpleXMLTransfer *cfg);
    ~CTime();

    void setGameSpeed (Uint16 speed);
    void update ();
    void putBackIntoCfg(SimpleXMLTransfer *cfg);

  private:
    Uint16 gameSpeed;         ///< the desired game speed in frames/s
    Uint16 cycleLength;
    Uint32 timer1,timer2;
    Uint16 cyclesToCalculate;      // max number of cycles before one
};

#endif  // C_TIME_H

