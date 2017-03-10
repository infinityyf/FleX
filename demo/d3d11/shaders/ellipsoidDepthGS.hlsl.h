#if 0
//
// Generated by Microsoft (R) HLSL Shader Compiler 6.3.9600.16384
//
//
//
// Input signature:
//
// Name                 Index   Mask Register SysValue  Format   Used
// -------------------- ----- ------ -------- -------- ------- ------
// POSITION                 0   xyzw        0     NONE   float       
// TEXCOORD                 0   xyzw        1     NONE   float   xyzw
// TEXCOORD                 1   xyzw        2     NONE   float   xyzw
// TEXCOORD                 2   xyzw        3     NONE   float   xyzw
// TEXCOORD                 3   xyzw        4     NONE   float   xyzw
// TEXCOORD                 4   xyzw        5     NONE   float   xyzw
// TEXCOORD                 5   xyzw        6     NONE   float   xy w
//
//
// Output signature:
//
// Name                 Index   Mask Register SysValue  Format   Used
// -------------------- ----- ------ -------- -------- ------- ------
// SV_POSITION              0   xyzw        0      POS   float   xyzw
// TEXCOORD                 0   xyzw        1     NONE   float   xyzw
// TEXCOORD                 1   xyzw        2     NONE   float   xyzw
// TEXCOORD                 2   xyzw        3     NONE   float   xyzw
// TEXCOORD                 3   xyzw        4     NONE   float   xyzw
//
gs_5_0
dcl_globalFlags refactoringAllowed
dcl_input v[1][0].xyzw
dcl_input v[1][1].xyzw
dcl_input v[1][2].xyzw
dcl_input v[1][3].xyzw
dcl_input v[1][4].xyzw
dcl_input v[1][5].xyzw
dcl_input v[1][6].xyzw
dcl_temps 1
dcl_inputprimitive point 
dcl_stream m0
dcl_outputtopology trianglestrip 
dcl_output_siv o0.xyzw, position
dcl_output o1.xyzw
dcl_output o2.xyzw
dcl_output o3.xyzw
dcl_output o4.xyzw
dcl_maxout 4
lt r0.x, v[0][6].w, l(0.000000)
if_nz r0.x
  ret 
endif 
lt r0.x, v[0][6].x, l(-1.000000)
if_nz r0.x
  ret 
endif 
lt r0.x, l(1.000000), v[0][6].x
if_nz r0.x
  ret 
endif 
lt r0.x, v[0][6].y, l(-1.000000)
if_nz r0.x
  ret 
endif 
lt r0.x, l(1.000000), v[0][6].y
if_nz r0.x
  ret 
endif 
mov o0.xy, v[0][1].xwxx
mov o0.zw, l(0,0,0.500000,1.000000)
mov o1.xyzw, v[0][2].xyzw
mov o2.xyzw, v[0][3].xyzw
mov o3.xyzw, v[0][4].xyzw
mov o4.xyzw, v[0][5].xyzw
emit_stream m0
mov o0.xy, v[0][1].xzxx
mov o0.zw, l(0,0,0.500000,1.000000)
mov o1.xyzw, v[0][2].xyzw
mov o2.xyzw, v[0][3].xyzw
mov o3.xyzw, v[0][4].xyzw
mov o4.xyzw, v[0][5].xyzw
emit_stream m0
mov o0.xy, v[0][1].ywyy
mov o0.zw, l(0,0,0.500000,1.000000)
mov o1.xyzw, v[0][2].xyzw
mov o2.xyzw, v[0][3].xyzw
mov o3.xyzw, v[0][4].xyzw
mov o4.xyzw, v[0][5].xyzw
emit_stream m0
mov o0.xy, v[0][1].yzyy
mov o0.zw, l(0,0,0.500000,1.000000)
mov o1.xyzw, v[0][2].xyzw
mov o2.xyzw, v[0][3].xyzw
mov o3.xyzw, v[0][4].xyzw
mov o4.xyzw, v[0][5].xyzw
emit_stream m0
ret 
// Approximately 49 instruction slots used
#endif

