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
// SV_POSITION              0   xyzw        0      POS   float       
// POSITION                 0   xyzw        1     NONE   float      w
// VIEWPOS                  0   xyzw        2     NONE   float       
// VIEWVEL                  0   xyzw        3     NONE   float      w
// LIGHTDIR                 0   xyzw        4     NONE   float       
// COLOR                    0   xyzw        5     NONE   float       
// UV                       0   xyzw        6     NONE   float   xy  
//
//
// Output signature:
//
// Name                 Index   Mask Register SysValue  Format   Used
// -------------------- ----- ------ -------- -------- ------- ------
// SV_TARGET                0   xyzw        0   TARGET   float   xyzw
//
ps_5_0
dcl_globalFlags refactoringAllowed
dcl_input_ps linear v1.w
dcl_input_ps linear v3.w
dcl_input_ps linear v6.xy
dcl_output o0.xyzw
dcl_temps 1
mad r0.xy, v6.xyxx, l(2.000000, 2.000000, 0.000000, 0.000000), l(-1.000000, -1.000000, 0.000000, 0.000000)
dp2 r0.x, r0.xyxx, r0.xyxx
lt r0.y, l(1.000000), r0.x
discard_nz r0.y
mul r0.y, v1.w, l(0.125000)
min r0.y, r0.y, l(1.000000)
add r0.x, -r0.x, l(1.000000)
mul r0.y, r0.y, v3.w
mul r0.x, r0.x, r0.x
mul o0.xyzw, r0.xxxx, r0.yyyy
ret 
// Approximately 11 instruction slots used
#endif

const BYTE g_diffusePS[] =
{
     68,  88,  66,  67, 142,  84, 
     94,  27,  80, 231, 240, 136, 
    237, 253, 148,  77,  42,  64, 
     90, 183,   1,   0,   0,   0, 
    232,   3,   0,   0,   5,   0, 
      0,   0,  52,   0,   0,   0, 
    172,   0,   0,   0, 156,   1, 
      0,   0, 208,   1,   0,   0, 
     76,   3,   0,   0,  82,  68, 
     69,  70, 112,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
     60,   0,   0,   0,   0,   5, 
    255, 255,   0,   1,   0,   0, 
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
     71,  78, 232,   0,   0,   0, 
      7,   0,   0,   0,   8,   0, 
      0,   0, 176,   0,   0,   0, 
      0,   0,   0,   0,   1,   0, 
      0,   0,   3,   0,   0,   0, 
      0,   0,   0,   0,  15,   0, 
      0,   0, 188,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   3,   0,   0,   0, 
      1,   0,   0,   0,  15,   8, 
      0,   0, 197,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   3,   0,   0,   0, 
      2,   0,   0,   0,  15,   0, 
      0,   0, 205,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   3,   0,   0,   0, 
      3,   0,   0,   0,  15,   8, 
      0,   0, 213,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   3,   0,   0,   0, 
      4,   0,   0,   0,  15,   0, 
      0,   0, 222,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   3,   0,   0,   0, 
      5,   0,   0,   0,  15,   0, 
      0,   0, 228,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   3,   0,   0,   0, 
      6,   0,   0,   0,  15,   3, 
      0,   0,  83,  86,  95,  80, 
     79,  83,  73,  84,  73,  79, 
     78,   0,  80,  79,  83,  73, 
     84,  73,  79,  78,   0,  86, 
     73,  69,  87,  80,  79,  83, 
      0,  86,  73,  69,  87,  86, 
     69,  76,   0,  76,  73,  71, 
     72,  84,  68,  73,  82,   0, 
     67,  79,  76,  79,  82,   0, 
     85,  86,   0, 171,  79,  83, 
     71,  78,  44,   0,   0,   0, 
      1,   0,   0,   0,   8,   0, 
      0,   0,  32,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   3,   0,   0,   0, 
      0,   0,   0,   0,  15,   0, 
      0,   0,  83,  86,  95,  84, 
     65,  82,  71,  69,  84,   0, 
    171, 171,  83,  72,  69,  88, 
    116,   1,   0,   0,  80,   0, 
      0,   0,  93,   0,   0,   0, 
    106,   8,   0,   1,  98,  16, 
      0,   3, 130,  16,  16,   0, 
      1,   0,   0,   0,  98,  16, 
      0,   3, 130,  16,  16,   0, 
      3,   0,   0,   0,  98,  16, 
      0,   3,  50,  16,  16,   0, 
      6,   0,   0,   0, 101,   0, 
      0,   3, 242,  32,  16,   0, 
      0,   0,   0,   0, 104,   0, 
      0,   2,   1,   0,   0,   0, 
     50,   0,   0,  15,  50,   0, 
     16,   0,   0,   0,   0,   0, 
     70,  16,  16,   0,   6,   0, 
      0,   0,   2,  64,   0,   0, 
      0,   0,   0,  64,   0,   0, 
      0,  64,   0,   0,   0,   0, 
      0,   0,   0,   0,   2,  64, 
      0,   0,   0,   0, 128, 191, 
      0,   0, 128, 191,   0,   0, 
      0,   0,   0,   0,   0,   0, 
     15,   0,   0,   7,  18,   0, 
     16,   0,   0,   0,   0,   0, 
     70,   0,  16,   0,   0,   0, 
      0,   0,  70,   0,  16,   0, 
      0,   0,   0,   0,  49,   0, 
      0,   7,  34,   0,  16,   0, 
      0,   0,   0,   0,   1,  64, 
      0,   0,   0,   0, 128,  63, 
     10,   0,  16,   0,   0,   0, 
      0,   0,  13,   0,   4,   3, 
     26,   0,  16,   0,   0,   0, 
      0,   0,  56,   0,   0,   7, 
     34,   0,  16,   0,   0,   0, 
      0,   0,  58,  16,  16,   0, 
      1,   0,   0,   0,   1,  64, 
      0,   0,   0,   0,   0,  62, 
     51,   0,   0,   7,  34,   0, 
     16,   0,   0,   0,   0,   0, 
     26,   0,  16,   0,   0,   0, 
      0,   0,   1,  64,   0,   0, 
      0,   0, 128,  63,   0,   0, 
      0,   8,  18,   0,  16,   0, 
      0,   0,   0,   0,  10,   0, 
     16, 128,  65,   0,   0,   0, 
      0,   0,   0,   0,   1,  64, 
      0,   0,   0,   0, 128,  63, 
     56,   0,   0,   7,  34,   0, 
     16,   0,   0,   0,   0,   0, 
     26,   0,  16,   0,   0,   0, 
      0,   0,  58,  16,  16,   0, 
      3,   0,   0,   0,  56,   0, 
      0,   7,  18,   0,  16,   0, 
      0,   0,   0,   0,  10,   0, 
     16,   0,   0,   0,   0,   0, 
     10,   0,  16,   0,   0,   0, 
      0,   0,  56,   0,   0,   7, 
    242,  32,  16,   0,   0,   0, 
      0,   0,   6,   0,  16,   0, 
      0,   0,   0,   0,  86,   5, 
     16,   0,   0,   0,   0,   0, 
     62,   0,   0,   1,  83,  84, 
     65,  84, 148,   0,   0,   0, 
     11,   0,   0,   0,   1,   0, 
      0,   0,   0,   0,   0,   0, 
      4,   0,   0,   0,   9,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   1,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0
};
