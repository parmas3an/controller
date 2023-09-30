#ifndef _MODES_ULTIMATE_HPP
#define _MODES_ULTIMATE_HPP

#include "core/ControllerMode.hpp"
#include "core/socd.hpp"
#include "core/state.hpp"

class Ultimate2 : public ControllerMode {
  public:
    Ultimate2(GameModeConfig &config);

  private:
    void UpdateDigitalOutputs(InputState &inputs, OutputState &outputs);
    void UpdateAnalogOutputs(InputState &inputs, OutputState &outputs);
};

#endif