const BYTE g_ellipsoidDepthGS[] =
{
     68,  88,  66,  67, 121, 233, 
    112, 246,  66, 190, 203, 227, 
    242, 237, 242, 197,  75, 158, 
    125, 123,   1,   0,   0,   0, 
     72,   7,   0,   0,   5,   0, 
      0,   0,  52,   0,   0,   0, 
    172,   0,   0,   0, 120,   1, 
      0,   0,  44,   2,   0,   0, 
    172,   6,   0,   0,  82,  68, 
     69,  70, 112,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
     60,   0,   0,   0,   0,   5, 
     83,  71,   0,   1,   0,   0, 
     60,   0,   0,   0,  82,  68, 
     49,  49,  60,   0,   0,   0, 
     24,   0,   0,   0,  32,   0, 
      0,   0,  40,   0,   0,   0, 
     36,   0,   0,   0,  12,   0, 
      0,   0,   0,   0,   0,   0, 
     77, 105,  99, 114, 111, 115, 
    111, 102, 116,  32,  40,  82, 
     41,  32,  72,  76,  83,  76, 
     32,  83, 104,  97, 100, 101, 
    114,  32,  67, 111, 109, 112, 
    105, 108, 101, 114,  32,  54, 
     46,  51,  46,  57,  54,  48, 
     48,  46,  49,  54,  51,  56, 
     52,   0, 171, 171,  73,  83, 
     71,  78, 196,   0,   0,   0, 
      7,   0,   0,   0,   8,   0, 
      0,   0, 176,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   3,   0,   0,   0, 
      0,   0,   0,   0,  15,   0, 
      0,   0, 185,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   3,   0,   0,   0, 
      1,   0,   0,   0,  15,  15, 
      0,   0, 185,   0,   0,   0, 
      1,   0,   0,   0,   0,   0, 
      0,   0,   3,   0,   0,   0, 
      2,   0,   0,   0,  15,  15, 
      0,   0, 185,   0,   0,   0, 
      2,   0,   0,   0,   0,   0, 
      0,   0,   3,   0,   0,   0, 
      3,   0,   0,   0,  15,  15, 
      0,   0, 185,   0,   0,   0, 
      3,   0,   0,   0,   0,   0, 
      0,   0,   3,   0,   0,   0, 
      4,   0,   0,   0,  15,  15, 
      0,   0, 185,   0,   0,   0, 
      4,   0,   0,   0,   0,   0, 
      0,   0,   3,   0,   0,   0, 
      5,   0,   0,   0,  15,  15, 
      0,   0, 185,   0,   0,   0, 
      5,   0,   0,   0,   0,   0, 
      0,   0,   3,   0,   0,   0, 
      6,   0,   0,   0,  15,  11, 
      0,   0,  80,  79,  83,  73, 
     84,  73,  79,  78,   0,  84, 
     69,  88,  67,  79,  79,  82, 
     68,   0, 171, 171,  79,  83, 
     71,  53, 172,   0,   0,   0, 
      5,   0,   0,   0,   8,   0, 
      0,   0,   0,   0,   0,   0, 
    148,   0,   0,   0,   0,   0, 
      0,   0,   1,   0,   0,   0, 
      3,   0,   0,   0,   0,   0, 
      0,   0,  15,   0,   0,   0, 
      0,   0,   0,   0, 160,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   3,   0, 
      0,   0,   1,   0,   0,   0, 
     15,   0,   0,   0,   0,   0, 
      0,   0, 160,   0,   0,   0, 
      1,   0,   0,   0,   0,   0, 
      0,   0,   3,   0,   0,   0, 
      2,   0,   0,   0,  15,   0, 
      0,   0,   0,   0,   0,   0, 
    160,   0,   0,   0,   2,   0, 
      0,   0,   0,   0,   0,   0, 
      3,   0,   0,   0,   3,   0, 
      0,   0,  15,   0,   0,   0, 
      0,   0,   0,   0, 160,   0, 
      0,   0,   3,   0,   0,   0, 
      0,   0,   0,   0,   3,   0, 
      0,   0,   4,   0,   0,   0, 
     15,   0,   0,   0,  83,  86, 
     95,  80,  79,  83,  73,  84, 
     73,  79,  78,   0,  84,  69, 
     88,  67,  79,  79,  82,  68, 
      0, 171, 171, 171,  83,  72, 
     69,  88, 120,   4,   0,   0, 
     80,   0,   2,   0,  30,   1, 
      0,   0, 106,   8,   0,   1, 
     95,   0,   0,   4, 242,  16, 
     32,   0,   1,   0,   0,   0, 
      0,   0,   0,   0,  95,   0, 
      0,   4, 242,  16,  32,   0, 
      1,   0,   0,   0,   1,   0, 
      0,   0,  95,   0,   0,   4, 
    242,  16,  32,   0,   1,   0, 
      0,   0,   2,   0,   0,   0, 
     95,   0,   0,   4, 242,  16, 
     32,   0,   1,   0,   0,   0, 
      3,   0,   0,   0,  95,   0, 
      0,   4, 242,  16,  32,   0, 
      1,   0,   0,   0,   4,   0, 
      0,   0,  95,   0,   0,   4, 
    242,  16,  32,   0,   1,   0, 
      0,   0,   5,   0,   0,   0, 
     95,   0,   0,   4, 242,  16, 
     32,   0,   1,   0,   0,   0, 
      6,   0,   0,   0, 104,   0, 
      0,   2,   1,   0,   0,   0, 
     93,   8,   0,   1, 143,   0, 
      0,   3,   0,   0,  17,   0, 
      0,   0,   0,   0,  92,  40, 
      0,   1, 103,   0,   0,   4, 
    242,  32,  16,   0,   0,   0, 
      0,   0,   1,   0,   0,   0, 
    101,   0,   0,   3, 242,  32, 
     16,   0,   1,   0,   0,   0, 
    101,   0,   0,   3, 242,  32, 
     16,   0,   2,   0,   0,   0, 
    101,   0,   0,   3, 242,  32, 
     16,   0,   3,   0,   0,   0, 
    101,   0,   0,   3, 242,  32, 
     16,   0,   4,   0,   0,   0, 
     94,   0,   0,   2,   4,   0, 
      0,   0,  49,   0,   0,   8, 
     18,   0,  16,   0,   0,   0, 
      0,   0,  58,  16,  32,   0, 
      0,   0,   0,   0,   6,   0, 
      0,   0,   1,  64,   0,   0, 
      0,   0,   0,   0,  31,   0, 
      4,   3,  10,   0,  16,   0, 
      0,   0,   0,   0,  62,   0, 
      0,   1,  21,   0,   0,   1, 
     49,   0,   0,   8,  18,   0, 
     16,   0,   0,   0,   0,   0, 
     10,  16,  32,   0,   0,   0, 
      0,   0,   6,   0,   0,   0, 
      1,  64,   0,   0,   0,   0, 
    128, 191,  31,   0,   4,   3, 
     10,   0,  16,   0,   0,   0, 
      0,   0,  62,   0,   0,   1, 
     21,   0,   0,   1,  49,   0, 
      0,   8,  18,   0,  16,   0, 
      0,   0,   0,   0,   1,  64, 
      0,   0,   0,   0, 128,  63, 
     10,  16,  32,   0,   0,   0, 
      0,   0,   6,   0,   0,   0, 
     31,   0,   4,   3,  10,   0, 
     16,   0,   0,   0,   0,   0, 
     62,   0,   0,   1,  21,   0, 
      0,   1,  49,   0,   0,   8, 
     18,   0,  16,   0,   0,   0, 
      0,   0,  26,  16,  32,   0, 
      0,   0,   0,   0,   6,   0, 
      0,   0,   1,  64,   0,   0, 
      0,   0, 128, 191,  31,   0, 
      4,   3,  10,   0,  16,   0, 
      0,   0,   0,   0,  62,   0, 
      0,   1,  21,   0,   0,   1, 
     49,   0,   0,   8,  18,   0, 
     16,   0,   0,   0,   0,   0, 
      1,  64,   0,   0,   0,   0, 
    128,  63,  26,  16,  32,   0, 
      0,   0,   0,   0,   6,   0, 
      0,   0,  31,   0,   4,   3, 
     10,   0,  16,   0,   0,   0, 
      0,   0,  62,   0,   0,   1, 
     21,   0,   0,   1,  54,   0, 
      0,   6,  50,  32,  16,   0, 
      0,   0,   0,   0, 198,  16, 
     32,   0,   0,   0,   0,   0, 
      1,   0,   0,   0,  54,   0, 
      0,   8, 194,  32,  16,   0, 
      0,   0,   0,   0,   2,  64, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,  63,   0,   0, 128,  63, 
     54,   0,   0,   6, 242,  32, 
     16,   0,   1,   0,   0,   0, 
     70,  30,  32,   0,   0,   0, 
      0,   0,   2,   0,   0,   0, 
     54,   0,   0,   6, 242,  32, 
     16,   0,   2,   0,   0,   0, 
     70,  30,  32,   0,   0,   0, 
      0,   0,   3,   0,   0,   0, 
     54,   0,   0,   6, 242,  32, 
     16,   0,   3,   0,   0,   0, 
     70,  30,  32,   0,   0,   0, 
      0,   0,   4,   0,   0,   0, 
     54,   0,   0,   6, 242,  32, 
     16,   0,   4,   0,   0,   0, 
     70,  30,  32,   0,   0,   0, 
      0,   0,   5,   0,   0,   0, 
    117,   0,   0,   3,   0,   0, 
     17,   0,   0,   0,   0,   0, 
     54,   0,   0,   6,  50,  32, 
     16,   0,   0,   0,   0,   0, 
    134,  16,  32,   0,   0,   0, 
      0,   0,   1,   0,   0,   0, 
     54,   0,   0,   8, 194,  32, 
     16,   0,   0,   0,   0,   0, 
      2,  64,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,  63,   0,   0, 
    128,  63,  54,   0,   0,   6, 
    242,  32,  16,   0,   1,   0, 
      0,   0,  70,  30,  32,   0, 
      0,   0,   0,   0,   2,   0, 
      0,   0,  54,   0,   0,   6, 
    242,  32,  16,   0,   2,   0, 
      0,   0,  70,  30,  32,   0, 
      0,   0,   0,   0,   3,   0, 
      0,   0,  54,   0,   0,   6, 
    242,  32,  16,   0,   3,   0, 
      0,   0,  70,  30,  32,   0, 
      0,   0,   0,   0,   4,   0, 
      0,   0,  54,   0,   0,   6, 
    242,  32,  16,   0,   4,   0, 
      0,   0,  70,  30,  32,   0, 
      0,   0,   0,   0,   5,   0, 
      0,   0, 117,   0,   0,   3, 
      0,   0,  17,   0,   0,   0, 
      0,   0,  54,   0,   0,   6, 
     50,  32,  16,   0,   0,   0, 
      0,   0, 214,  21,  32,   0, 
      0,   0,   0,   0,   1,   0, 
      0,   0,  54,   0,   0,   8, 
    194,  32,  16,   0,   0,   0, 
      0,   0,   2,  64,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,  63, 
      0,   0, 128,  63,  54,   0, 
      0,   6, 242,  32,  16,   0, 
      1,   0,   0,   0,  70,  30, 
     32,   0,   0,   0,   0,   0, 
      2,   0,   0,   0,  54,   0, 
      0,   6, 242,  32,  16,   0, 
      2,   0,   0,   0,  70,  30, 
     32,   0,   0,   0,   0,   0, 
      3,   0,   0,   0,  54,   0, 
      0,   6, 242,  32,  16,   0, 
      3,   0,   0,   0,  70,  30, 
     32,   0,   0,   0,   0,   0, 
      4,   0,   0,   0,  54,   0, 
      0,   6, 242,  32,  16,   0, 
      4,   0,   0,   0,  70,  30, 
     32,   0,   0,   0,   0,   0, 
      5,   0,   0,   0, 117,   0, 
      0,   3,   0,   0,  17,   0, 
      0,   0,   0,   0,  54,   0, 
      0,   6,  50,  32,  16,   0, 
      0,   0,   0,   0, 150,  21, 
     32,   0,   0,   0,   0,   0, 
      1,   0,   0,   0,  54,   0, 
      0,   8, 194,  32,  16,   0, 
      0,   0,   0,   0,   2,  64, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,  63,   0,   0, 128,  63, 
     54,   0,   0,   6, 242,  32, 
     16,   0,   1,   0,   0,   0, 
     70,  30,  32,   0,   0,   0, 
      0,   0,   2,   0,   0,   0, 
     54,   0,   0,   6, 242,  32, 
     16,   0,   2,   0,   0,   0, 
     70,  30,  32,   0,   0,   0, 
      0,   0,   3,   0,   0,   0, 
     54,   0,   0,   6, 242,  32, 
     16,   0,   3,   0,   0,   0, 
     70,  30,  32,   0,   0,   0, 
      0,   0,   4,   0,   0,   0, 
     54,   0,   0,   6, 242,  32, 
     16,   0,   4,   0,   0,   0, 
     70,  30,  32,   0,   0,   0, 
      0,   0,   5,   0,   0,   0, 
    117,   0,   0,   3,   0,   0, 
     17,   0,   0,   0,   0,   0, 
     62,   0,   0,   1,  83,  84, 
     65,  84, 148,   0,   0,   0, 
     49,   0,   0,   0,   1,   0, 
      0,   0,   0,   0,   0,   0, 
     12,   0,   0,   0,   5,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   6,   0, 
      0,   0,   5,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   4,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   1,   0,   0,   0, 
      5,   0,   0,   0,   4,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0
};