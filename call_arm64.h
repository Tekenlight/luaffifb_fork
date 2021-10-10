/*
** This file has been pre-processed with DynASM.
** http://luajit.org/dynasm.html
** DynASM version 1.4.0, DynASM arm version 1.4.0
** DO NOT EDIT! The original file is in "call_arm64.dasc".
*/

/* vim: ts=4 sw=4 sts=4 et tw=78
 * Portions copyright (c) 2015-present, Facebook, Inc. All rights reserved.
 * Portions copyright (c) 2011 James R. McKaskill.
 *
 * This source code is licensed under the BSD-style license found in the
 * LICENSE file in the root directory of this source tree. An additional grant
 * of patent rights can be found in the PATENTS file in the same directory.
 */
//|.arch arm64
#if DASM_VERSION != 10400
#error "Version mismatch between DynASM and included encoding engine"
#endif

//|.actionlist build_actionlist
static const unsigned int build_actionlist[1279] = {
0xF84002A9,
0x000E0000,
0x00000000,
0xF84002A9,
0x000E0000,
0x00000000,
0xB84002A9,
0x000E0000,
0x00000000,
0xF80003E0,
0x000E0000,
0x00000000,
0xF80003E0,
0x000E0000,
0x00000000,
0xB80003E0,
0x000E0000,
0x00000000,
0xFC4002A0,
0x000E0000,
0x00000000,
0xBC4002B0,
0x000E0000,
0x1E22C200,
0x00000000,
0xFC4002A0,
0x000E0000,
0x00000000,
0xFC4002A1,
0x000E0000,
0x00000000,
0xBC4002A0,
0x000E0000,
0x00000000,
0xBC4002A1,
0x000E0000,
0x00000000,
0xFC4002A0,
0x000E0000,
0x00000000,
0xFC4002A1,
0x000E0000,
0x00000000,
0xBC4002A0,
0x000E0000,
0x00000000,
0xBC4002A1,
0x000E0000,
0x00000000,
0xFC0003E0,
0x000E0000,
0x00000000,
0x1E624000,
0x00000000,
0xBC0003E0,
0x000E0000,
0x00000000,
0xFC0003E0,
0x000E0000,
0x00000000,
0x1E624000,
0xBC0003E0,
0x000E0000,
0x00000000,
0xFC0003E0,
0x000E0000,
0x00000000,
0xFC0003E1,
0x000E0000,
0x00000000,
0xBC0003E0,
0x000E0000,
0x00000000,
0xBC0003E1,
0x000E0000,
0x00000000,
0xFC0003E0,
0x000E0000,
0x00000000,
0xFC0003E1,
0x000E0000,
0x00000000,
0xBC0003E0,
0x000E0000,
0x00000000,
0xBC0003E1,
0x000E0000,
0x00000000,
0xD10103FF,
0xA9037BFD,
0xA90263F7,
0xA9015BF5,
0xA90053F3,
0x910043F5,
0x00000000,
0xD10003FF,
0x000B0000,
0xFC1E02A0,
0xFC1D02A1,
0xFC1C02A2,
0xFC1B02A3,
0xFC1A82A4,
0xFC1A02A5,
0xFC1902A6,
0xFC1802A7,
0xF81782A0,
0xF81702A1,
0xF81682A2,
0xF81602A3,
0xF81582A4,
0xF81502A5,
0xF81482A6,
0xF81402A7,
0x00000000,
0xD2800013,
0x00090205,
0xF2A00013,
0x00090205,
0xF2C00013,
0x00090205,
0xF2E00013,
0x00090205,
0x00000000,
0x52800009,
0x00090205,
0x72A00009,
0x00090205,
0x5280000A,
0x00090205,
0x72A0000A,
0x00090205,
0x2A0A03E2,
0x2A0903E1,
0xAA1303E0,
0x94000000,
0x00030000,
0x00000000,
0x52800002,
0x00090205,
0xB20003E1,
0x000D0000,
0xAA1303E0,
0x94000000,
0x00030000,
0x00000000,
0x52800002,
0x00090205,
0x52800001,
0x00090205,
0xAA1303E0,
0x94000000,
0x00030000,
0xD2800002,
0x00090205,
0xF2A00002,
0x00090205,
0xF2C00002,
0x00090205,
0xF2E00002,
0x00090205,
0xB20003E1,
0x000D0000,
0xAA1303E0,
0x94000000,
0x00030001,
0x00000000,
0xF9000009,
0xB20003E1,
0x000D0000,
0xAA1303E0,
0x94000000,
0x00030002,
0x00000000,
0xD2800002,
0x00090205,
0xF2A00002,
0x00090205,
0xF2C00002,
0x00090205,
0xF2E00002,
0x00090205,
0x52800001,
0xAA1303E0,
0x94000000,
0x00030001,
0x00000000,
0xF9000009,
0x00000000,
0xD2800002,
0x00090205,
0xF2A00002,
0x00090205,
0xF2C00002,
0x00090205,
0xF2E00002,
0x00090205,
0x52800001,
0xAA1303E0,
0x94000000,
0x00030001,
0x00000000,
0xF9000009,
0x00000000,
0xD2800002,
0x00090205,
0xF2A00002,
0x00090205,
0xF2C00002,
0x00090205,
0xF2E00002,
0x00090205,
0x52800001,
0xAA1303E0,
0x94000000,
0x00030001,
0x00000000,
0xBD000000,
0xBD000401,
0x00000000,
0xD2800002,
0x00090205,
0xF2A00002,
0x00090205,
0xF2C00002,
0x00090205,
0xF2E00002,
0x00090205,
0x52800001,
0xAA1303E0,
0x94000000,
0x00030001,
0x00000000,
0xFD000000,
0xFD000401,
0x00000000,
0xAA1303E0,
0x94000000,
0x00030003,
0x00000000,
0xAA1303E0,
0x94000000,
0x00030003,
0x00000000,
0x7100013F,
0x54000000,
0x00050801,
0x52800029,
0x0006000B,
0xD3401D29,
0xAA0903E1,
0xAA1303E0,
0x94000000,
0x00030004,
0x00000000,
0xD3401D29,
0x00000000,
0x93401D29,
0x00000000,
0xAA0903E1,
0xAA1303E0,
0x94000000,
0x00030005,
0x00000000,
0xD3403D29,
0x00000000,
0x93403D29,
0x00000000,
0xAA0903E1,
0xAA1303E0,
0x94000000,
0x00030005,
0x00000000,
0x2A0903E1,
0xAA1303E0,
0x94000000,
0x00030006,
0x00000000,
0x2A0903E1,
0xAA1303E0,
0x94000000,
0x00030005,
0x00000000,
0xD2800003,
0x00090205,
0xF2A00003,
0x00090205,
0xF2C00003,
0x00090205,
0xF2E00003,
0x00090205,
0x52800002,
0x00090205,
0x52800001,
0x00090205,
0xAA1303E0,
0x94000000,
0x00030007,
0x00000000,
0x52800002,
0x00090205,
0xB20003E1,
0x000D0000,
0xAA1303E0,
0x94000000,
0x00030000,
0xD2800003,
0x00090205,
0xF2A00003,
0x00090205,
0xF2C00003,
0x00090205,
0xF2E00003,
0x00090205,
0xB20003E2,
0x000D0000,
0xB20003E1,
0x000D0000,
0xAA1303E0,
0x94000000,
0x00030008,
0xF90013E0,
0xB20003E1,
0x000D0000,
0xAA1303E0,
0x94000000,
0x00030009,
0xF94013E0,
0x00000000,
0x52800002,
0x00090205,
0xB20003E1,
0x000D0000,
0xAA1303E0,
0x94000000,
0x00030000,
0xD2800003,
0x00090205,
0xF2A00003,
0x00090205,
0xF2C00003,
0x00090205,
0xF2E00003,
0x00090205,
0xB20003E2,
0x000D0000,
0xB20003E1,
0x000D0000,
0xAA1303E0,
0x94000000,
0x0003000A,
0xB90023E0,
0xB20003E1,
0x000D0000,
0xAA1303E0,
0x94000000,
0x00030009,
0xB94023E0,
0x00000000,
0xB20003E1,
0x000D0000,
0xAA1303E0,
0x94000000,
0x00030009,
0x00000000,
0xB20003E1,
0x000D0000,
0xAA1303E0,
0x94000000,
0x0003000B,
0x00000000,
0xB20003E1,
0x000D0000,
0xAA1303E0,
0x94000000,
0x0003000C,
0x00000000,
0xB90023E0,
0xB20003E1,
0x000D0000,
0xAA1303E0,
0x94000000,
0x00030009,
0xB94023E0,
0x00000000,
0xB20003E1,
0x000D0000,
0xAA1303E0,
0x94000000,
0x0003000D,
0x00000000,
0xB20003E1,
0x000D0000,
0xAA1303E0,
0x94000000,
0x0003000E,
0x00000000,
0xF90013E0,
0xB20003E1,
0x000D0000,
0xAA1303E0,
0x94000000,
0x00030009,
0xF94013E0,
0x00000000,
0xB20003E1,
0x000D0000,
0xAA1303E0,
0x94000000,
0x0003000F,
0xF90013E0,
0xB20003E1,
0x000D0000,
0xAA1303E0,
0x94000000,
0x00030009,
0xF94013E0,
0x00000000,
0xB20003E1,
0x000D0000,
0xAA1303E0,
0x94000000,
0x00030010,
0xFD0013E0,
0xB20003E1,
0x000D0000,
0xAA1303E0,
0x94000000,
0x00030009,
0xFD4013E1,
0x1E624020,
0x00000000,
0xB20003E1,
0x000D0000,
0xAA1303E0,
0x94000000,
0x00030010,
0xFD0013E0,
0xB20003E1,
0x000D0000,
0xAA1303E0,
0x94000000,
0x00030009,
0xFD4013E0,
0x00000000,
0xB20003E1,
0x000D0000,
0xAA1303E0,
0x94000000,
0x00030011,
0xBD0023E0,
0xBD0027E1,
0xB20003E1,
0x000D0000,
0xAA1303E0,
0x94000000,
0x00030009,
0xBD4023E0,
0xBD4027E1,
0x00000000,
0xB20003E1,
0x000D0000,
0xAA1303E0,
0x94000000,
0x00030012,
0xFD0013E0,
0xFD0017E1,
0xB20003E1,
0x000D0000,
0xAA1303E0,
0x94000000,
0x00030009,
0xFD4013E0,
0xFD4017E1,
0x00000000,
0xA97F52B3,
0x910002BF,
0xA9405BF5,
0x910043FF,
0xA94063F7,
0x910043FF,
0xA9407BFD,
0x910043FF,
0xD65F03C0,
0xD65F03C0,
0x00000000,
0xD10103FF,
0xA9037BFD,
0xA90263F7,
0xA9015BF5,
0xA90053F3,
0x910043F5,
0xAA0003F3,
0x00000000,
0xAA1303E0,
0x94000000,
0x00030013,
0xAA0003F4,
0xF100001F,
0x000B0000,
0x00000000,
0x5400000A,
0x00050802,
0xD2800009,
0x00090205,
0xF2A00009,
0x00090205,
0xF2C00009,
0x00090205,
0xF2E00009,
0x00090205,
0xAA0903E1,
0xAA1303E0,
0x94000000,
0x00030014,
0x0006000C,
0x5400000D,
0x00050801,
0xD2800009,
0x00090205,
0xF2A00009,
0x00090205,
0xF2C00009,
0x00090205,
0xF2E00009,
0x00090205,
0xAA0903E1,
0xAA1303E0,
0x94000000,
0x00030014,
0x00000000,
0x5400000A,
0x00050801,
0xD2800009,
0x00090205,
0xF2A00009,
0x00090205,
0xF2C00009,
0x00090205,
0xF2E00009,
0x00090205,
0xAA0903E1,
0xAA1303E0,
0x94000000,
0x00030014,
0x00000000,
0x0006000B,
0x00000000,
0xCB3473FF,
0xD10003FF,
0x000B0000,
0x00000000,
0x52800009,
0x00090205,
0x72A00009,
0x00090205,
0x93407D29,
0xD2800003,
0x00090205,
0xF2A00003,
0x00090205,
0xF2C00003,
0x00090205,
0xF2E00003,
0x00090205,
0x2A0903E2,
0x52800001,
0x00090205,
0xAA1303E0,
0x94000000,
0x00030008,
0x00000000,
0x52800009,
0x00090205,
0x72A00009,
0x00090205,
0x93407D29,
0xD2800003,
0x00090205,
0xF2A00003,
0x00090205,
0xF2C00003,
0x00090205,
0xF2E00003,
0x00090205,
0x2A0903E2,
0x52800001,
0x00090205,
0xAA1303E0,
0x94000000,
0x00030015,
0x00000000,
0x52800009,
0x00090205,
0x72A00009,
0x00090205,
0x93407D29,
0xD2800003,
0x00090205,
0xF2A00003,
0x00090205,
0xF2C00003,
0x00090205,
0xF2E00003,
0x00090205,
0x2A0903E2,
0x52800001,
0x00090205,
0xAA1303E0,
0x94000000,
0x0003000A,
0x00000000,
0x52800001,
0x00090205,
0xAA1303E0,
0x94000000,
0x0003000C,
0x00000000,
0xD3401C00,
0x00000000,
0x93401C00,
0x00000000,
0x52800001,
0x00090205,
0xAA1303E0,
0x94000000,
0x0003000C,
0x00000000,
0xD3403C00,
0x00000000,
0x93403C00,
0x00000000,
0x52800001,
0x00090205,
0xAA1303E0,
0x94000000,
0x0003000C,
0xF100001F,
0x54000000,
0x00050801,
0x52800020,
0x0006000B,
0xD3401C00,
0x00000000,
0x52800001,
0x00090205,
0xAA1303E0,
0x94000000,
0x0003000B,
0x00000000,
0x52800001,
0x00090205,
0xAA1303E0,
0x94000000,
0x0003000C,
0x00000000,
0x52800001,
0x00090205,
0xAA1303E0,
0x94000000,
0x0003000F,
0x00000000,
0x52800001,
0x00090205,
0xAA1303E0,
0x94000000,
0x0003000D,
0x00000000,
0x52800001,
0x00090205,
0xAA1303E0,
0x94000000,
0x0003000E,
0x00000000,
0x52800001,
0x00090205,
0xAA1303E0,
0x94000000,
0x00030010,
0xD10203FF,
0xFD0003E0,
0xFD000BE1,
0xFD0013E2,
0xFD001BE3,
0xFD0023E4,
0xFD002BE5,
0xFD0033E6,
0xFD003BE7,
0x1E604000,
0x94000000,
0x00030016,
0xFD4003E0,
0xFD400BE1,
0xFD4013E2,
0xFD401BE3,
0xFD4023E4,
0xFD402BE5,
0xFD4033E6,
0xFD403BE7,
0x910203FF,
0x00000000,
0x52800001,
0x00090205,
0xAA1303E0,
0x94000000,
0x00030012,
0x00000000,
0x52800001,
0x00090205,
0xAA1303E0,
0x94000000,
0x00030010,
0x00000000,
0x52800001,
0x00090205,
0xAA1303E0,
0x94000000,
0x00030011,
0x00000000,
0x910003E9,
0x91000129,
0x000B0000,
0xAA0903E4,
0x52800003,
0x00090205,
0xAA1403E2,
0x52800001,
0x00090205,
0xAA1303E0,
0x94000000,
0x00030017,
0x00000000,
0x910003E9,
0x91000129,
0x000B0000,
0xAA0903E4,
0x52800003,
0x00090205,
0xAA1403E2,
0x52800001,
0x00090205,
0xAA1303E0,
0x94000000,
0x00030018,
0x00000000,
0x910003E9,
0x91000129,
0x000B0000,
0xAA0903E5,
0x52800004,
0x00090205,
0x52800003,
0x00090205,
0xAA1403E2,
0x52800001,
0x00090205,
0xAA1303E0,
0x94000000,
0x00030019,
0x00000000,
0xD2800009,
0x00090205,
0xF2A00009,
0x00090205,
0xF2C00009,
0x00090205,
0xF2E00009,
0x00090205,
0xAA1F03EA,
0xB940012A,
0x2A0A03E0,
0x94000000,
0x0003001A,
0x00000000,
0x910083FF,
0x00000000,
0xFC4003E7,
0x000E0000,
0x00000000,
0xFC4003E6,
0x000E0000,
0x00000000,
0xFC4003E5,
0x000E0000,
0x00000000,
0xFC4003E4,
0x000E0000,
0x00000000,
0xFC4003E3,
0x000E0000,
0x00000000,
0xFC4003E2,
0x000E0000,
0x00000000,
0xFC4003E1,
0x000E0000,
0x00000000,
0xFC4003E0,
0x000E0000,
0x00000000,
0xF9401FE7,
0x00000000,
0xF9401BE6,
0x00000000,
0xF94017E5,
0x00000000,
0xF94013E4,
0x00000000,
0xF9400FE3,
0x00000000,
0xF9400BE2,
0x00000000,
0xF94007E1,
0x00000000,
0xF94003E0,
0x00000000,
0x910003FF,
0x000B0000,
0x00000000,
0x94000000,
0x0003001B,
0x8B3473FF,
0xD100C3FF,
0x00000000,
0xF90013E0,
0x94000000,
0x0003001C,
0xD2800009,
0x00090205,
0xF2A00009,
0x00090205,
0xF2C00009,
0x00090205,
0xF2E00009,
0x00090205,
0xB9000120,
0x52800009,
0x00090205,
0x72A00009,
0x00090205,
0x93407D29,
0xD2800002,
0x00090205,
0xF2A00002,
0x00090205,
0xF2C00002,
0x00090205,
0xF2E00002,
0x00090205,
0x2A0903E1,
0xAA1303E0,
0x94000000,
0x00030001,
0xF94013E9,
0xF9000009,
0x52800020,
0xA97F52B3,
0x910002BF,
0xA9405BF5,
0x910043FF,
0xA94063F7,
0x910043FF,
0xA9407BFD,
0x910043FF,
0xD65F03C0,
0x00000000,
0xF90013E0,
0x94000000,
0x0003001C,
0xD2800009,
0x00090205,
0xF2A00009,
0x00090205,
0xF2C00009,
0x00090205,
0xF2E00009,
0x00090205,
0xB9000120,
0x52800009,
0x00090205,
0x72A00009,
0x00090205,
0x93407D29,
0xD2800002,
0x00090205,
0xF2A00002,
0x00090205,
0xF2C00002,
0x00090205,
0xF2E00002,
0x00090205,
0x2A0903E1,
0xAA1303E0,
0x94000000,
0x00030001,
0xF94013E9,
0xF9000009,
0x52800020,
0xA97F52B3,
0x910002BF,
0xA9405BF5,
0x910043FF,
0xA94063F7,
0x910043FF,
0xA9407BFD,
0x910043FF,
0xD65F03C0,
0x00000000,
0xF90013E0,
0x94000000,
0x0003001C,
0xD2800009,
0x00090205,
0xF2A00009,
0x00090205,
0xF2C00009,
0x00090205,
0xF2E00009,
0x00090205,
0xB9000120,
0xF94013E0,
0xAA0003E1,
0xAA1303E0,
0x94000000,
0x0003001D,
0x52800020,
0xA97F52B3,
0x910002BF,
0xA9405BF5,
0x910043FF,
0xA94063F7,
0x910043FF,
0xA9407BFD,
0x910043FF,
0xD65F03C0,
0x00000000,
0xF90013E0,
0x94000000,
0x0003001C,
0xD2800009,
0x00090205,
0xF2A00009,
0x00090205,
0xF2C00009,
0x00090205,
0xF2E00009,
0x00090205,
0xB9000120,
0xF94013E0,
0xAA0003E1,
0xAA1303E0,
0x94000000,
0x0003001D,
0x52800020,
0xA97F52B3,
0x910002BF,
0xA9405BF5,
0x910043FF,
0xA94063F7,
0x910043FF,
0xA9407BFD,
0x910043FF,
0xD65F03C0,
0x00000000,
0xBD002BE0,
0xBD002FE1,
0x94000000,
0x0003001C,
0xD2800009,
0x00090205,
0xF2A00009,
0x00090205,
0xF2C00009,
0x00090205,
0xF2E00009,
0x00090205,
0xB9000120,
0x52800009,
0x00090205,
0x72A00009,
0x00090205,
0x93407D29,
0xD2800002,
0x00090205,
0xF2A00002,
0x00090205,
0xF2C00002,
0x00090205,
0xF2E00002,
0x00090205,
0x2A0903E1,
0xAA1303E0,
0x94000000,
0x00030001,
0xBD402BE0,
0xBD402FE1,
0xBD000000,
0xBD000401,
0x52800020,
0xA97F52B3,
0x910002BF,
0xA9405BF5,
0x910043FF,
0xA94063F7,
0x910043FF,
0xA9407BFD,
0x910043FF,
0xD65F03C0,
0x00000000,
0xFD0013E0,
0xFD0017E1,
0x94000000,
0x0003001C,
0xD2800009,
0x00090205,
0xF2A00009,
0x00090205,
0xF2C00009,
0x00090205,
0xF2E00009,
0x00090205,
0xB9000120,
0x52800009,
0x00090205,
0x72A00009,
0x00090205,
0x93407D29,
0xD2800002,
0x00090205,
0xF2A00002,
0x00090205,
0xF2C00002,
0x00090205,
0xF2E00002,
0x00090205,
0x2A0903E1,
0xAA1303E0,
0x94000000,
0x00030001,
0xFD4013E0,
0xFD4017E1,
0xFD000000,
0xFD000401,
0x52800020,
0xA97F52B3,
0x910002BF,
0xA9405BF5,
0x910043FF,
0xA94063F7,
0x910043FF,
0xA9407BFD,
0x910043FF,
0xD65F03C0,
0x00000000,
0x94000000,
0x0003001C,
0xD2800009,
0x00090205,
0xF2A00009,
0x00090205,
0xF2C00009,
0x00090205,
0xF2E00009,
0x00090205,
0xB9000120,
0xAA1F03E0,
0xA97F52B3,
0x910002BF,
0xA9405BF5,
0x910043FF,
0xA94063F7,
0x910043FF,
0xA9407BFD,
0x910043FF,
0xD65F03C0,
0x00000000,
0xD3401C00,
0xF90013E0,
0x94000000,
0x0003001C,
0xD2800009,
0x00090205,
0xF2A00009,
0x00090205,
0xF2C00009,
0x00090205,
0xF2E00009,
0x00090205,
0xB9000120,
0xB94023E9,
0x2A0903E1,
0xAA1303E0,
0x94000000,
0x00030004,
0x52800020,
0xA97F52B3,
0x910002BF,
0xA9405BF5,
0x910043FF,
0xA94063F7,
0x910043FF,
0xA9407BFD,
0x910043FF,
0xD65F03C0,
0x00000000,
0xD3401C00,
0x00000000,
0x93401C00,
0x00000000,
0xF90013E0,
0x94000000,
0x0003001C,
0xD2800009,
0x00090205,
0xF2A00009,
0x00090205,
0xF2C00009,
0x00090205,
0xF2E00009,
0x00090205,
0xB9000120,
0xB94023E9,
0x2A0903E1,
0xAA1303E0,
0x94000000,
0x00030005,
0x52800020,
0xA97F52B3,
0x910002BF,
0xA9405BF5,
0x910043FF,
0xA94063F7,
0x910043FF,
0xA9407BFD,
0x910043FF,
0xD65F03C0,
0x00000000,
0xD3403C00,
0x00000000,
0x93403C00,
0x00000000,
0xF90013E0,
0x94000000,
0x0003001C,
0xD2800009,
0x00090205,
0xF2A00009,
0x00090205,
0xF2C00009,
0x00090205,
0xF2E00009,
0x00090205,
0xB9000120,
0xB94023E9,
0x2A0903E1,
0xAA1303E0,
0x94000000,
0x00030005,
0x52800020,
0xA97F52B3,
0x910002BF,
0xA9405BF5,
0x910043FF,
0xA94063F7,
0x910043FF,
0xA9407BFD,
0x910043FF,
0xD65F03C0,
0x00000000,
0xF90013E0,
0x94000000,
0x0003001C,
0xD2800009,
0x00090205,
0xF2A00009,
0x00090205,
0xF2C00009,
0x00090205,
0xF2E00009,
0x00090205,
0xB9000120,
0xB94023E9,
0x2A0903E1,
0xAA1303E0,
0x94000000,
0x00030006,
0x52800020,
0xA97F52B3,
0x910002BF,
0xA9405BF5,
0x910043FF,
0xA94063F7,
0x910043FF,
0xA9407BFD,
0x910043FF,
0xD65F03C0,
0x00000000,
0xF90013E0,
0x94000000,
0x0003001C,
0xD2800009,
0x00090205,
0xF2A00009,
0x00090205,
0xF2C00009,
0x00090205,
0xF2E00009,
0x00090205,
0xB9000120,
0xB94023E9,
0x2A0903E1,
0xAA1303E0,
0x94000000,
0x00030005,
0x52800020,
0xA97F52B3,
0x910002BF,
0xA9405BF5,
0x910043FF,
0xA94063F7,
0x910043FF,
0xA9407BFD,
0x910043FF,
0xD65F03C0,
0x00000000,
0x1E22C000,
0xFD0013E0,
0x94000000,
0x0003001C,
0xD2800009,
0x00090205,
0xF2A00009,
0x00090205,
0xF2C00009,
0x00090205,
0xF2E00009,
0x00090205,
0xB9000120,
0xFD4013E0,
0xAA1303E0,
0x94000000,
0x00030003,
0x52800020,
0xA97F52B3,
0x910002BF,
0xA9405BF5,
0x910043FF,
0xA94063F7,
0x910043FF,
0xA9407BFD,
0x910043FF,
0xD65F03C0,
0x00000000,
0xFD0013E0,
0x94000000,
0x0003001C,
0xD2800009,
0x00090205,
0xF2A00009,
0x00090205,
0xF2C00009,
0x00090205,
0xF2E00009,
0x00090205,
0xB9000120,
0xFD4013E0,
0xAA1303E0,
0x94000000,
0x00030003,
0x52800020,
0xA97F52B3,
0x910002BF,
0xA9405BF5,
0x910043FF,
0xA94063F7,
0x910043FF,
0xA9407BFD,
0x910043FF,
0xD65F03C0,
0x00000000
};

