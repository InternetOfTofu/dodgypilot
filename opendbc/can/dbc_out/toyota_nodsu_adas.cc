#include "common_dbc.h"

namespace {

const Signal sigs_768[] = {
    {
      .name = "LKAS_PRESS",
      .start_bit = 2,
      .msb  = 2,
      .lsb = 2,
      .size = 1,
      .is_signed = false,
      .factor = 1,
      .offset = 0,
      .is_little_endian = false,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "DISTANCE_PRESS",
      .start_bit = 5,
      .msb  = 5,
      .lsb = 5,
      .size = 1,
      .is_signed = false,
      .factor = 1,
      .offset = 0,
      .is_little_endian = false,
      .type = SignalType::DEFAULT,
    },
};
const Signal sigs_769[] = {
    {
      .name = "ID",
      .start_bit = 5,
      .msb  = 5,
      .lsb = 0,
      .size = 6,
      .is_signed = false,
      .factor = 1,
      .offset = 0,
      .is_little_endian = false,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "LONG_DIST",
      .start_bit = 7,
      .msb  = 19,
      .lsb = 7,
      .size = 13,
      .is_signed = false,
      .factor = 0.03,
      .offset = 0,
      .is_little_endian = true,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "LAT_DIST",
      .start_bit = 20,
      .msb  = 30,
      .lsb = 20,
      .size = 11,
      .is_signed = true,
      .factor = 0.018,
      .offset = 0,
      .is_little_endian = true,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "SPEED",
      .start_bit = 31,
      .msb  = 40,
      .lsb = 31,
      .size = 10,
      .is_signed = true,
      .factor = 0.06944444444,
      .offset = 0,
      .is_little_endian = true,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "LAT_SPEED",
      .start_bit = 48,
      .msb  = 54,
      .lsb = 48,
      .size = 7,
      .is_signed = true,
      .factor = 0.1,
      .offset = 0,
      .is_little_endian = true,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "RCS",
      .start_bit = 63,
      .msb  = 63,
      .lsb = 56,
      .size = 8,
      .is_signed = false,
      .factor = 1,
      .offset = 0,
      .is_little_endian = false,
      .type = SignalType::DEFAULT,
    },
};
const Signal sigs_771[] = {
    {
      .name = "ID",
      .start_bit = 5,
      .msb  = 5,
      .lsb = 0,
      .size = 6,
      .is_signed = false,
      .factor = 1,
      .offset = 0,
      .is_little_endian = false,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "LONG_DIST",
      .start_bit = 7,
      .msb  = 19,
      .lsb = 7,
      .size = 13,
      .is_signed = false,
      .factor = 0.03,
      .offset = 0,
      .is_little_endian = true,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "LAT_DIST",
      .start_bit = 20,
      .msb  = 30,
      .lsb = 20,
      .size = 11,
      .is_signed = true,
      .factor = 0.018,
      .offset = 0,
      .is_little_endian = true,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "SPEED",
      .start_bit = 31,
      .msb  = 40,
      .lsb = 31,
      .size = 10,
      .is_signed = true,
      .factor = 0.06944444444,
      .offset = 0,
      .is_little_endian = true,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "LAT_SPEED",
      .start_bit = 48,
      .msb  = 54,
      .lsb = 48,
      .size = 7,
      .is_signed = true,
      .factor = 0.1,
      .offset = 0,
      .is_little_endian = true,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "RCS",
      .start_bit = 63,
      .msb  = 63,
      .lsb = 56,
      .size = 8,
      .is_signed = false,
      .factor = 1,
      .offset = 0,
      .is_little_endian = false,
      .type = SignalType::DEFAULT,
    },
};
const Signal sigs_773[] = {
    {
      .name = "ID",
      .start_bit = 5,
      .msb  = 5,
      .lsb = 0,
      .size = 6,
      .is_signed = false,
      .factor = 1,
      .offset = 0,
      .is_little_endian = false,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "LONG_DIST",
      .start_bit = 7,
      .msb  = 19,
      .lsb = 7,
      .size = 13,
      .is_signed = false,
      .factor = 0.03,
      .offset = 0,
      .is_little_endian = true,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "LAT_DIST",
      .start_bit = 20,
      .msb  = 30,
      .lsb = 20,
      .size = 11,
      .is_signed = true,
      .factor = 0.018,
      .offset = 0,
      .is_little_endian = true,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "SPEED",
      .start_bit = 31,
      .msb  = 40,
      .lsb = 31,
      .size = 10,
      .is_signed = true,
      .factor = 0.06944444444,
      .offset = 0,
      .is_little_endian = true,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "LAT_SPEED",
      .start_bit = 48,
      .msb  = 54,
      .lsb = 48,
      .size = 7,
      .is_signed = true,
      .factor = 0.1,
      .offset = 0,
      .is_little_endian = true,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "RCS",
      .start_bit = 63,
      .msb  = 63,
      .lsb = 56,
      .size = 8,
      .is_signed = false,
      .factor = 1,
      .offset = 0,
      .is_little_endian = false,
      .type = SignalType::DEFAULT,
    },
};
const Signal sigs_775[] = {
    {
      .name = "ID",
      .start_bit = 5,
      .msb  = 5,
      .lsb = 0,
      .size = 6,
      .is_signed = false,
      .factor = 1,
      .offset = 0,
      .is_little_endian = false,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "LONG_DIST",
      .start_bit = 7,
      .msb  = 19,
      .lsb = 7,
      .size = 13,
      .is_signed = false,
      .factor = 0.03,
      .offset = 0,
      .is_little_endian = true,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "LAT_DIST",
      .start_bit = 20,
      .msb  = 30,
      .lsb = 20,
      .size = 11,
      .is_signed = true,
      .factor = 0.018,
      .offset = 0,
      .is_little_endian = true,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "SPEED",
      .start_bit = 31,
      .msb  = 40,
      .lsb = 31,
      .size = 10,
      .is_signed = true,
      .factor = 0.06944444444,
      .offset = 0,
      .is_little_endian = true,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "LAT_SPEED",
      .start_bit = 48,
      .msb  = 54,
      .lsb = 48,
      .size = 7,
      .is_signed = true,
      .factor = 0.1,
      .offset = 0,
      .is_little_endian = true,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "RCS",
      .start_bit = 63,
      .msb  = 63,
      .lsb = 56,
      .size = 8,
      .is_signed = false,
      .factor = 1,
      .offset = 0,
      .is_little_endian = false,
      .type = SignalType::DEFAULT,
    },
};
const Signal sigs_777[] = {
    {
      .name = "ID",
      .start_bit = 5,
      .msb  = 5,
      .lsb = 0,
      .size = 6,
      .is_signed = false,
      .factor = 1,
      .offset = 0,
      .is_little_endian = false,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "LONG_DIST",
      .start_bit = 7,
      .msb  = 19,
      .lsb = 7,
      .size = 13,
      .is_signed = false,
      .factor = 0.03,
      .offset = 0,
      .is_little_endian = true,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "LAT_DIST",
      .start_bit = 20,
      .msb  = 30,
      .lsb = 20,
      .size = 11,
      .is_signed = true,
      .factor = 0.018,
      .offset = 0,
      .is_little_endian = true,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "SPEED",
      .start_bit = 31,
      .msb  = 40,
      .lsb = 31,
      .size = 10,
      .is_signed = true,
      .factor = 0.06944444444,
      .offset = 0,
      .is_little_endian = true,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "LAT_SPEED",
      .start_bit = 48,
      .msb  = 54,
      .lsb = 48,
      .size = 7,
      .is_signed = true,
      .factor = 0.1,
      .offset = 0,
      .is_little_endian = true,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "RCS",
      .start_bit = 63,
      .msb  = 63,
      .lsb = 56,
      .size = 8,
      .is_signed = false,
      .factor = 1,
      .offset = 0,
      .is_little_endian = false,
      .type = SignalType::DEFAULT,
    },
};
const Signal sigs_779[] = {
    {
      .name = "ID",
      .start_bit = 5,
      .msb  = 5,
      .lsb = 0,
      .size = 6,
      .is_signed = false,
      .factor = 1,
      .offset = 0,
      .is_little_endian = false,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "LONG_DIST",
      .start_bit = 7,
      .msb  = 19,
      .lsb = 7,
      .size = 13,
      .is_signed = false,
      .factor = 0.03,
      .offset = 0,
      .is_little_endian = true,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "LAT_DIST",
      .start_bit = 20,
      .msb  = 30,
      .lsb = 20,
      .size = 11,
      .is_signed = true,
      .factor = 0.018,
      .offset = 0,
      .is_little_endian = true,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "SPEED",
      .start_bit = 31,
      .msb  = 40,
      .lsb = 31,
      .size = 10,
      .is_signed = true,
      .factor = 0.06944444444,
      .offset = 0,
      .is_little_endian = true,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "LAT_SPEED",
      .start_bit = 48,
      .msb  = 54,
      .lsb = 48,
      .size = 7,
      .is_signed = true,
      .factor = 0.1,
      .offset = 0,
      .is_little_endian = true,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "RCS",
      .start_bit = 63,
      .msb  = 63,
      .lsb = 56,
      .size = 8,
      .is_signed = false,
      .factor = 1,
      .offset = 0,
      .is_little_endian = false,
      .type = SignalType::DEFAULT,
    },
};
const Signal sigs_781[] = {
    {
      .name = "ID",
      .start_bit = 5,
      .msb  = 5,
      .lsb = 0,
      .size = 6,
      .is_signed = false,
      .factor = 1,
      .offset = 0,
      .is_little_endian = false,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "LONG_DIST",
      .start_bit = 7,
      .msb  = 19,
      .lsb = 7,
      .size = 13,
      .is_signed = false,
      .factor = 0.03,
      .offset = 0,
      .is_little_endian = true,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "LAT_DIST",
      .start_bit = 20,
      .msb  = 30,
      .lsb = 20,
      .size = 11,
      .is_signed = true,
      .factor = 0.018,
      .offset = 0,
      .is_little_endian = true,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "SPEED",
      .start_bit = 31,
      .msb  = 40,
      .lsb = 31,
      .size = 10,
      .is_signed = true,
      .factor = 0.06944444444,
      .offset = 0,
      .is_little_endian = true,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "LAT_SPEED",
      .start_bit = 48,
      .msb  = 54,
      .lsb = 48,
      .size = 7,
      .is_signed = true,
      .factor = 0.1,
      .offset = 0,
      .is_little_endian = true,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "RCS",
      .start_bit = 63,
      .msb  = 63,
      .lsb = 56,
      .size = 8,
      .is_signed = false,
      .factor = 1,
      .offset = 0,
      .is_little_endian = false,
      .type = SignalType::DEFAULT,
    },
};
const Signal sigs_783[] = {
    {
      .name = "ID",
      .start_bit = 5,
      .msb  = 5,
      .lsb = 0,
      .size = 6,
      .is_signed = false,
      .factor = 1,
      .offset = 0,
      .is_little_endian = false,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "LONG_DIST",
      .start_bit = 7,
      .msb  = 19,
      .lsb = 7,
      .size = 13,
      .is_signed = false,
      .factor = 0.03,
      .offset = 0,
      .is_little_endian = true,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "LAT_DIST",
      .start_bit = 20,
      .msb  = 30,
      .lsb = 20,
      .size = 11,
      .is_signed = true,
      .factor = 0.018,
      .offset = 0,
      .is_little_endian = true,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "SPEED",
      .start_bit = 31,
      .msb  = 40,
      .lsb = 31,
      .size = 10,
      .is_signed = true,
      .factor = 0.06944444444,
      .offset = 0,
      .is_little_endian = true,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "LAT_SPEED",
      .start_bit = 48,
      .msb  = 54,
      .lsb = 48,
      .size = 7,
      .is_signed = true,
      .factor = 0.1,
      .offset = 0,
      .is_little_endian = true,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "RCS",
      .start_bit = 63,
      .msb  = 63,
      .lsb = 56,
      .size = 8,
      .is_signed = false,
      .factor = 1,
      .offset = 0,
      .is_little_endian = false,
      .type = SignalType::DEFAULT,
    },
};
const Signal sigs_785[] = {
    {
      .name = "ID",
      .start_bit = 5,
      .msb  = 5,
      .lsb = 0,
      .size = 6,
      .is_signed = false,
      .factor = 1,
      .offset = 0,
      .is_little_endian = false,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "LONG_DIST",
      .start_bit = 7,
      .msb  = 19,
      .lsb = 7,
      .size = 13,
      .is_signed = false,
      .factor = 0.03,
      .offset = 0,
      .is_little_endian = true,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "LAT_DIST",
      .start_bit = 20,
      .msb  = 30,
      .lsb = 20,
      .size = 11,
      .is_signed = true,
      .factor = 0.018,
      .offset = 0,
      .is_little_endian = true,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "SPEED",
      .start_bit = 31,
      .msb  = 40,
      .lsb = 31,
      .size = 10,
      .is_signed = true,
      .factor = 0.06944444444,
      .offset = 0,
      .is_little_endian = true,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "LAT_SPEED",
      .start_bit = 48,
      .msb  = 54,
      .lsb = 48,
      .size = 7,
      .is_signed = true,
      .factor = 0.1,
      .offset = 0,
      .is_little_endian = true,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "RCS",
      .start_bit = 63,
      .msb  = 63,
      .lsb = 56,
      .size = 8,
      .is_signed = false,
      .factor = 1,
      .offset = 0,
      .is_little_endian = false,
      .type = SignalType::DEFAULT,
    },
};
const Signal sigs_787[] = {
    {
      .name = "ID",
      .start_bit = 5,
      .msb  = 5,
      .lsb = 0,
      .size = 6,
      .is_signed = false,
      .factor = 1,
      .offset = 0,
      .is_little_endian = false,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "LONG_DIST",
      .start_bit = 7,
      .msb  = 19,
      .lsb = 7,
      .size = 13,
      .is_signed = false,
      .factor = 0.03,
      .offset = 0,
      .is_little_endian = true,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "LAT_DIST",
      .start_bit = 20,
      .msb  = 30,
      .lsb = 20,
      .size = 11,
      .is_signed = true,
      .factor = 0.018,
      .offset = 0,
      .is_little_endian = true,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "SPEED",
      .start_bit = 31,
      .msb  = 40,
      .lsb = 31,
      .size = 10,
      .is_signed = true,
      .factor = 0.06944444444,
      .offset = 0,
      .is_little_endian = true,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "LAT_SPEED",
      .start_bit = 48,
      .msb  = 54,
      .lsb = 48,
      .size = 7,
      .is_signed = true,
      .factor = 0.1,
      .offset = 0,
      .is_little_endian = true,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "RCS",
      .start_bit = 63,
      .msb  = 63,
      .lsb = 56,
      .size = 8,
      .is_signed = false,
      .factor = 1,
      .offset = 0,
      .is_little_endian = false,
      .type = SignalType::DEFAULT,
    },
};
const Signal sigs_789[] = {
    {
      .name = "ID",
      .start_bit = 5,
      .msb  = 5,
      .lsb = 0,
      .size = 6,
      .is_signed = false,
      .factor = 1,
      .offset = 0,
      .is_little_endian = false,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "LONG_DIST",
      .start_bit = 7,
      .msb  = 19,
      .lsb = 7,
      .size = 13,
      .is_signed = false,
      .factor = 0.03,
      .offset = 0,
      .is_little_endian = true,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "LAT_DIST",
      .start_bit = 20,
      .msb  = 30,
      .lsb = 20,
      .size = 11,
      .is_signed = true,
      .factor = 0.018,
      .offset = 0,
      .is_little_endian = true,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "SPEED",
      .start_bit = 31,
      .msb  = 40,
      .lsb = 31,
      .size = 10,
      .is_signed = true,
      .factor = 0.06944444444,
      .offset = 0,
      .is_little_endian = true,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "LAT_SPEED",
      .start_bit = 48,
      .msb  = 54,
      .lsb = 48,
      .size = 7,
      .is_signed = true,
      .factor = 0.1,
      .offset = 0,
      .is_little_endian = true,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "RCS",
      .start_bit = 63,
      .msb  = 63,
      .lsb = 56,
      .size = 8,
      .is_signed = false,
      .factor = 1,
      .offset = 0,
      .is_little_endian = false,
      .type = SignalType::DEFAULT,
    },
};
const Signal sigs_791[] = {
    {
      .name = "ID",
      .start_bit = 5,
      .msb  = 5,
      .lsb = 0,
      .size = 6,
      .is_signed = false,
      .factor = 1,
      .offset = 0,
      .is_little_endian = false,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "LONG_DIST",
      .start_bit = 7,
      .msb  = 19,
      .lsb = 7,
      .size = 13,
      .is_signed = false,
      .factor = 0.03,
      .offset = 0,
      .is_little_endian = true,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "LAT_DIST",
      .start_bit = 20,
      .msb  = 30,
      .lsb = 20,
      .size = 11,
      .is_signed = true,
      .factor = 0.018,
      .offset = 0,
      .is_little_endian = true,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "SPEED",
      .start_bit = 31,
      .msb  = 40,
      .lsb = 31,
      .size = 10,
      .is_signed = true,
      .factor = 0.06944444444,
      .offset = 0,
      .is_little_endian = true,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "LAT_SPEED",
      .start_bit = 48,
      .msb  = 54,
      .lsb = 48,
      .size = 7,
      .is_signed = true,
      .factor = 0.1,
      .offset = 0,
      .is_little_endian = true,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "RCS",
      .start_bit = 63,
      .msb  = 63,
      .lsb = 56,
      .size = 8,
      .is_signed = false,
      .factor = 1,
      .offset = 0,
      .is_little_endian = false,
      .type = SignalType::DEFAULT,
    },
};
const Signal sigs_1664[] = {
    {
      .name = "ID",
      .start_bit = 0,
      .msb  = 5,
      .lsb = 0,
      .size = 6,
      .is_signed = false,
      .factor = 1,
      .offset = 0,
      .is_little_endian = true,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "LONG_DIST",
      .start_bit = 7,
      .msb  = 19,
      .lsb = 7,
      .size = 13,
      .is_signed = false,
      .factor = 0.03,
      .offset = 0,
      .is_little_endian = true,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "LAT_DIST",
      .start_bit = 20,
      .msb  = 30,
      .lsb = 20,
      .size = 11,
      .is_signed = true,
      .factor = 0.015,
      .offset = 0,
      .is_little_endian = true,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "SPEED",
      .start_bit = 31,
      .msb  = 40,
      .lsb = 31,
      .size = 10,
      .is_signed = true,
      .factor = 0.06944444444,
      .offset = 0,
      .is_little_endian = true,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "LAT_SPEED",
      .start_bit = 48,
      .msb  = 54,
      .lsb = 48,
      .size = 7,
      .is_signed = true,
      .factor = 0.1,
      .offset = 0,
      .is_little_endian = true,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "RCS",
      .start_bit = 63,
      .msb  = 63,
      .lsb = 56,
      .size = 8,
      .is_signed = false,
      .factor = 1,
      .offset = 0,
      .is_little_endian = false,
      .type = SignalType::DEFAULT,
    },
};
const Signal sigs_1665[] = {
    {
      .name = "ID",
      .start_bit = 0,
      .msb  = 5,
      .lsb = 0,
      .size = 6,
      .is_signed = false,
      .factor = 1,
      .offset = 0,
      .is_little_endian = true,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "LONG_DIST",
      .start_bit = 7,
      .msb  = 19,
      .lsb = 7,
      .size = 13,
      .is_signed = false,
      .factor = 0.03,
      .offset = 0,
      .is_little_endian = true,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "LAT_DIST",
      .start_bit = 20,
      .msb  = 30,
      .lsb = 20,
      .size = 11,
      .is_signed = true,
      .factor = 0.015,
      .offset = 0,
      .is_little_endian = true,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "SPEED",
      .start_bit = 31,
      .msb  = 40,
      .lsb = 31,
      .size = 10,
      .is_signed = true,
      .factor = 0.06944444444,
      .offset = 0,
      .is_little_endian = true,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "LAT_SPEED",
      .start_bit = 48,
      .msb  = 54,
      .lsb = 48,
      .size = 7,
      .is_signed = true,
      .factor = 0.1,
      .offset = 0,
      .is_little_endian = true,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "RCS",
      .start_bit = 63,
      .msb  = 63,
      .lsb = 56,
      .size = 8,
      .is_signed = false,
      .factor = 1,
      .offset = 0,
      .is_little_endian = false,
      .type = SignalType::DEFAULT,
    },
};
const Signal sigs_1666[] = {
    {
      .name = "ID",
      .start_bit = 0,
      .msb  = 5,
      .lsb = 0,
      .size = 6,
      .is_signed = false,
      .factor = 1,
      .offset = 0,
      .is_little_endian = true,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "VALID",
      .start_bit = 6,
      .msb  = 6,
      .lsb = 6,
      .size = 1,
      .is_signed = false,
      .factor = 1,
      .offset = 0,
      .is_little_endian = false,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "LONG_DIST",
      .start_bit = 7,
      .msb  = 19,
      .lsb = 7,
      .size = 13,
      .is_signed = false,
      .factor = 0.03,
      .offset = 0,
      .is_little_endian = true,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "LAT_DIST",
      .start_bit = 20,
      .msb  = 30,
      .lsb = 20,
      .size = 11,
      .is_signed = true,
      .factor = 0.015,
      .offset = 0,
      .is_little_endian = true,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "SPEED",
      .start_bit = 31,
      .msb  = 40,
      .lsb = 31,
      .size = 10,
      .is_signed = true,
      .factor = 0.06944444444,
      .offset = 0,
      .is_little_endian = true,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "LAT_SPEED",
      .start_bit = 48,
      .msb  = 54,
      .lsb = 48,
      .size = 7,
      .is_signed = true,
      .factor = 0.1,
      .offset = 0,
      .is_little_endian = true,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "RCS",
      .start_bit = 63,
      .msb  = 63,
      .lsb = 56,
      .size = 8,
      .is_signed = false,
      .factor = 1,
      .offset = 0,
      .is_little_endian = false,
      .type = SignalType::DEFAULT,
    },
};
const Signal sigs_1667[] = {
    {
      .name = "ID",
      .start_bit = 0,
      .msb  = 5,
      .lsb = 0,
      .size = 6,
      .is_signed = false,
      .factor = 1,
      .offset = 0,
      .is_little_endian = true,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "VALID",
      .start_bit = 6,
      .msb  = 6,
      .lsb = 6,
      .size = 1,
      .is_signed = false,
      .factor = 1,
      .offset = 0,
      .is_little_endian = false,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "LONG_DIST",
      .start_bit = 7,
      .msb  = 19,
      .lsb = 7,
      .size = 13,
      .is_signed = false,
      .factor = 0.03,
      .offset = 0,
      .is_little_endian = true,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "LAT_DIST",
      .start_bit = 20,
      .msb  = 30,
      .lsb = 20,
      .size = 11,
      .is_signed = true,
      .factor = 0.015,
      .offset = 0,
      .is_little_endian = true,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "SPEED",
      .start_bit = 31,
      .msb  = 40,
      .lsb = 31,
      .size = 10,
      .is_signed = true,
      .factor = 0.06944444444,
      .offset = 0,
      .is_little_endian = true,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "LAT_SPEED",
      .start_bit = 48,
      .msb  = 54,
      .lsb = 48,
      .size = 7,
      .is_signed = true,
      .factor = 0.1,
      .offset = 0,
      .is_little_endian = true,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "RCS",
      .start_bit = 63,
      .msb  = 63,
      .lsb = 56,
      .size = 8,
      .is_signed = false,
      .factor = 1,
      .offset = 0,
      .is_little_endian = false,
      .type = SignalType::DEFAULT,
    },
};
const Signal sigs_1668[] = {
    {
      .name = "ID",
      .start_bit = 0,
      .msb  = 5,
      .lsb = 0,
      .size = 6,
      .is_signed = false,
      .factor = 1,
      .offset = 0,
      .is_little_endian = true,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "VALID",
      .start_bit = 6,
      .msb  = 6,
      .lsb = 6,
      .size = 1,
      .is_signed = false,
      .factor = 1,
      .offset = 0,
      .is_little_endian = false,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "LONG_DIST",
      .start_bit = 7,
      .msb  = 19,
      .lsb = 7,
      .size = 13,
      .is_signed = false,
      .factor = 0.03,
      .offset = 0,
      .is_little_endian = true,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "LAT_DIST",
      .start_bit = 20,
      .msb  = 30,
      .lsb = 20,
      .size = 11,
      .is_signed = true,
      .factor = 0.015,
      .offset = 0,
      .is_little_endian = true,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "SPEED",
      .start_bit = 31,
      .msb  = 40,
      .lsb = 31,
      .size = 10,
      .is_signed = true,
      .factor = 0.06944444444,
      .offset = 0,
      .is_little_endian = true,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "LAT_SPEED",
      .start_bit = 48,
      .msb  = 54,
      .lsb = 48,
      .size = 7,
      .is_signed = true,
      .factor = 0.1,
      .offset = 0,
      .is_little_endian = true,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "RCS",
      .start_bit = 63,
      .msb  = 63,
      .lsb = 56,
      .size = 8,
      .is_signed = false,
      .factor = 1,
      .offset = 0,
      .is_little_endian = false,
      .type = SignalType::DEFAULT,
    },
};
const Signal sigs_1669[] = {
    {
      .name = "ID",
      .start_bit = 0,
      .msb  = 5,
      .lsb = 0,
      .size = 6,
      .is_signed = false,
      .factor = 1,
      .offset = 0,
      .is_little_endian = true,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "VALID",
      .start_bit = 6,
      .msb  = 6,
      .lsb = 6,
      .size = 1,
      .is_signed = false,
      .factor = 1,
      .offset = 0,
      .is_little_endian = false,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "LONG_DIST",
      .start_bit = 7,
      .msb  = 19,
      .lsb = 7,
      .size = 13,
      .is_signed = false,
      .factor = 0.03,
      .offset = 0,
      .is_little_endian = true,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "LAT_DIST",
      .start_bit = 20,
      .msb  = 30,
      .lsb = 20,
      .size = 11,
      .is_signed = true,
      .factor = 0.015,
      .offset = 0,
      .is_little_endian = true,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "SPEED",
      .start_bit = 31,
      .msb  = 40,
      .lsb = 31,
      .size = 10,
      .is_signed = true,
      .factor = 0.06944444444,
      .offset = 0,
      .is_little_endian = true,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "LAT_SPEED",
      .start_bit = 48,
      .msb  = 54,
      .lsb = 48,
      .size = 7,
      .is_signed = true,
      .factor = 0.1,
      .offset = 0,
      .is_little_endian = true,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "RCS",
      .start_bit = 63,
      .msb  = 63,
      .lsb = 56,
      .size = 8,
      .is_signed = false,
      .factor = 1,
      .offset = 0,
      .is_little_endian = false,
      .type = SignalType::DEFAULT,
    },
};

const Msg msgs[] = {
  {
    .name = "BUTTONS",
    .address = 0x300,
    .size = 8,
    .num_sigs = ARRAYSIZE(sigs_768),
    .sigs = sigs_768,
  },
  {
    .name = "OBJECT_0",
    .address = 0x301,
    .size = 8,
    .num_sigs = ARRAYSIZE(sigs_769),
    .sigs = sigs_769,
  },
  {
    .name = "OBJECT_1",
    .address = 0x303,
    .size = 8,
    .num_sigs = ARRAYSIZE(sigs_771),
    .sigs = sigs_771,
  },
  {
    .name = "OBJECT_2",
    .address = 0x305,
    .size = 8,
    .num_sigs = ARRAYSIZE(sigs_773),
    .sigs = sigs_773,
  },
  {
    .name = "OBJECT_3",
    .address = 0x307,
    .size = 8,
    .num_sigs = ARRAYSIZE(sigs_775),
    .sigs = sigs_775,
  },
  {
    .name = "OBJECT_4",
    .address = 0x309,
    .size = 8,
    .num_sigs = ARRAYSIZE(sigs_777),
    .sigs = sigs_777,
  },
  {
    .name = "OBJECT_5",
    .address = 0x30B,
    .size = 8,
    .num_sigs = ARRAYSIZE(sigs_779),
    .sigs = sigs_779,
  },
  {
    .name = "OBJECT_6",
    .address = 0x30D,
    .size = 8,
    .num_sigs = ARRAYSIZE(sigs_781),
    .sigs = sigs_781,
  },
  {
    .name = "OBJECT_7",
    .address = 0x30F,
    .size = 8,
    .num_sigs = ARRAYSIZE(sigs_783),
    .sigs = sigs_783,
  },
  {
    .name = "OBJECT_8",
    .address = 0x311,
    .size = 8,
    .num_sigs = ARRAYSIZE(sigs_785),
    .sigs = sigs_785,
  },
  {
    .name = "OBJECT_9",
    .address = 0x313,
    .size = 8,
    .num_sigs = ARRAYSIZE(sigs_787),
    .sigs = sigs_787,
  },
  {
    .name = "OBJECT_10",
    .address = 0x315,
    .size = 8,
    .num_sigs = ARRAYSIZE(sigs_789),
    .sigs = sigs_789,
  },
  {
    .name = "OBJECT_11",
    .address = 0x317,
    .size = 8,
    .num_sigs = ARRAYSIZE(sigs_791),
    .sigs = sigs_791,
  },
  {
    .name = "CLUSTER_F",
    .address = 0x680,
    .size = 8,
    .num_sigs = ARRAYSIZE(sigs_1664),
    .sigs = sigs_1664,
  },
  {
    .name = "CLUSTER_F_A",
    .address = 0x681,
    .size = 8,
    .num_sigs = ARRAYSIZE(sigs_1665),
    .sigs = sigs_1665,
  },
  {
    .name = "CLUSTER_L",
    .address = 0x682,
    .size = 8,
    .num_sigs = ARRAYSIZE(sigs_1666),
    .sigs = sigs_1666,
  },
  {
    .name = "CLUSTER_R",
    .address = 0x683,
    .size = 8,
    .num_sigs = ARRAYSIZE(sigs_1667),
    .sigs = sigs_1667,
  },
  {
    .name = "CLUSTER_L_A",
    .address = 0x684,
    .size = 8,
    .num_sigs = ARRAYSIZE(sigs_1668),
    .sigs = sigs_1668,
  },
  {
    .name = "CLUSTER_R_A",
    .address = 0x685,
    .size = 8,
    .num_sigs = ARRAYSIZE(sigs_1669),
    .sigs = sigs_1669,
  },
};

const Val vals[] = {
};

}

const DBC toyota_nodsu_adas = {
  .name = "toyota_nodsu_adas",
  .num_msgs = ARRAYSIZE(msgs),
  .msgs = msgs,
  .vals = vals,
  .num_vals = ARRAYSIZE(vals),
};

dbc_init(toyota_nodsu_adas)