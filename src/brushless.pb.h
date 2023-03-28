/* Automatically generated nanopb header */
/* Generated by nanopb-0.4.7 */

#ifndef PB_BRUSHLESS_PB_H_INCLUDED
#define PB_BRUSHLESS_PB_H_INCLUDED
#include <pb.h>

#if PB_PROTO_HEADER_VERSION != 40
#error Regenerate this file with the current version of nanopb generator.
#endif

/* Enum definitions */
typedef enum _Commands {
    Commands_STOP = 0,
    Commands_RUN = 1,
    Commands_BREAK = 2
} Commands;

/* Struct definitions */
typedef struct _RobotToBrushless {
    Commands command; /* Brushless command */
    float speed; /* m.s-1 */
} RobotToBrushless;

typedef struct _BrushlessToRobot {
    uint32_t error_count; /* Number of SPI transmission errors */
    float measured_speed; /* m.s-1 */
} BrushlessToRobot;


#ifdef __cplusplus
extern "C" {
#endif

/* Helper constants for enums */
#define _Commands_MIN Commands_STOP
#define _Commands_MAX Commands_BREAK
#define _Commands_ARRAYSIZE ((Commands)(Commands_BREAK+1))

#define RobotToBrushless_command_ENUMTYPE Commands



/* Initializer values for message structs */
#define RobotToBrushless_init_default            {_Commands_MIN, 0}
#define BrushlessToRobot_init_default            {0, 0}
#define RobotToBrushless_init_zero               {_Commands_MIN, 0}
#define BrushlessToRobot_init_zero               {0, 0}

/* Field tags (for use in manual encoding/decoding) */
#define RobotToBrushless_command_tag             1
#define RobotToBrushless_speed_tag               2
#define BrushlessToRobot_error_count_tag         1
#define BrushlessToRobot_measured_speed_tag      2

/* Struct field encoding specification for nanopb */
#define RobotToBrushless_FIELDLIST(X, a) \
X(a, STATIC,   SINGULAR, UENUM,    command,           1) \
X(a, STATIC,   SINGULAR, FLOAT,    speed,             2)
#define RobotToBrushless_CALLBACK NULL
#define RobotToBrushless_DEFAULT NULL

#define BrushlessToRobot_FIELDLIST(X, a) \
X(a, STATIC,   SINGULAR, UINT32,   error_count,       1) \
X(a, STATIC,   SINGULAR, FLOAT,    measured_speed,    2)
#define BrushlessToRobot_CALLBACK NULL
#define BrushlessToRobot_DEFAULT NULL

extern const pb_msgdesc_t RobotToBrushless_msg;
extern const pb_msgdesc_t BrushlessToRobot_msg;

/* Defines for backwards compatibility with code written before nanopb-0.4.0 */
#define RobotToBrushless_fields &RobotToBrushless_msg
#define BrushlessToRobot_fields &BrushlessToRobot_msg

/* Maximum encoded size of messages (where known) */
#define BrushlessToRobot_size                    11
#define RobotToBrushless_size                    7

#ifdef __cplusplus
} /* extern "C" */
#endif

#endif