//|.globalnames globnames
static const char *const globnames[] = {
  (const char *)0
};
//|.externnames extnames
static const char *const extnames[] = {
  "lua_rawgeti",
  "push_cdata",
  "lua_remove",
  "lua_pushnumber",
  "lua_pushboolean",
  "push_int",
  "push_uint",
  "lua_callk",
  "check_typed_pointer",
  "lua_settop",
  "check_enum",
  "check_uint32",
  "check_int32",
  "check_uint64",
  "check_int64",
  "check_uintptr",
  "check_double",
  "check_complex_float",
  "check_complex_double",
  "lua_gettop",
  "luaL_error",
  "check_typed_cfunction",
  "debug_double",
  "unpack_varargs_float",
  "unpack_varargs_int",
  "unpack_varargs_stack_skip",
  "SetLastError",
  "FUNCTION",
  "GetLastError",
  "lua_pushinteger",
  (const char *)0
};

//|.define L_ARG, x19
//|.define TOP, x20
//|.define rbp, x21
//|.define EXTRA_REG_1, x22
//|.define EXTRA_REG_2, x23
//|.define EXTRA_REG_3, x24

#define ZERO_TO_FIFTEEN_OF_64(x) (0x000000000000FFFF & (int64_t)x)
#define SIXTEEN_TO_THIRTYONE_OF_64(x) ((0x00000000FFFF0000 & (int64_t)x) >> 16)
#define THIRTYTWO_TO_FORTYSEVEN_OF_64(x) ((0x0000FFFF00000000 & (int64_t)x) >> 32)
#define FORTYEIGHT_TO_SIXTYTHREE_OF_64(x) ((0xFFFF000000000000 & (int64_t)x) >> 48)

