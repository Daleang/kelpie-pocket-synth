#ifndef globalSynthState_h
#define globalSynthState_h

struct synthState
{
  int WAVEFORM1;
  int WAVEFORM2;
  bool isPoly;
  bool shift;
  float OSC1_VOL;
  float OSC2_VOL;
  float PWM;
  float DETUNE_FINE;
  float DETUNE_COARSE;
  float LFO_FREQ;
  float LFO_MIXER_AMP;
  float AMP_ATTACK;
  float AMP_DECAY;
  float AMP_SUSTAIN;
  float AMP_RELEASE;
  float FILTER_ATTACK;
  float FILTER_DECAY;
  float FILTER_SUSTAIN;
  float FILTER_RELEASE;
  int FILTER_FREQ;
  float FILTER_Q;
  float FILTER_OCTAVE;
  float MASTER_VOL;
};

#endif