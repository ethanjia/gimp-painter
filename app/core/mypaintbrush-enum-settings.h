// DO NOT EDIT - autogenerated by generate.py

#ifndef __MYPAINTBRUSH_ENUM_SETTINGS_H__
#define __MYPAINTBRUSH_ENUM_SETTINGS_H__

#define INPUT_PRESSURE 0
#define INPUT_SPEED1 1
#define INPUT_SPEED2 2
#define INPUT_RANDOM 3
#define INPUT_STROKE 4
#define INPUT_DIRECTION 5
#define INPUT_TILT_DECLINATION 6
#define INPUT_TILT_ASCENSION 7
#define INPUT_CUSTOM 8
#define INPUT_COUNT 9

#define BRUSH_MAPPING_BASE 0
#define BRUSH_OPAQUE 0
#define BRUSH_OPAQUE_MULTIPLY 1
#define BRUSH_OPAQUE_LINEARIZE 2
#define BRUSH_RADIUS_LOGARITHMIC 3
#define BRUSH_HARDNESS 4
#define BRUSH_ANTI_ALIASING 5
#define BRUSH_DABS_PER_BASIC_RADIUS 6
#define BRUSH_DABS_PER_ACTUAL_RADIUS 7
#define BRUSH_DABS_PER_SECOND 8
#define BRUSH_RADIUS_BY_RANDOM 9
#define BRUSH_SPEED1_SLOWNESS 10
#define BRUSH_SPEED2_SLOWNESS 11
#define BRUSH_SPEED1_GAMMA 12
#define BRUSH_SPEED2_GAMMA 13
#define BRUSH_OFFSET_BY_RANDOM 14
#define BRUSH_OFFSET_BY_SPEED 15
#define BRUSH_OFFSET_BY_SPEED_SLOWNESS 16
#define BRUSH_SLOW_TRACKING 17
#define BRUSH_SLOW_TRACKING_PER_DAB 18
#define BRUSH_TRACKING_NOISE 19
#define BRUSH_COLOR_H 20
#define BRUSH_COLOR_S 21
#define BRUSH_COLOR_V 22
#define BRUSH_RESTORE_COLOR 23
#define BRUSH_CHANGE_COLOR_H 24
#define BRUSH_CHANGE_COLOR_L 25
#define BRUSH_CHANGE_COLOR_HSL_S 26
#define BRUSH_CHANGE_COLOR_V 27
#define BRUSH_CHANGE_COLOR_HSV_S 28
#define BRUSH_SMUDGE 29
#define BRUSH_SMUDGE_LENGTH 30
#define BRUSH_SMUDGE_RADIUS_LOG 31
#define BRUSH_ERASER 32
#define BRUSH_STROKE_THRESHOLD 33
#define BRUSH_STROKE_DURATION_LOGARITHMIC 34
#define BRUSH_STROKE_HOLDTIME 35
#define BRUSH_CUSTOM_INPUT 36
#define BRUSH_CUSTOM_INPUT_SLOWNESS 37
#define BRUSH_ELLIPTICAL_DAB_RATIO 38
#define BRUSH_ELLIPTICAL_DAB_ANGLE 39
#define BRUSH_DIRECTION_FILTER 40
#define BRUSH_LOCK_ALPHA 41
#define BRUSH_STROKE_OPACITY 42
#define BRUSH_TEXTURE_GRAIN 43
#define BRUSH_TEXTURE_CONTRAST 44
#define BRUSH_MAPPING_END         45
#define BRUSH_MAPPING_COUNT       BRUSH_MAPPING_END

#define BRUSH_BOOL_BASE           BRUSH_MAPPING_END
#define BRUSH_NON_INCREMENTAL    (BRUSH_BOOL_BASE + 0)
#define BRUSH_USE_GIMP_BRUSHMARK (BRUSH_BOOL_BASE + 1)
#define BRUSH_USE_GIMP_TEXTURE   (BRUSH_BOOL_BASE + 2)
#define BRUSH_BOOL_END           (BRUSH_BOOL_BASE + 3)
#define BRUSH_BOOL_COUNT         (BRUSH_BOOL_END - BRUSH_BOOL_BASE)

#define BRUSH_TEXT_BASE           BRUSH_BOOL_END
#define BRUSH_BRUSHMARK_NAME     (BRUSH_TEXT_BASE + 0)
#define BRUSH_TEXT_END           (BRUSH_TEXT_BASE + 1)
#define BRUSH_TEXT_COUNT         (BRUSH_TEXT_END - BRUSH_TEXT_BASE)

#define BRUSH_SETTINGS_COUNT BRUSH_TEXT_END

#define STATE_X 0
#define STATE_Y 1
#define STATE_PRESSURE 2
#define STATE_DIST 3
#define STATE_ACTUAL_RADIUS 4
#define STATE_SMUDGE_RA 5
#define STATE_SMUDGE_GA 6
#define STATE_SMUDGE_BA 7
#define STATE_SMUDGE_A 8
#define STATE_LAST_GETCOLOR_R 9
#define STATE_LAST_GETCOLOR_G 10
#define STATE_LAST_GETCOLOR_B 11
#define STATE_LAST_GETCOLOR_A 12
#define STATE_LAST_GETCOLOR_RECENTNESS 13
#define STATE_ACTUAL_X 14
#define STATE_ACTUAL_Y 15
#define STATE_NORM_DX_SLOW 16
#define STATE_NORM_DY_SLOW 17
#define STATE_NORM_SPEED1_SLOW 18
#define STATE_NORM_SPEED2_SLOW 19
#define STATE_STROKE 20
#define STATE_STROKE_STARTED 21
#define STATE_CUSTOM_INPUT 22
#define STATE_RNG_SEED 23
#define STATE_ACTUAL_ELLIPTICAL_DAB_RATIO 24
#define STATE_ACTUAL_ELLIPTICAL_DAB_ANGLE 25
#define STATE_DIRECTION_DX 26
#define STATE_DIRECTION_DY 27
#define STATE_DECLINATION 28
#define STATE_ASCENSION 29
#define STATE_COUNT 30

#endif