//|.macro mov64, reg, imm
//|  movz reg, #(ZERO_TO_FIFTEEN_OF_64(imm))
//|  movk reg, #(SIXTEEN_TO_THIRTYONE_OF_64(imm)), lsl #16
//|  movk reg, #(THIRTYTWO_TO_FORTYSEVEN_OF_64(imm)), lsl #32
//|  movk reg, #(FORTYEIGHT_TO_SIXTYTHREE_OF_64(imm)), lsl #48
//|.endmacro

//|.macro mov32, reg, imm
//|  movz reg, #(ZERO_TO_FIFTEEN_OF_64(imm))
//|  movk reg, #(SIXTEEN_TO_THIRTYONE_OF_64(imm)), lsl #16
//|.endmacro

//| // the 5 and 6 arg forms are only used on posix x64
//|.macro call_ririir, func, arg0, arg1, arg2, arg3, arg4, arg5
//| mov x5, arg5
//| mov x4, #arg4
//| mov x3, #arg3
//| mov x2, arg2
//| mov x1, #arg1
//| mov x0, arg0
//| bl func
//|.endmacro
//|.macro call_rrrrrr, func, arg0, arg1, arg2, arg3, arg4, arg5
//| mov x5, arg5
//| mov x4, arg4
//| mov x3, arg3
//| mov x2, arg2
//| mov x1, arg1
//| mov x0, arg0
//| bl func
//|.endmacro
//|.macro call_ririr, func, arg0, arg1, arg2, arg3, arg4
//| mov x4, arg4
//| mov x3, #arg3
//| mov x2, arg2
//| mov x1, #arg1
//| mov x0, arg0
//| bl func
//|.endmacro
//|.macro call_rrrrr, func, arg0, arg1, arg2, arg3, arg4
//| mov x4, arg4
//| mov x3, arg3
//| mov x2, arg2
//| mov x1, arg1
//| mov x0, arg0
//| bl func
//|.endmacro
//|
//|.macro call_riwp, func, arg0, arg1, arg2, arg3
//| mov64 x3, arg3
//| mov w2, arg2
//| mov x1, #arg1
//| mov x0, arg0
//| bl func
//|.endmacro
//|.macro call_riip, func, arg0, arg1, arg2, arg3
//| mov64 x3, (arg3)
//| mov x2, #(arg2)
//| mov x1, #(arg1)
//| mov x0, arg0
//| bl func
//|.endmacro
//|.macro call_rrrp, func, arg0, arg1, arg2, arg3
//| mov64 x3, arg3
//| mov x2, arg2
//| mov x1, arg1
//| mov x0, arg0
//| bl func
//|.endmacro
//|.macro call_rrrr, func, arg0, arg1, arg2, arg3
//| mov x3, arg3
//| mov x2, arg2
//| mov x1, arg1
//| mov x0, arg0
//| bl func
//|.endmacro
//|
//|.macro call_rwp, func, arg0, arg1, arg2
//| mov64 x2, arg2
//| mov w1, arg1
//| mov x0, arg0
//| bl func
//|.endmacro
//|.macro call_rip, func, arg0, arg1, arg2
//| mov64 x2, arg2
//| mov x1, #arg1
//| mov x0, arg0
//| bl func
//|.endmacro
//|.macro call_rrp, func, arg0, arg1, arg2
//| mov64 x2, arg2
//| mov x1, arg1
//| mov x0, arg0
//| bl func
//|.endmacro
//|.macro call_rww, func, arg0, arg1, arg2
//| mov w2, arg2
//| mov w1, arg1
//| mov x0, arg0
//| bl func
//|.endmacro
//|.macro call_rii, func, arg0, arg1, arg2
//| mov x2, #(arg2)
//| mov x1, #(arg1)
//| mov x0, arg0
//| bl func
//|.endmacro
//|.macro call_rrr, func, arg0, arg1, arg2
//| mov x2, arg2
//| mov x1, arg1
//| mov x0, arg0
//| bl func
//|.endmacro
//|
//|.macro call_rp, func, arg0, arg1
//| mov64 x1, arg1
//| mov x0, arg0
//| bl func
//|.endmacro
//|.macro call_ri, func, arg0, arg1
//| mov x1, #(arg1)
//| mov x0, arg0
//| bl func
//|.endmacro
//|.macro call_rw, func, arg0, arg1
//| mov w1, arg1
//| mov x0, arg0
//| bl func
//|.endmacro
//|.macro call_rr, func, arg0, arg1
//| mov x1, arg1
//| mov x0, arg0
//| bl func
//|.endmacro
//|
//|.macro call_w, func, arg0
//| mov w0, arg0
//| bl func
//|.endmacro
//|.macro call_r, func, arg0
//| mov x0, arg0
//| bl func
//|.endmacro
//|

//|.macro call_debug
//| sub sp, sp, #(16*8)
//| str x0,  [sp]
//| str x1,  [sp,#8]
//| str x2,  [sp,#16]
//| str x3,  [sp,#24]
//| str x4,  [sp,#32]
//| str x5,  [sp,#40]
//| str x6,  [sp,#48]
//| str x7,  [sp,#56]
//| str x8,  [sp,#64]
//| str x9,  [sp,#72]
//| str x10, [sp,#80]
//| str x11, [sp,#88]
//| str x12, [sp,#96]
//| str x13, [sp,#104]
//| str x14, [sp,#112]
//| str x15, [sp,#120]
//| bl extern debug_statement 
//| ldr x0,  [sp]
//| ldr x1,  [sp,#8]
//| ldr x2,  [sp,#16]
//| ldr x3,  [sp,#24]
//| ldr x4,  [sp,#32]
//| ldr x5,  [sp,#40]
//| ldr x6,  [sp,#48]
//| ldr x7,  [sp,#56]
//| ldr x8,  [sp,#64]
//| ldr x9,  [sp,#72]
//| ldr x10, [sp,#80]
//| ldr x11, [sp,#88]
//| ldr x12, [sp,#96]
//| ldr x13, [sp,#104]
//| ldr x14, [sp,#112]
//| ldr x15, [sp,#120]
//| add sp, sp, #(16*8)
//|.endmacro

//|.macro call_debug_float, one
//| sub sp, sp, #(16*8)
//| str d0,  [sp]
//| str d1,  [sp,#16]
//| str d2,  [sp,#32]
//| str d3,  [sp,#48]
//| str d4,  [sp,#64]
//| str d5,  [sp,#80]
//| str d6,  [sp,#96]
//| str d7,  [sp,#112]
//| fmov s0, one
//| bl extern debug_float
//| ldr d0,  [sp]
//| ldr d1,  [sp,#16]
//| ldr d2,  [sp,#32]
//| ldr d3,  [sp,#48]
//| ldr d4,  [sp,#64]
//| ldr d5,  [sp,#80]
//| ldr d6,  [sp,#96]
//| ldr d7,  [sp,#112]
//| add sp, sp, #(16*8)
//|.endmacro

//|.macro call_debug_double, one
//| sub sp, sp, #(16*8)
//| str d0,  [sp]
//| str d1,  [sp,#16]
//| str d2,  [sp,#32]
//| str d3,  [sp,#48]
//| str d4,  [sp,#64]
//| str d5,  [sp,#80]
//| str d6,  [sp,#96]
//| str d7,  [sp,#112]
//| fmov d0, one
//| bl extern debug_double
//| ldr d0,  [sp]
//| ldr d1,  [sp,#16]
//| ldr d2,  [sp,#32]
//| ldr d3,  [sp,#48]
//| ldr d4,  [sp,#64]
//| ldr d5,  [sp,#80]
//| ldr d6,  [sp,#96]
//| ldr d7,  [sp,#112]
//| add sp, sp, #(16*8)
//|.endmacro

//|.macro call_debug_int, one
//| sub sp, sp, #(16*8)
//| str x0,  [sp]
//| str x1,  [sp,#8]
//| str x2,  [sp,#16]
//| str x3,  [sp,#24]
//| str x4,  [sp,#32]
//| str x5,  [sp,#40]
//| str x6,  [sp,#48]
//| str x7,  [sp,#56]
//| str x8,  [sp,#64]
//| str x9,  [sp,#72]
//| str x10, [sp,#80]
//| str x11, [sp,#88]
//| str x12, [sp,#96]
//| str x13, [sp,#104]
//| str x14, [sp,#112]
//| str x15, [sp,#120]
//| mov x0, one
//| bl extern debug_int
//| ldr x0,  [sp]
//| ldr x1,  [sp,#8]
//| ldr x2,  [sp,#16]
//| ldr x3,  [sp,#24]
//| ldr x4,  [sp,#32]
//| ldr x5,  [sp,#40]
//| ldr x6,  [sp,#48]
//| ldr x7,  [sp,#56]
//| ldr x8,  [sp,#64]
//| ldr x9,  [sp,#72]
//| ldr x10, [sp,#80]
//| ldr x11, [sp,#88]
//| ldr x12, [sp,#96]
//| ldr x13, [sp,#104]
//| ldr x14, [sp,#112]
//| ldr x15, [sp,#120]
//| add sp, sp, #(16*8)
//|.endmacro

