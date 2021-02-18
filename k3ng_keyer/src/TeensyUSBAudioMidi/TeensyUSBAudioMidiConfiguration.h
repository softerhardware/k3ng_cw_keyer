//
// User-specific configuration goes here
//
//
//#define MIDI_CW_CHANNEL      5   // channel for sending key-down and ptt messages
//#define MIDI_CW_NOTE         1   // Note for key-up/down
//#define MIDI_PTT_NOTE        2   // Note for PTT on/off
//#define MIDI_CONTROL_CHANNEL 2   // channel for receiving parameters
//#define AUDIO_MQS                // define if using MQS audio out instead of I2S
//#define SIDETONE__VOLUME    0.2  // initial side tone volume
//#define SIDETONE_FREQ       800  // initial side tone frequency

//
// Notes:
// ======
//
// If MIDI_CW_CHANNEL      is not defined, channel 1 will be used
// If MIDI_CW_NOTE         is not defined, Note #1 is used for MIDI CW-key messages
// If MIDI_PTT_NOTE        is not defined, PTT MIDI messages are not sent
// If MIDI_CONTROL_CHANNEL is not defined, channel 2 will be listened to
// If AUDIO_MQS            is not defined the I2S audio device will be used
// If SIDETONE_VOLUME      is not defined 0.2 will be used
// If SIDETONE_FREQ        is not defined 600 Hz will be used
//
//
// So if nothing is defined in this file:
// - I2S audio is used
// - incoming MIDI messages are expected on channel 2
// - CW key-down/up events are sent on channel 1 with Note #1
// - no PTT events are sent via MIDI
//