//|.macro call_debug_1, one
//| sub sp, sp, #(16*8)
//| str x0,  [sp]
//| str x1,  [sp,#8]
//| str x2,  [sp,#16]
//| str x3,  [sp,#24]
//| str x4,  [sp,#32]
//| str x5,  [sp,#40]
//| str x6,  [sp,#48]
//| str x7,  [sp,#56]
//| str x8,  [sp,#64]
//| str x9,  [sp,#72]
//| str x10, [sp,#80]
//| str x11, [sp,#88]
//| str x12, [sp,#96]
//| str x13, [sp,#104]
//| str x14, [sp,#112]
//| str x15, [sp,#120]
//| mov x0, one
//| bl extern debug_statement_with_arg
//| ldr x0,  [sp]
//| ldr x1,  [sp,#8]
//| ldr x2,  [sp,#16]
//| ldr x3,  [sp,#24]
//| ldr x4,  [sp,#32]
//| ldr x5,  [sp,#40]
//| ldr x6,  [sp,#48]
//| ldr x7,  [sp,#56]
//| ldr x8,  [sp,#64]
//| ldr x9,  [sp,#72]
//| ldr x10, [sp,#80]
//| ldr x11, [sp,#88]
//| ldr x12, [sp,#96]
//| ldr x13, [sp,#104]
//| ldr x14, [sp,#112]
//| ldr x15, [sp,#120]
//| add sp, sp, #(16*8)
//|.endmacro

//|.macro call_debug_sp
//| mov x15, sp
//| call_debug_1 x15
//|.endmacro

//|.macro epilog
//| //ldr L_ARG, [rbp, #(-16)]
//| //ldr TOP, [rbp, #(-8)]
//| ldp L_ARG, TOP, [rbp, #(-16)]
//| mov sp, rbp
//| ldp rbp, EXTRA_REG_1, [sp]
//| add sp, sp, #16
//| ldp EXTRA_REG_2, EXTRA_REG_3, [sp]
//| add sp, sp, #16
//| ldp x29, x30, [sp]
//| add sp, sp, #16
//| ret
//|.endmacro

//|.macro get_errno // note trashes registers
//| bl extern GetLastError
//| mov64 x9, perr
//| str w0, [x9]
//|.endmacro

#define MESSAGE_1 "Too few arguments"
#define MESSAGE_2 "Too many arguments"

//|.macro too_few_arguments
//| mov64 x9, MESSAGE_1
//| call_rr extern luaL_error, L_ARG, x9
//|.endmacro

//|.macro too_many_arguments
//| mov64 x9, MESSAGE_2
//| call_rr extern luaL_error, L_ARG, x9
//|.endmacro

//|.macro lua_return_arg
//| mov x0, #1
//| epilog
//|.endmacro

//|.macro lua_return_void
//| get_errno
//| mov x0, xzr
//| epilog
//|.endmacro

//|.macro lua_return_double
//| str d0, [sp, #32]
//| get_errno
//| ldr d0, [sp, #32]
//| mov x0, L_ARG
//| bl extern lua_pushnumber
//| lua_return_arg
//|.endmacro

//|.macro lua_return_bool
//| ubfm x0, x0, #0, #7
//| str x0, [sp,#32]
//| get_errno
//| ldr w9, [sp,#32]
//| call_rw extern lua_pushboolean, L_ARG, w9
//| lua_return_arg
//|.endmacro

//|.macro lua_return_int
//| //mov [sp,#32], eax
//| str x0, [sp,#32]
//| get_errno
//| ldr w9, [sp,#32]
//| call_rw extern push_int, L_ARG, w9
//| lua_return_arg
//|.endmacro

//|.macro lua_return_uint
//| str x0, [sp,#32]
//| get_errno
//| ldr w9, [sp,#32]
//| call_rw extern push_uint, L_ARG, w9
//| lua_return_arg
//|.endmacro

//|.macro lua_return_long
//| str x0, [sp,#32]
//| get_errno
//| ldr x0, [sp,#32]
//| call_rr extern lua_pushinteger, L_ARG, x0
//| lua_return_arg
//|.endmacro

//|.macro lua_return_ulong
//| str x0, [sp,#32]
//| get_errno
//| ldr x0, [sp,#32]
//| call_rr extern lua_pushinteger, L_ARG, x0
//| lua_return_arg
//|.endmacro

//|.macro save_registers
//| // use rbp relative so we store values in the outer stack frame
//| // Floating point registers
//| str d0, [rbp, #-32]
//| str d1, [rbp, #-48]
//| str d2, [rbp, #-64]
//| str d3, [rbp, #-80]
//| str d4, [rbp, #-88]
//| str d5, [rbp, #-96]
//| str d6, [rbp, #-112]
//| str d7, [rbp, #-128]

//| // Integral registers
//| str x0, [rbp, #-136]
//| str x1, [rbp, #-144]
//| str x2, [rbp, #-152]
//| str x3, [rbp, #-160]
//| str x4, [rbp, #-168]
//| str x5, [rbp, #-176]
//| str x6, [rbp, #-184]
//| str x7, [rbp, #-192]
//|.endmacro

#define JUMP_SIZE 20
#define MIN_BRANCH ((INT32_MIN) >> 6)
#define MAX_BRANCH ((INT32_MAX) >> 6)
#define BRANCH_OFF -4

static void compile_extern_jump(struct jit* jit, lua_State* L, cfunction func, uint8_t* code)
{
    /* The jump code is the function pointer followed by a stub to call the
     * function pointer. The stub exists so we can jump to functions with an
     * offset farther than +/-128MB.
     *
     * Note we have to manually set this up since there are commands buffered
     * in the jit state.
     */
    *((cfunction*) (&code[0])) = func;
    *((uint32_t*) (&code[8])) = 0x10FFFFC9U; // ADR X9, #-8
    *((uint32_t*) (&code[12])) = 0xF940012aU; // LDR X10, [X9]
    *((uint32_t*) (&code[16])) = 0xD61F0140U; // BR X10
    //printf("%s:%d addr = [%p] sizeof(cfunction) = [%zu] function=[%p]\n",
            //__FILE__, __LINE__, &(code[8]), sizeof(cfunction), (*((cfunction*)(&code[0]))));
}

void compile_globals(struct jit* jit, lua_State* L)
{
    struct jit* Dst = jit;
    int* perr = &jit->last_errno;
    dasm_setup(Dst, build_actionlist);

    /* Note: since the return code uses EBP to reset the stack pointer, we
     * don't have to track the amount of stack space used. It also means we
     * can handle stdcall and cdecl with the same code.
     */

    /* Note the various call_* functions want 32 bytes of 16 byte aligned
     * stack
     */

    compile(Dst, L, NULL, LUA_NOREF);
}

int arm64_return_size(lua_State* L, int usr, const struct ctype* ct)
{
    int ret = 0;
    const struct ctype* mt;

    if (ct->calling_convention != C_CALL) {
        size_t i;
        size_t argn = lua_rawlen(L, usr);
        for (i = 1; i <= argn; i++) {
            lua_rawgeti(L, usr, (int) i);
            mt = (const struct ctype*) lua_touserdata(L, -1);

            if (mt->pointers || mt->is_reference) {
                ret += sizeof(void*);
            } else {
                switch (mt->type) {
                case DOUBLE_TYPE:
                case COMPLEX_FLOAT_TYPE:
                case INT64_TYPE:
                    ret += 8;
                    break;
                case COMPLEX_DOUBLE_TYPE:
                    ret += 16;
                    break;
                case INTPTR_TYPE:
                    ret += sizeof(intptr_t);
                    break;
                case FUNCTION_PTR_TYPE:
                    ret += sizeof(cfunction);
                    break;
                case BOOL_TYPE:
                case FLOAT_TYPE:
                case INT8_TYPE:
                case INT16_TYPE:
                case INT32_TYPE:
                case ENUM_TYPE:
                    ret += 4;
                    break;
                default:
                    return luaL_error(L, "NYI - argument type");
                }
            }

            lua_pop(L, 1);
        }
    }

    return ret;
}

#define MAX_INT_REGISTERS(ct) 8 /* x0-x7 */
#define MAX_FLOAT_REGISTERS(ct) 8 /* q0-q7 */

struct reg_alloc {
    int floats;
    int ints;
    int off;
};

#define REGISTER_STACK_SPACE(ct) ((8*8) + (128*8)) /* 8, 64 bit registers x0-x7 and 8, 128 bit registers v0-v7 */

/* Fastcall:
 * Uses ecx, edx as first two int registers
 * Everything else on stack (include 64bit ints)
 * No overflow stack space
 * Pops the stack before returning
 * Returns int in eax, float in ST0
 * We use the same register allocation logic as posix x64 with 2 int regs and 0 float regs
 */

static void get_int(Dst_DECL, const struct ctype* ct, struct reg_alloc* reg, int is_int64)
{
    /* grab the register from the shadow space */
    if (reg->ints < MAX_INT_REGISTERS(ct)) {
		int x = -(136 + 8*reg->ints);
        //| ldr x9, [rbp , #(x)]
        dasm_put(Dst, 0, (x));
        reg->ints++;
    }
    else if (is_int64) {
        //| ldr x9, [rbp , #(reg->off)] // x9 is a scratch register
        dasm_put(Dst, 3, (reg->off));
        reg->off += 8;
	}
    else {
        //| ldr w9, [rbp , #(reg->off)]
        dasm_put(Dst, 6, (reg->off));
        reg->off += 8;
    }
}

static void add_int(Dst_DECL, const struct ctype* ct, struct reg_alloc* reg, int is_int64)
{
    if (reg->ints < MAX_INT_REGISTERS(ct)) {
        //| str x0, [sp , #(32 + 8*reg->ints)]
        dasm_put(Dst, 9, (32 + 8*reg->ints));
        reg->ints++;
    }
    else {
        if (reg->off % 8 != 0) {
            reg->off += 8 - (reg->off % 8);
        }
		if (is_int64 == 1) {
			//| str x0, [sp , #(reg->off)]
			dasm_put(Dst, 12, (reg->off));
			reg->off += 8;
		} else {
			//| str w0, [sp , #(reg->off)]
			dasm_put(Dst, 15, (reg->off));
			reg->off += 8;
		}
    }
}

static void get_float(Dst_DECL, const struct ctype* ct, struct reg_alloc* reg, int is_double)
{
    int off;

    if (reg->floats < MAX_FLOAT_REGISTERS(ct)) {
        off = -32 - 16*reg->floats;
        reg->floats++;
    }
    else {
        off = reg->off;
        reg->off += 8;
    }

    if (is_double) {
        //| ldr d0, [rbp, #off]
        dasm_put(Dst, 18, off);
    } else {
		//| ldr s16, [rbp, #off] // s16 is a scratch register
		//| fcvt d0, s16
		dasm_put(Dst, 21, off);
    }
}

static void get_complex_float(Dst_DECL, const struct ctype* ct, struct reg_alloc* reg, int is_double)
{
    if (reg->floats < (MAX_FLOAT_REGISTERS(ct)-1)) {
		int off = 0;
		if (is_double) {
			off = -32 - 16*reg->floats;
			//| ldr d0, [rbp, #off]
			dasm_put(Dst, 25, off);
			reg->floats++;
			off = -32 - 16*reg->floats;
			//| ldr d1, [rbp, #off]
			dasm_put(Dst, 28, off);
			reg->floats++;
		} else {
			off = -32 - 16*reg->floats;
			//| ldr s0, [rbp, #off] // s16 is a scratch register
			dasm_put(Dst, 31, off);
			reg->floats++;
			off = -32 - 16*reg->floats;
			//| ldr s1, [rbp, #off] // s16 is a scratch register
			dasm_put(Dst, 34, off);
			reg->floats++;
		}
    }
    else {
		if (reg->floats == (MAX_FLOAT_REGISTERS(ct)-1)) {
			reg->floats = MAX_FLOAT_REGISTERS(ct);
		}
		if (is_double) {
			//| ldr d0, [rbp, #(reg->off)]
			dasm_put(Dst, 37, (reg->off));
			reg->off += 8;
			//| ldr d1, [rbp, #(reg->off)]
			dasm_put(Dst, 40, (reg->off));
			reg->off += 8;
		} else {
			//| ldr s0, [rbp, #(reg->off)] // s16 is a scratch register
			dasm_put(Dst, 43, (reg->off));
			reg->off += 8;
			//| ldr s1, [rbp, #(reg->off)] // s16 is a scratch register
			dasm_put(Dst, 46, (reg->off));
			reg->off += 8;
		}
    }

}

static void add_float(Dst_DECL, const struct ctype* ct, struct reg_alloc* reg, int is_double)
{
    if (reg->floats < MAX_FLOAT_REGISTERS(ct)) {
        if (is_double) {
            //| str d0, [sp , #(32 + 8*(MAX_INT_REGISTERS(ct) + reg->floats))]
            dasm_put(Dst, 49, (32 + 8*(MAX_INT_REGISTERS(ct) + reg->floats)));
        } else {
            //| fcvt s0, d0 // This is necessary because in lua float is also
            dasm_put(Dst, 52);
                          // handled as doube
            //| str s0, [sp, #(32 + 8*(MAX_INT_REGISTERS(ct) + reg->floats))]
            dasm_put(Dst, 54, (32 + 8*(MAX_INT_REGISTERS(ct) + reg->floats)));
        }
        reg->floats++;
    }
    else if (is_double) {
        //| str d0, [sp, #(reg->off)]
        dasm_put(Dst, 57, (reg->off));
        reg->off += 8;
    } else {
        //| fcvt s0, d0
        //| str s0, [sp, #(reg->off)]
        dasm_put(Dst, 60, (reg->off));
        reg->off += 8;
    }
}

static void add_complex_float(Dst_DECL, const struct ctype* ct, struct reg_alloc* reg, int is_double)
{
    //printf("%s:%d floats = [%d]\n", __FILE__, __LINE__, reg->floats);
    if (reg->floats < (MAX_FLOAT_REGISTERS(ct)-1)) {
        if (is_double) {
            //| str d0, [sp , #(32 + 8*(MAX_INT_REGISTERS(ct) + reg->floats))]
            dasm_put(Dst, 64, (32 + 8*(MAX_INT_REGISTERS(ct) + reg->floats)));
            reg->floats++;
            //| str d1, [sp , #(32 + 8*(MAX_INT_REGISTERS(ct) + reg->floats))]
            dasm_put(Dst, 67, (32 + 8*(MAX_INT_REGISTERS(ct) + reg->floats)));
            reg->floats++;
        } else {
            //| str s0, [sp, #(32 + 8*(MAX_INT_REGISTERS(ct) + reg->floats))]
            dasm_put(Dst, 70, (32 + 8*(MAX_INT_REGISTERS(ct) + reg->floats)));
            reg->floats++;
            //| str s1, [sp, #(32 + 8*(MAX_INT_REGISTERS(ct) + reg->floats))]
            dasm_put(Dst, 73, (32 + 8*(MAX_INT_REGISTERS(ct) + reg->floats)));
            reg->floats++;
        }
        if (reg->floats > (MAX_FLOAT_REGISTERS(ct)-1)) {
            reg->floats = MAX_FLOAT_REGISTERS(ct);
        }
    }
    else {
        //printf("%s:%d floats = [%d]\n", __FILE__, __LINE__, reg->floats);
        if (reg->floats == (MAX_FLOAT_REGISTERS(ct)-1)) {
            reg->floats = MAX_FLOAT_REGISTERS(ct);
        }
        //printf("%s:%d floats = [%d]\n", __FILE__, __LINE__, reg->floats);
        if (is_double) {
            //| str d0, [sp, #(reg->off)]
            dasm_put(Dst, 76, (reg->off));
            reg->off += 8;
            //| str d1, [sp, #(reg->off)]
            dasm_put(Dst, 79, (reg->off));
            reg->off += 8;
        } else {
            //| str s0, [sp, #(reg->off)]
            dasm_put(Dst, 82, (reg->off));
            reg->off += 8;
            //| str s1, [sp, #(reg->off)]
            dasm_put(Dst, 85, (reg->off));
            reg->off += 8;
        }
    }
}

#define add_pointer(jit, ct, reg) add_int(jit, ct, reg, 1)
#define get_pointer(jit, ct, reg) get_int(jit, ct, reg, 1)

cfunction compile_callback(lua_State* L, int fidx, int ct_usr, const struct ctype* ct)
{
    int i, nargs;
    cfunction* pf;
    struct ctype ct2 = *ct;
    const struct ctype* mt;
    struct reg_alloc reg;
    int num_upvals = 0;
    int top = lua_gettop(L);
    struct jit* Dst = get_jit(L);
    int ref;
    int hidden_arg_off = 0;

    ct_usr = lua_absindex(L, ct_usr);
    fidx = lua_absindex(L, fidx);

    assert(lua_isnil(L, fidx) || lua_isfunction(L, fidx));

    memset(&reg, 0, sizeof(reg));
    reg.off = 48;

    dasm_setup(Dst, build_actionlist);

    // add a table to store ctype and function upvalues
    // callback_set assumes the first value is the lua function
    nargs = (int) lua_rawlen(L, ct_usr);
    lua_newtable(L);
    lua_pushvalue(L, -1);
    ref = luaL_ref(L, LUA_REGISTRYINDEX);

    if (ct->has_var_arg) {
        luaL_error(L, "can't create callbacks with varargs");
    }

    // setup a stack frame to hold args for the call into lua_call

    //| sub sp, sp, #64 // = -64
    //| stp x29, x30, [sp, #48] // 16-byte Folded Spill
    //| stp EXTRA_REG_2, EXTRA_REG_3, [sp, #32] // 16-byte Folded Spill
    //| stp rbp, EXTRA_REG_1, [sp, #16] // 16-byte Folded Spill
	//| stp L_ARG, TOP, [sp]
    //| //                      -64     -56  -48  -40          -32          -24          -16  -8
    //| // stack is -64 (mod 16) (L_ARG, TOP, rbp, EXTRA_REG_1, EXTRA_REG_2, EXTRA_REG_3, x29, x30)
	//| add rbp, sp, #16
    //|
    dasm_put(Dst, 88);

    //| // stack -64 (mod 16) (L_ARG, rbp, rip)
    //| // 16 for return vars, 32 for local calls, rest to save registers
    //| sub sp, sp, #(16 + 32 + REGISTER_STACK_SPACE(ct))
    //| save_registers
    dasm_put(Dst, 95, (16 + 32 + REGISTER_STACK_SPACE(ct)));

    //| mov64 L_ARG, L
    dasm_put(Dst, 114, (ZERO_TO_FIFTEEN_OF_64(L)), (SIXTEEN_TO_THIRTYONE_OF_64(L)), (THIRTYTWO_TO_FORTYSEVEN_OF_64(L)), (FORTYEIGHT_TO_SIXTYTHREE_OF_64(L)));

    /* get the upval table */
	//| mov32 w9, LUA_REGISTRYINDEX
	//| mov32 w10, reg
    //| call_rww extern lua_rawgeti, L_ARG, w9, w10
    dasm_put(Dst, 123, (ZERO_TO_FIFTEEN_OF_64(LUA_REGISTRYINDEX)), (SIXTEEN_TO_THIRTYONE_OF_64(LUA_REGISTRYINDEX)), (ZERO_TO_FIFTEEN_OF_64(reg)), (SIXTEEN_TO_THIRTYONE_OF_64(reg)));

    /* get the lua function */
    lua_pushvalue(L, fidx);
    lua_rawseti(L, -2, ++num_upvals);
    assert(num_upvals == CALLBACK_FUNC_USR_IDX);
    //| call_rii extern lua_rawgeti, L_ARG, -1, num_upvals
    dasm_put(Dst, 137, (num_upvals), (unsigned int)((-1)), (unsigned int)((unsigned long long)((-1))>>32));

    (void) hidden_arg_off;

    for (i = 1; i <= nargs; i++) {
        lua_rawgeti(L, ct_usr, i);
        mt = (const struct ctype*) lua_touserdata(L, -1);

        if (mt->pointers || mt->is_reference) {
            lua_getuservalue(L, -1);
            lua_rawseti(L, -3, ++num_upvals); /* usr value */
            lua_rawseti(L, -2, ++num_upvals); /* mt */
            /* on the lua stack in the callback:
             * upval tbl, lua func, i-1 args
             */
            //| call_rii extern lua_rawgeti, L_ARG, -i-1, num_upvals-1
            //| call_rip extern push_cdata, L_ARG, -1, mt
            dasm_put(Dst, 145, (num_upvals-1), (-i-1), (ZERO_TO_FIFTEEN_OF_64(mt)), (SIXTEEN_TO_THIRTYONE_OF_64(mt)), (THIRTYTWO_TO_FORTYSEVEN_OF_64(mt)), (FORTYEIGHT_TO_SIXTYTHREE_OF_64(mt)), (unsigned int)(-1), (unsigned int)((unsigned long long)(-1)>>32));
            get_pointer(Dst, ct, &reg);
            //| str x9, [x0]
            //| call_ri, extern lua_remove, L_ARG, -2
            dasm_put(Dst, 166, (unsigned int)((-2)), (unsigned int)((unsigned long long)((-2))>>32));
        } else {
            switch (mt->type) {
            case INT64_TYPE:
                lua_getuservalue(L, -1);
                lua_rawseti(L, -3, ++num_upvals); /* mt */
                lua_pop(L, 1);
                //| call_rip extern push_cdata, L_ARG, 0, mt
                dasm_put(Dst, 173, (ZERO_TO_FIFTEEN_OF_64(mt)), (SIXTEEN_TO_THIRTYONE_OF_64(mt)), (THIRTYTWO_TO_FORTYSEVEN_OF_64(mt)), (FORTYEIGHT_TO_SIXTYTHREE_OF_64(mt)));
                get_int(Dst, ct, &reg, 1);
                //| str x9, [x0]
                dasm_put(Dst, 186);
                break;

            case INTPTR_TYPE:
                lua_getuservalue(L, -1);
                lua_rawseti(L, -3, ++num_upvals); /* mt */
                lua_pop(L, 1);
                //| call_rip extern push_cdata, L_ARG, 0, mt
                dasm_put(Dst, 188, (ZERO_TO_FIFTEEN_OF_64(mt)), (SIXTEEN_TO_THIRTYONE_OF_64(mt)), (THIRTYTWO_TO_FORTYSEVEN_OF_64(mt)), (FORTYEIGHT_TO_SIXTYTHREE_OF_64(mt)));
                get_pointer(Dst, ct, &reg);
                //| str x9, [x0]
                dasm_put(Dst, 201);
                break;

            case COMPLEX_FLOAT_TYPE:
                lua_pop(L, 1);
                /* complex floats are two floats packed into a double */
                //| call_rip extern push_cdata, L_ARG, 0, mt
                dasm_put(Dst, 203, (ZERO_TO_FIFTEEN_OF_64(mt)), (SIXTEEN_TO_THIRTYONE_OF_64(mt)), (THIRTYTWO_TO_FORTYSEVEN_OF_64(mt)), (FORTYEIGHT_TO_SIXTYTHREE_OF_64(mt)));
                get_complex_float(Dst, ct, &reg, 0);
                //| str s0, [x0]
                //| str s1, [x0, #4]
                dasm_put(Dst, 216);
                break;

            case COMPLEX_DOUBLE_TYPE:
                lua_pop(L, 1);
                //| call_rip extern push_cdata, L_ARG, 0, mt
                dasm_put(Dst, 219, (ZERO_TO_FIFTEEN_OF_64(mt)), (SIXTEEN_TO_THIRTYONE_OF_64(mt)), (THIRTYTWO_TO_FORTYSEVEN_OF_64(mt)), (FORTYEIGHT_TO_SIXTYTHREE_OF_64(mt)));
                get_complex_float(Dst, ct, &reg, 1);
                //| str d0, [x0]
                //| str d1, [x0, #8]
                dasm_put(Dst, 232);
                break;

            case FLOAT_TYPE:
                lua_pop(L, 1);
                get_float(Dst, ct, &reg, 0);
                //| // for 64bit xmm0 is already set
                //| mov x0, L_ARG
                //| bl extern lua_pushnumber
                dasm_put(Dst, 235);
                break;

            case DOUBLE_TYPE:
                lua_pop(L, 1);
                get_float(Dst, ct, &reg, 1);
                //| // for 64bit xmm0 is already set
                //| mov x0, L_ARG
                //| bl extern lua_pushnumber
                dasm_put(Dst, 239);
                break;

            case BOOL_TYPE:
                lua_pop(L, 1);
                get_int(Dst, ct, &reg, 0);
                //| //movzx ecx, cl
                //| cmp w9, #0
                //| beq >1
                //| mov b9, #1
                //| 1:
                //| ubfm x9, x9, #0, #7
                //| call_rr extern lua_pushboolean, L_ARG, x9
                dasm_put(Dst, 243);
                break;

            case INT8_TYPE:
                lua_pop(L, 1);
                get_int(Dst, ct, &reg, 0);
                if (mt->is_unsigned) {
					//| ubfm x9, x9, #0, #7
					dasm_put(Dst, 254);
                } else {
					//| sbfm x9, x9, #0, #7
					dasm_put(Dst, 256);
                }
                //| call_rr extern push_int, L_ARG, x9
                dasm_put(Dst, 258);
                break;

            case INT16_TYPE:
                lua_pop(L, 1);
                get_int(Dst, ct, &reg, 0);
                if (mt->is_unsigned) {
					//| ubfm x9, x9, #0, #15
					dasm_put(Dst, 263);
                } else {
					//| sbfm x9, x9, #0, #15
					dasm_put(Dst, 265);
                }
                //| call_rr extern push_int, L_ARG, x9
                dasm_put(Dst, 267);
                break;

            case ENUM_TYPE:
            case INT32_TYPE:
                lua_pop(L, 1);
                get_int(Dst, ct, &reg, 0);
                if (mt->is_unsigned) {
                    //| call_rw extern push_uint, L_ARG, w9
                    dasm_put(Dst, 272);
                } else {
                    //| call_rw extern push_int, L_ARG, w9
                    dasm_put(Dst, 277);
                }
                break;

            default:
                luaL_error(L, "NYI: callback arg type");
            }
        }
    }

    lua_rawgeti(L, ct_usr, 0);
    mt = (const struct ctype*) lua_touserdata(L, -1);

    //| call_riip extern lua_callk, L_ARG, nargs, ((mt->pointers || mt->is_reference || mt->type != VOID_TYPE) ? 1 : 0), 0
    dasm_put(Dst, 282, (ZERO_TO_FIFTEEN_OF_64((0))), (SIXTEEN_TO_THIRTYONE_OF_64((0))), (THIRTYTWO_TO_FORTYSEVEN_OF_64((0))), (FORTYEIGHT_TO_SIXTYTHREE_OF_64((0))), (((mt->pointers || mt->is_reference || mt->type != VOID_TYPE) ? 1 : 0)), (nargs));

    // Unpack the return argument if not "void", also clean-up the lua stack
    // to remove the return argument and bind table. Use lua_settop rather
    // than lua_pop as lua_pop is implemented as a macro.
    if (mt->pointers || mt->is_reference) {
        lua_getuservalue(L, -1);
        lua_rawseti(L, -3, ++num_upvals); /* usr value */
        lua_rawseti(L, -2, ++num_upvals); /* mt */
        //| call_rii extern lua_rawgeti, L_ARG, -2, num_upvals-1
        //| call_riip extern check_typed_pointer, L_ARG, -2, -1, mt
		//| str x0, [sp, #32]
        //| call_ri extern lua_settop, L_ARG, -4
        //| ldr x0, [sp, #32]
        dasm_put(Dst, 298, (num_upvals-1), (unsigned int)((-2)), (unsigned int)((unsigned long long)((-2))>>32), (ZERO_TO_FIFTEEN_OF_64((mt))), (SIXTEEN_TO_THIRTYONE_OF_64((mt))), (THIRTYTWO_TO_FORTYSEVEN_OF_64((mt))), (FORTYEIGHT_TO_SIXTYTHREE_OF_64((mt))), (unsigned int)((-1)), (unsigned int)((unsigned long long)((-1))>>32), (unsigned int)((-2)), (unsigned int)((unsigned long long)((-2))>>32), (unsigned int)((-4)), (unsigned int)((unsigned long long)((-4))>>32));

    } else {
        switch (mt->type) {
        case ENUM_TYPE:
            lua_getuservalue(L, -1);
            lua_rawseti(L, -3, ++num_upvals); /* usr value */
            lua_rawseti(L, -2, ++num_upvals); /* mt */
            //| call_rii extern lua_rawgeti, L_ARG, -2, num_upvals-1
            //| call_riip, extern check_enum, L_ARG, -2, -1, mt
			//| str w0, [sp, #32]
            //| call_ri extern lua_settop, L_ARG, -4
			//| ldr w0, [sp, #32]
			dasm_put(Dst, 328, (num_upvals-1), (unsigned int)((-2)), (unsigned int)((unsigned long long)((-2))>>32), (ZERO_TO_FIFTEEN_OF_64((mt))), (SIXTEEN_TO_THIRTYONE_OF_64((mt))), (THIRTYTWO_TO_FORTYSEVEN_OF_64((mt))), (FORTYEIGHT_TO_SIXTYTHREE_OF_64((mt))), (unsigned int)((-1)), (unsigned int)((unsigned long long)((-1))>>32), (unsigned int)((-2)), (unsigned int)((unsigned long long)((-2))>>32), (unsigned int)((-4)), (unsigned int)((unsigned long long)((-4))>>32));
            break;

        case VOID_TYPE:
            lua_pop(L, 1);
            //| call_ri extern lua_settop, L_ARG, -2
            dasm_put(Dst, 358, (unsigned int)((-2)), (unsigned int)((unsigned long long)((-2))>>32));
            break;

        case BOOL_TYPE:
        case INT8_TYPE:
        case INT16_TYPE:
        case INT32_TYPE:
            lua_pop(L, 1);
            if (mt->is_unsigned) {
                //| call_ri extern check_uint32, L_ARG, -1
                dasm_put(Dst, 364, (unsigned int)((-1)), (unsigned int)((unsigned long long)((-1))>>32));
            } else {
                //| call_ri extern check_int32, L_ARG, -1
                dasm_put(Dst, 370, (unsigned int)((-1)), (unsigned int)((unsigned long long)((-1))>>32));
            }
			//| str w0, [sp, #32]
            //| call_ri extern lua_settop, L_ARG, -3
			//| ldr w0, [sp, #32]
			dasm_put(Dst, 376, (unsigned int)((-3)), (unsigned int)((unsigned long long)((-3))>>32));
            break;

        case INT64_TYPE:
            lua_pop(L, 1);

            if (mt->is_unsigned) {
                //| call_ri extern check_uint64, L_ARG, -1
                dasm_put(Dst, 384, (unsigned int)((-1)), (unsigned int)((unsigned long long)((-1))>>32));
            } else {
                //| call_ri extern check_int64, L_ARG, -1
                dasm_put(Dst, 390, (unsigned int)((-1)), (unsigned int)((unsigned long long)((-1))>>32));
            }

			//| str x0, [sp, #32]
			//| call_ri extern lua_settop, L_ARG, -4
			//| ldr x0, [sp, #32]
			dasm_put(Dst, 396, (unsigned int)((-4)), (unsigned int)((unsigned long long)((-4))>>32));
            break;

        case INTPTR_TYPE:
            lua_pop(L, 1);
            //| call_ri extern check_uintptr, L_ARG, -1
			//| str x0, [sp, #32]
            //| call_ri extern lua_settop, L_ARG, -3
			//| ldr x0, [sp, #32]
			dasm_put(Dst, 404, (unsigned int)((-1)), (unsigned int)((unsigned long long)((-1))>>32), (unsigned int)((-3)), (unsigned int)((unsigned long long)((-3))>>32));
            break;

        case FLOAT_TYPE:
            lua_pop(L, 1);
            //| call_ri extern check_double, L_ARG, -1
			//| str d0, [sp, #32]
            //| call_ri extern lua_settop, L_ARG, -3
			//| ldr d1, [sp, #32]
			//| fcvt s0, d1
			dasm_put(Dst, 417, (unsigned int)((-1)), (unsigned int)((unsigned long long)((-1))>>32), (unsigned int)((-3)), (unsigned int)((unsigned long long)((-3))>>32));
            break;

        case DOUBLE_TYPE:
            lua_pop(L, 1);
            //| call_ri extern check_double, L_ARG, -1
			//| str d0, [sp, #32]
            //| call_ri extern lua_settop, L_ARG, -3
            //| ldr d0, [sp, #32]
            dasm_put(Dst, 431, (unsigned int)((-1)), (unsigned int)((unsigned long long)((-1))>>32), (unsigned int)((-3)), (unsigned int)((unsigned long long)((-3))>>32));
            break;

        case COMPLEX_FLOAT_TYPE:
            lua_pop(L, 1);
#if !defined HAVE_COMPLEX
            luaL_error(L, "ffi lib compiled without complex number support");
#endif
            //| call_ri extern check_complex_float, L_ARG, -1
            //|
			//| str s0, [sp,#32]
			//| str s1, [sp,#36]
            //|
            //| call_ri extern lua_settop, L_ARG, -3
            //|
			//| ldr s0, [sp,#32]
			//| ldr s1, [sp,#36]
			//|
			dasm_put(Dst, 444, (unsigned int)((-1)), (unsigned int)((unsigned long long)((-1))>>32), (unsigned int)((-3)), (unsigned int)((unsigned long long)((-3))>>32));
            break;

        case COMPLEX_DOUBLE_TYPE:
            lua_pop(L, 1);
#if !defined HAVE_COMPLEX
            luaL_error(L, "ffi lib compiled without complex number support");
#endif
            //| call_ri extern check_complex_double, L_ARG, -1
            //|
			//| str d0, [sp,#32]
			//| str d1, [sp,#40]
            //|
            //| call_ri extern lua_settop, L_ARG, -3
            //|
			//| ldr d0, [sp,#32]
			//| ldr d1, [sp,#40]
			//|
			dasm_put(Dst, 459, (unsigned int)((-1)), (unsigned int)((unsigned long long)((-1))>>32), (unsigned int)((-3)), (unsigned int)((unsigned long long)((-3))>>32));
            break;

        default:
            luaL_error(L, "NYI: callback return type");
        }
    }

	//| epilog
	//| ret
	dasm_put(Dst, 474);

    lua_pop(L, 1); /* upval table - already in registry */
    assert(lua_gettop(L) == top);

    ct2.is_jitted = 1;
    pf = (cfunction*) push_cdata(L, ct_usr, &ct2);
    *pf = compile(Dst, L, NULL, ref);

    assert(lua_gettop(L) == top + 1);

    return *pf;
}

void compile_function(lua_State* L, cfunction func, int ct_usr, const struct ctype* ct)
{
    size_t i, nargs;
    int num_upvals;
    int orig_top;
    const struct ctype* mbr_ct;
    struct jit* Dst = get_jit(L);
    struct reg_alloc reg;
    void* p;
    int top = lua_gettop(L);
    int* perr = &Dst->last_errno;

    ct_usr = lua_absindex(L, ct_usr);

    memset(&reg, 0, sizeof(reg));
    reg.off = 32 + REGISTER_STACK_SPACE(ct);

    dasm_setup(Dst, build_actionlist);

    orig_top = lua_gettop(L);
    p = push_cdata(L, ct_usr, ct);
    *(cfunction*) p = func;

    nargs = lua_rawlen(L, ct_usr);
	assert(nargs <= ((unsigned int)(0xFFE))); // <= 4094 s.t. 4095 can fit into imm12

    if (ct->calling_convention != C_CALL && ct->has_var_arg) {
        luaL_error(L, "vararg is only allowed with the c calling convention");
    }

    //printf("%s:%d\n", __FILE__, __LINE__);
    //| sub sp, sp, #64 // = -64
    //| stp x29, x30, [sp, #48] // 16-byte Folded Spill
    //| stp EXTRA_REG_2, EXTRA_REG_3, [sp, #32] // 16-byte Folded Spill
    //| stp rbp, EXTRA_REG_1, [sp, #16] // 16-byte Folded Spill
	//| stp L_ARG, TOP, [sp]
    //| //                      -64     -56  -48  -40          -32          -24          -16  -8
    //| // stack is -64 (mod 16) (L_ARG, TOP, rbp, EXTRA_REG_1, EXTRA_REG_2, EXTRA_REG_3, x29, x30)
	//| add rbp, sp, #16
    //|
    //| // Get L from our arguments and allocate some stack for lua_gettop
    //| mov L_ARG, x0 // First argument to the lua function int f(lua_State * L);
    dasm_put(Dst, 485);

    //|
    //| call_r extern lua_gettop, L_ARG
    //| mov TOP, x0
    //| cmp x0, #(nargs)
    dasm_put(Dst, 493, (nargs));
    if (!ct->has_var_arg) {
        //| bge >2
        //| too_few_arguments
        //| 2:
        //| ble >1
        //| too_many_arguments
        dasm_put(Dst, 500, (ZERO_TO_FIFTEEN_OF_64(MESSAGE_1)), (SIXTEEN_TO_THIRTYONE_OF_64(MESSAGE_1)), (THIRTYTWO_TO_FORTYSEVEN_OF_64(MESSAGE_1)), (FORTYEIGHT_TO_SIXTYTHREE_OF_64(MESSAGE_1)), (ZERO_TO_FIFTEEN_OF_64(MESSAGE_2)), (SIXTEEN_TO_THIRTYONE_OF_64(MESSAGE_2)), (THIRTYTWO_TO_FORTYSEVEN_OF_64(MESSAGE_2)), (FORTYEIGHT_TO_SIXTYTHREE_OF_64(MESSAGE_2)));
    } else {
        //| bge >1
        //| too_few_arguments
        dasm_put(Dst, 530, (ZERO_TO_FIFTEEN_OF_64(MESSAGE_1)), (SIXTEEN_TO_THIRTYONE_OF_64(MESSAGE_1)), (THIRTYTWO_TO_FORTYSEVEN_OF_64(MESSAGE_1)), (FORTYEIGHT_TO_SIXTYTHREE_OF_64(MESSAGE_1)));
    }

    //| 1:
    dasm_put(Dst, 545);

    /* no need to zero extend eax returned by lua_gettop to rax as x86-64
     * preguarentees that the upper 32 bits will be zero */
    //| sub sp, sp, TOP, lsl #4 // reserve 16 bytes per argument - this maintains the alignment mod 16
    //| sub sp, sp, #(32 + REGISTER_STACK_SPACE(ct)) // reserve an extra 32 to call local functions
    dasm_put(Dst, 547, (32 + REGISTER_STACK_SPACE(ct)));

    for (i = 1; i <= nargs; i++) {
        lua_rawgeti(L, ct_usr, (int) i);
        mbr_ct = (const struct ctype*) lua_touserdata(L, -1);

        if (mbr_ct->pointers || mbr_ct->is_reference) {
            lua_getuservalue(L, -1);
            num_upvals = lua_gettop(L) - orig_top;
			//printf("%s:%d lua_upvalueindex(num_upvals) = [%d] \n", __FILE__, __LINE__,  lua_upvalueindex(num_upvals));
            //| mov32 w9, lua_upvalueindex(num_upvals)
            //| sxtw x9, w9
            //| call_riwp extern check_typed_pointer, L_ARG, i, w9, mbr_ct
            dasm_put(Dst, 551, (ZERO_TO_FIFTEEN_OF_64(lua_upvalueindex(num_upvals))), (SIXTEEN_TO_THIRTYONE_OF_64(lua_upvalueindex(num_upvals))), (ZERO_TO_FIFTEEN_OF_64(mbr_ct)), (SIXTEEN_TO_THIRTYONE_OF_64(mbr_ct)), (THIRTYTWO_TO_FORTYSEVEN_OF_64(mbr_ct)), (FORTYEIGHT_TO_SIXTYTHREE_OF_64(mbr_ct)), i);
            add_pointer(Dst, ct, &reg);
        } else {
            switch (mbr_ct->type) {
            case FUNCTION_PTR_TYPE:
                lua_getuservalue(L, -1);
                num_upvals = lua_gettop(L) - orig_top;
                //| mov32 w9, lua_upvalueindex(num_upvals)
                //| sxtw x9, w9
                //| call_riwp extern check_typed_cfunction, L_ARG, i, w9, mbr_ct
                dasm_put(Dst, 571, (ZERO_TO_FIFTEEN_OF_64(lua_upvalueindex(num_upvals))), (SIXTEEN_TO_THIRTYONE_OF_64(lua_upvalueindex(num_upvals))), (ZERO_TO_FIFTEEN_OF_64(mbr_ct)), (SIXTEEN_TO_THIRTYONE_OF_64(mbr_ct)), (THIRTYTWO_TO_FORTYSEVEN_OF_64(mbr_ct)), (FORTYEIGHT_TO_SIXTYTHREE_OF_64(mbr_ct)), i);
                add_pointer(Dst, ct, &reg);
                break;

            case ENUM_TYPE:
                lua_getuservalue(L, -1);
                num_upvals = lua_gettop(L) - orig_top;
                //| mov32 w9, lua_upvalueindex(num_upvals)
                //| sxtw x9, w9
                //| call_riwp, extern check_enum, L_ARG, i, w9, mbr_ct
                dasm_put(Dst, 591, (ZERO_TO_FIFTEEN_OF_64(lua_upvalueindex(num_upvals))), (SIXTEEN_TO_THIRTYONE_OF_64(lua_upvalueindex(num_upvals))), (ZERO_TO_FIFTEEN_OF_64(mbr_ct)), (SIXTEEN_TO_THIRTYONE_OF_64(mbr_ct)), (THIRTYTWO_TO_FORTYSEVEN_OF_64(mbr_ct)), (FORTYEIGHT_TO_SIXTYTHREE_OF_64(mbr_ct)), i);
                add_int(Dst, ct, &reg, 0);
                break;

            case INT8_TYPE:
                //| call_ri extern check_int32, L_ARG, i
                dasm_put(Dst, 611, (i));
                if (mbr_ct->is_unsigned) {
                    //| ubfm x0, x0, #0, #7
                    dasm_put(Dst, 617);
                } else {
                    //| sbfm x0, x0, #0, #7
                    dasm_put(Dst, 619);
                    //| sxtb x0, x0
                }
                add_int(Dst, ct, &reg, 0);
                lua_pop(L, 1);
                break;

            case INT16_TYPE:
                //| call_ri extern check_int32, L_ARG, i
                dasm_put(Dst, 621, (i));
                if (mbr_ct->is_unsigned) {
                    //| ubfm x0, x0, #0, #15
                    dasm_put(Dst, 627);
                } else {
                    //| sbfm x0, x0, #0, #15
                    dasm_put(Dst, 629);
                }
                add_int(Dst, ct, &reg, 0);
                lua_pop(L, 1);
                break;

            case BOOL_TYPE:
                //| call_ri extern check_int32, L_ARG, i
                //| cmp x0, #0
                //| beq >1
                //| mov b0, #1
                //| 1:
                //| ubfm x0, x0, #0, #7
                dasm_put(Dst, 631, (i));
                add_int(Dst, ct, &reg, 0);
                lua_pop(L, 1);
                break;

            case INT32_TYPE:
                if (mbr_ct->is_unsigned) {
                    //| call_ri extern check_uint32, L_ARG, i
                    dasm_put(Dst, 643, (i));
                } else {
                    //| call_ri extern check_int32, L_ARG, i
                    dasm_put(Dst, 649, (i));
                }
                add_int(Dst, ct, &reg, 0);
                lua_pop(L, 1);
                break;

            case INTPTR_TYPE:
                //| call_ri extern check_uintptr, L_ARG, i
                dasm_put(Dst, 655, (i));
                add_pointer(Dst, ct, &reg);
                lua_pop(L, 1);
                break;

            case INT64_TYPE:
                if (mbr_ct->is_unsigned) {
                    //| call_ri extern check_uint64, L_ARG, i
                    dasm_put(Dst, 661, (i));
                } else {
                    //| call_ri extern check_int64, L_ARG, i
                    dasm_put(Dst, 667, (i));
                }
                add_int(Dst, ct, &reg, 1);
                lua_pop(L, 1);
                break;

            case DOUBLE_TYPE:
                //| call_ri extern check_double, L_ARG, i
                //| call_debug_double d0
                dasm_put(Dst, 673, (i));
                add_float(Dst, ct, &reg, 1);
                lua_pop(L, 1);
                break;

            case COMPLEX_DOUBLE_TYPE:
                /* on 64 bit, returned complex doubles use xmm0, xmm1, on 32 bit
                 * there is a hidden first parameter that points to 16 bytes where
                 * the returned arg is stored (this is popped by the called
                 * function) */
                //| call_ri extern check_complex_double, L_ARG, i
                dasm_put(Dst, 700, (i));
                add_complex_float(Dst, ct, &reg, 1);
                lua_pop(L, 1);
                break;

            case FLOAT_TYPE:
                //| call_ri extern check_double, L_ARG, i
                dasm_put(Dst, 706, (i));
                add_float(Dst, ct, &reg, 0);
                lua_pop(L, 1);
                break;

            case COMPLEX_FLOAT_TYPE:
                /* complex floats are returned as s0 and s1 */
                //| call_ri extern check_complex_float, L_ARG, i
                dasm_put(Dst, 712, (i));
                add_complex_float(Dst, ct, &reg, 0);
                lua_pop(L, 1);
                break;

            default:
                luaL_error(L, "NYI: call arg type");
            }
        }
    }

    if (ct->has_var_arg) {
        if (reg.floats < MAX_FLOAT_REGISTERS(ct)) {
            //| mov x9, sp
            //| add x9, x9, #(32 + 8*(MAX_INT_REGISTERS(ct) + reg.floats))
            //| call_ririr extern unpack_varargs_float, L_ARG, (nargs+1), TOP, (MAX_FLOAT_REGISTERS(ct) - reg.floats), x9
            dasm_put(Dst, 718, (32 + 8*(MAX_INT_REGISTERS(ct) + reg.floats)), (MAX_FLOAT_REGISTERS(ct) - reg.floats), (nargs+1));
        }

        if (reg.ints < MAX_INT_REGISTERS(ct)) {
            //| mov x9, sp
            //| add x9, x9, #(32 + 8*(reg.ints))
            //| call_ririr extern unpack_varargs_int, L_ARG, (nargs+1), TOP, (MAX_INT_REGISTERS(ct) - reg.ints), x9
            dasm_put(Dst, 731, (32 + 8*(reg.ints)), (MAX_INT_REGISTERS(ct) - reg.ints), (nargs+1));
        }

        //| mov x9, sp
        //| add x9, x9, #(reg.off)
        //| call_ririir extern unpack_varargs_stack_skip, L_ARG, (nargs+1), TOP, (MAX_INT_REGISTERS(ct) - reg.ints), (MAX_FLOAT_REGISTERS(ct) - reg.floats), x9
        dasm_put(Dst, 744, (reg.off), (MAX_FLOAT_REGISTERS(ct) - reg.floats), (MAX_INT_REGISTERS(ct) - reg.ints), (nargs+1));

        reg.floats = MAX_FLOAT_REGISTERS(ct);
        reg.ints = MAX_INT_REGISTERS(ct);
    }

    //| mov64 x9, perr
	//| mov x10, xzr
    //| ldr w10, [x9]
    //| call_w extern SetLastError, w10
    dasm_put(Dst, 759, (ZERO_TO_FIFTEEN_OF_64(perr)), (SIXTEEN_TO_THIRTYONE_OF_64(perr)), (THIRTYTWO_TO_FORTYSEVEN_OF_64(perr)), (FORTYEIGHT_TO_SIXTYTHREE_OF_64(perr)));

    /* remove the stack space to call local functions */
    //| add sp, sp, #(32)
    dasm_put(Dst, 773);

    switch (reg.floats) {
    case 8:
        //| ldr d7, [sp, #(8*(MAX_INT_REGISTERS(ct)+7))]
        dasm_put(Dst, 775, (8*(MAX_INT_REGISTERS(ct)+7)));
    case 7:
        //| ldr d6, [sp, #(8*(MAX_INT_REGISTERS(ct)+6))]
        dasm_put(Dst, 778, (8*(MAX_INT_REGISTERS(ct)+6)));
    case 6:
        //| ldr d5, [sp, #(8*(MAX_INT_REGISTERS(ct)+5))]
        dasm_put(Dst, 781, (8*(MAX_INT_REGISTERS(ct)+5)));
    case 5:
        //| ldr d4, [sp, #(8*(MAX_INT_REGISTERS(ct)+4))]
        dasm_put(Dst, 784, (8*(MAX_INT_REGISTERS(ct)+4)));
    case 4:
        //| ldr d3, [sp, #(8*(MAX_INT_REGISTERS(ct)+3))]
        dasm_put(Dst, 787, (8*(MAX_INT_REGISTERS(ct)+3)));
    case 3:
        //| ldr d2, [sp, #(8*(MAX_INT_REGISTERS(ct)+2))]
        dasm_put(Dst, 790, (8*(MAX_INT_REGISTERS(ct)+2)));
    case 2:
        //| ldr d1, [sp, #(8*(MAX_INT_REGISTERS(ct)+1))]
        dasm_put(Dst, 793, (8*(MAX_INT_REGISTERS(ct)+1)));
    case 1:
        //| ldr d0, [sp, #(8*(MAX_INT_REGISTERS(ct)))]
        dasm_put(Dst, 796, (8*(MAX_INT_REGISTERS(ct))));
    case 0:
        break;
    }

    switch (reg.ints) {
    case 8:
        //| ldr x7, [sp, #(8*7)]
        dasm_put(Dst, 799);
    case 7:
        //| ldr x6, [sp, #(8*6)]
        dasm_put(Dst, 801);
    case 6:
        //| ldr x5, [sp, #(8*5)]
        dasm_put(Dst, 803);
    case 5:
        //| ldr x4, [sp, #(8*4)]
        dasm_put(Dst, 805);
    case 4:
        //| ldr x3, [sp, #(8*3)]
        dasm_put(Dst, 807);
    case 3:
        //| ldr x2, [sp, #(8*2)]
        dasm_put(Dst, 809);
    case 2:
        //| ldr x1, [sp, #(8*1)]
        dasm_put(Dst, 811);
    case 1:
        //| ldr x0, [sp]
        dasm_put(Dst, 813);
    case 0:
        break;
    }

    //| add sp, sp, #(REGISTER_STACK_SPACE(ct))
    dasm_put(Dst, 815, (REGISTER_STACK_SPACE(ct)));

    //| bl extern FUNCTION
	//|
    //| add sp, sp, TOP, lsl #4 // Free up the stack space reserved for FUNCTION call
    //| sub sp, sp, #48 // 32 to be able to call local functions, 16 so we can store some local variables
    dasm_put(Dst, 818);

    lua_rawgeti(L, ct_usr, 0); /* i = 0 is the return type */
    mbr_ct = (const struct ctype*) lua_touserdata(L, -1);

    if (mbr_ct->pointers || mbr_ct->is_reference || mbr_ct->type == INTPTR_TYPE) {
        lua_getuservalue(L, -1);
        num_upvals = lua_gettop(L) - orig_top;
        //| str x0, [sp, #32] // save the pointer
        //| get_errno
        //| mov32 w9, lua_upvalueindex(num_upvals)
        //| sxtw x9, w9
        //| call_rwp extern push_cdata, L_ARG, w9, mbr_ct
        //| ldr x9, [sp, #32]
        //| str x9, [x0] // *(void**) cdata = val
        //| lua_return_arg
        dasm_put(Dst, 823, (ZERO_TO_FIFTEEN_OF_64(perr)), (SIXTEEN_TO_THIRTYONE_OF_64(perr)), (THIRTYTWO_TO_FORTYSEVEN_OF_64(perr)), (FORTYEIGHT_TO_SIXTYTHREE_OF_64(perr)), (ZERO_TO_FIFTEEN_OF_64(lua_upvalueindex(num_upvals))), (SIXTEEN_TO_THIRTYONE_OF_64(lua_upvalueindex(num_upvals))), (ZERO_TO_FIFTEEN_OF_64(mbr_ct)), (SIXTEEN_TO_THIRTYONE_OF_64(mbr_ct)), (THIRTYTWO_TO_FORTYSEVEN_OF_64(mbr_ct)), (FORTYEIGHT_TO_SIXTYTHREE_OF_64(mbr_ct)));
    } else {
        switch (mbr_ct->type) {
        case FUNCTION_PTR_TYPE:
            lua_getuservalue(L, -1);
            num_upvals = lua_gettop(L) - orig_top;
			//| str x0, [sp, #32] // save the function pointer
            //| get_errno
            //| mov32 w9, lua_upvalueindex(num_upvals)
            //| sxtw x9, w9
            //| call_rwp extern push_cdata, L_ARG, w9, mbr_ct
            //| ldr x9, [sp, #32]
            //| str x9, [x0] // *(void**) cdata = val
            //| lua_return_arg
            dasm_put(Dst, 865, (ZERO_TO_FIFTEEN_OF_64(perr)), (SIXTEEN_TO_THIRTYONE_OF_64(perr)), (THIRTYTWO_TO_FORTYSEVEN_OF_64(perr)), (FORTYEIGHT_TO_SIXTYTHREE_OF_64(perr)), (ZERO_TO_FIFTEEN_OF_64(lua_upvalueindex(num_upvals))), (SIXTEEN_TO_THIRTYONE_OF_64(lua_upvalueindex(num_upvals))), (ZERO_TO_FIFTEEN_OF_64(mbr_ct)), (SIXTEEN_TO_THIRTYONE_OF_64(mbr_ct)), (THIRTYTWO_TO_FORTYSEVEN_OF_64(mbr_ct)), (FORTYEIGHT_TO_SIXTYTHREE_OF_64(mbr_ct)));
            break;

        case INT64_TYPE:
            lua_pop(L, 1);
            if (mbr_ct->is_unsigned) {
                //| lua_return_ulong
                dasm_put(Dst, 907, (ZERO_TO_FIFTEEN_OF_64(perr)), (SIXTEEN_TO_THIRTYONE_OF_64(perr)), (THIRTYTWO_TO_FORTYSEVEN_OF_64(perr)), (FORTYEIGHT_TO_SIXTYTHREE_OF_64(perr)));
            } else {
                //| lua_return_long
                dasm_put(Dst, 935, (ZERO_TO_FIFTEEN_OF_64(perr)), (SIXTEEN_TO_THIRTYONE_OF_64(perr)), (THIRTYTWO_TO_FORTYSEVEN_OF_64(perr)), (FORTYEIGHT_TO_SIXTYTHREE_OF_64(perr)));
            }
            break;

        case COMPLEX_FLOAT_TYPE:
            lua_getuservalue(L, -1);
            num_upvals = lua_gettop(L) - orig_top;
            //| // complex floats are returned as two floats packed into s0 and s1
            //| str s0, [sp, #40]
            //| str s1, [sp, #44]
            //|
            //| get_errno
            //| mov32 w9, lua_upvalueindex(num_upvals)
            //| sxtw x9, w9
			//| call_rwp extern push_cdata, L_ARG, w9, mbr_ct
            //|
            //| // ((complex_float*) cdata) = val
            //| ldr s0, [sp, #40]
            //| ldr s1, [sp, #44]
            //| str s0, [x0]
            //| str s1, [x0, #4]
            //|
            //| lua_return_arg
            dasm_put(Dst, 963, (ZERO_TO_FIFTEEN_OF_64(perr)), (SIXTEEN_TO_THIRTYONE_OF_64(perr)), (THIRTYTWO_TO_FORTYSEVEN_OF_64(perr)), (FORTYEIGHT_TO_SIXTYTHREE_OF_64(perr)), (ZERO_TO_FIFTEEN_OF_64(lua_upvalueindex(num_upvals))), (SIXTEEN_TO_THIRTYONE_OF_64(lua_upvalueindex(num_upvals))), (ZERO_TO_FIFTEEN_OF_64(mbr_ct)), (SIXTEEN_TO_THIRTYONE_OF_64(mbr_ct)), (THIRTYTWO_TO_FORTYSEVEN_OF_64(mbr_ct)), (FORTYEIGHT_TO_SIXTYTHREE_OF_64(mbr_ct)));
            break;

        case COMPLEX_DOUBLE_TYPE:
            lua_getuservalue(L, -1);
            num_upvals = lua_gettop(L) - orig_top;
            //| // complex doubles are returned as d0 and d1
            //| str d0, [sp, #32]
            //| str d1, [sp, #40]
            //|
            //| get_errno
            //| mov32 w9, lua_upvalueindex(num_upvals)
            //| sxtw x9, w9
			//| call_rwp extern push_cdata, L_ARG, w9, mbr_ct
            //|
            //| // ((complex_float*) cdata) = val
            //| ldr d0, [sp, #32]
            //| ldr d1, [sp, #40]
            //| str d0, [x0]
            //| str d1, [x0, #8]
            //|
            //| lua_return_arg
            dasm_put(Dst, 1008, (ZERO_TO_FIFTEEN_OF_64(perr)), (SIXTEEN_TO_THIRTYONE_OF_64(perr)), (THIRTYTWO_TO_FORTYSEVEN_OF_64(perr)), (FORTYEIGHT_TO_SIXTYTHREE_OF_64(perr)), (ZERO_TO_FIFTEEN_OF_64(lua_upvalueindex(num_upvals))), (SIXTEEN_TO_THIRTYONE_OF_64(lua_upvalueindex(num_upvals))), (ZERO_TO_FIFTEEN_OF_64(mbr_ct)), (SIXTEEN_TO_THIRTYONE_OF_64(mbr_ct)), (THIRTYTWO_TO_FORTYSEVEN_OF_64(mbr_ct)), (FORTYEIGHT_TO_SIXTYTHREE_OF_64(mbr_ct)));
            break;

        case VOID_TYPE:
            lua_pop(L, 1);
            //| lua_return_void
            dasm_put(Dst, 1053, (ZERO_TO_FIFTEEN_OF_64(perr)), (SIXTEEN_TO_THIRTYONE_OF_64(perr)), (THIRTYTWO_TO_FORTYSEVEN_OF_64(perr)), (FORTYEIGHT_TO_SIXTYTHREE_OF_64(perr)));
            break;

        case BOOL_TYPE:
            lua_pop(L, 1);
            //| lua_return_bool
            dasm_put(Dst, 1075, (ZERO_TO_FIFTEEN_OF_64(perr)), (SIXTEEN_TO_THIRTYONE_OF_64(perr)), (THIRTYTWO_TO_FORTYSEVEN_OF_64(perr)), (FORTYEIGHT_TO_SIXTYTHREE_OF_64(perr)));
            break;

        case INT8_TYPE:
            lua_pop(L, 1);
            if (mbr_ct->is_unsigned) {
                //| // movzx eax, al
                //| ubfm x0, x0, #0, #7
                dasm_put(Dst, 1104);
            } else {
                //| //movsx eax, al
                //| sbfm x0, x0, #0, #7
                dasm_put(Dst, 1106);
            }
            //| lua_return_int
            dasm_put(Dst, 1108, (ZERO_TO_FIFTEEN_OF_64(perr)), (SIXTEEN_TO_THIRTYONE_OF_64(perr)), (THIRTYTWO_TO_FORTYSEVEN_OF_64(perr)), (FORTYEIGHT_TO_SIXTYTHREE_OF_64(perr)));
            break;

        case INT16_TYPE:
            lua_pop(L, 1);
            if (mbr_ct->is_unsigned) {
                //| //movzx eax, ax
                //| ubfm x0, x0, #0, #15
                dasm_put(Dst, 1136);
            } else {
                //| //movsx eax, ax
                //| sbfm x0, x0, #0, #15
                dasm_put(Dst, 1138);
            }
            //| lua_return_int
            dasm_put(Dst, 1140, (ZERO_TO_FIFTEEN_OF_64(perr)), (SIXTEEN_TO_THIRTYONE_OF_64(perr)), (THIRTYTWO_TO_FORTYSEVEN_OF_64(perr)), (FORTYEIGHT_TO_SIXTYTHREE_OF_64(perr)));
            break;

        case INT32_TYPE:
        case ENUM_TYPE:
            lua_pop(L, 1);
            if (mbr_ct->is_unsigned) {
                //| lua_return_uint
                dasm_put(Dst, 1168, (ZERO_TO_FIFTEEN_OF_64(perr)), (SIXTEEN_TO_THIRTYONE_OF_64(perr)), (THIRTYTWO_TO_FORTYSEVEN_OF_64(perr)), (FORTYEIGHT_TO_SIXTYTHREE_OF_64(perr)));
            } else {
                //| lua_return_int
                dasm_put(Dst, 1196, (ZERO_TO_FIFTEEN_OF_64(perr)), (SIXTEEN_TO_THIRTYONE_OF_64(perr)), (THIRTYTWO_TO_FORTYSEVEN_OF_64(perr)), (FORTYEIGHT_TO_SIXTYTHREE_OF_64(perr)));
            }
            break;

        case FLOAT_TYPE:
            lua_pop(L, 1);
            //| fcvt d0, s0
            //| lua_return_double
            dasm_put(Dst, 1224, (ZERO_TO_FIFTEEN_OF_64(perr)), (SIXTEEN_TO_THIRTYONE_OF_64(perr)), (THIRTYTWO_TO_FORTYSEVEN_OF_64(perr)), (FORTYEIGHT_TO_SIXTYTHREE_OF_64(perr)));
            break;

        case DOUBLE_TYPE:
            lua_pop(L, 1);
            //| lua_return_double
            dasm_put(Dst, 1252, (ZERO_TO_FIFTEEN_OF_64(perr)), (SIXTEEN_TO_THIRTYONE_OF_64(perr)), (THIRTYTWO_TO_FORTYSEVEN_OF_64(perr)), (FORTYEIGHT_TO_SIXTYTHREE_OF_64(perr)));
            break;

        default:
            luaL_error(L, "NYI: call return type");
        }
    }

    {
        cfunction f = compile(Dst, L, func, LUA_NOREF);
        /* add a callback as an upval so that the jitted code gets cleaned up when
         * the function gets gc'd */
        push_callback(L, f, func);
        num_upvals = lua_gettop(L) - orig_top;
        lua_pushcclosure(L, (lua_CFunction) f, num_upvals);
    }
}

