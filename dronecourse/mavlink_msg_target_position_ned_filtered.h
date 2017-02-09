// MESSAGE TARGET_POSITION_NED_FILTERED PACKING

#define MAVLINK_MSG_ID_TARGET_POSITION_NED_FILTERED 151

MAVPACKED(
typedef struct __mavlink_target_position_ned_filtered_t {
 float x; /*< X Position in NED frame in meters*/
 float y; /*< Y Position in NED frame in meters*/
 float z; /*< Z Position in NED frame in meters*/
 float vx; /*< X velocity in NED frame in meter / s*/
 float vy; /*< Y velocity in NED frame in meter / s*/
 float vz; /*< Z velocity in NED frame in meter / s*/
 uint8_t target_num; /*< ID of the target object.*/
}) mavlink_target_position_ned_filtered_t;

#define MAVLINK_MSG_ID_TARGET_POSITION_NED_FILTERED_LEN 25
#define MAVLINK_MSG_ID_TARGET_POSITION_NED_FILTERED_MIN_LEN 25
#define MAVLINK_MSG_ID_151_LEN 25
#define MAVLINK_MSG_ID_151_MIN_LEN 25

#define MAVLINK_MSG_ID_TARGET_POSITION_NED_FILTERED_CRC 38
#define MAVLINK_MSG_ID_151_CRC 38



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_TARGET_POSITION_NED_FILTERED { \
	151, \
	"TARGET_POSITION_NED_FILTERED", \
	7, \
	{  { "x", NULL, MAVLINK_TYPE_FLOAT, 0, 0, offsetof(mavlink_target_position_ned_filtered_t, x) }, \
         { "y", NULL, MAVLINK_TYPE_FLOAT, 0, 4, offsetof(mavlink_target_position_ned_filtered_t, y) }, \
         { "z", NULL, MAVLINK_TYPE_FLOAT, 0, 8, offsetof(mavlink_target_position_ned_filtered_t, z) }, \
         { "vx", NULL, MAVLINK_TYPE_FLOAT, 0, 12, offsetof(mavlink_target_position_ned_filtered_t, vx) }, \
         { "vy", NULL, MAVLINK_TYPE_FLOAT, 0, 16, offsetof(mavlink_target_position_ned_filtered_t, vy) }, \
         { "vz", NULL, MAVLINK_TYPE_FLOAT, 0, 20, offsetof(mavlink_target_position_ned_filtered_t, vz) }, \
         { "target_num", NULL, MAVLINK_TYPE_UINT8_T, 0, 24, offsetof(mavlink_target_position_ned_filtered_t, target_num) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_TARGET_POSITION_NED_FILTERED { \
	"TARGET_POSITION_NED_FILTERED", \
	7, \
	{  { "x", NULL, MAVLINK_TYPE_FLOAT, 0, 0, offsetof(mavlink_target_position_ned_filtered_t, x) }, \
         { "y", NULL, MAVLINK_TYPE_FLOAT, 0, 4, offsetof(mavlink_target_position_ned_filtered_t, y) }, \
         { "z", NULL, MAVLINK_TYPE_FLOAT, 0, 8, offsetof(mavlink_target_position_ned_filtered_t, z) }, \
         { "vx", NULL, MAVLINK_TYPE_FLOAT, 0, 12, offsetof(mavlink_target_position_ned_filtered_t, vx) }, \
         { "vy", NULL, MAVLINK_TYPE_FLOAT, 0, 16, offsetof(mavlink_target_position_ned_filtered_t, vy) }, \
         { "vz", NULL, MAVLINK_TYPE_FLOAT, 0, 20, offsetof(mavlink_target_position_ned_filtered_t, vz) }, \
         { "target_num", NULL, MAVLINK_TYPE_UINT8_T, 0, 24, offsetof(mavlink_target_position_ned_filtered_t, target_num) }, \
         } \
}
#endif

/**
 * @brief Pack a target_position_ned_filtered message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param x X Position in NED frame in meters
 * @param y Y Position in NED frame in meters
 * @param z Z Position in NED frame in meters
 * @param vx X velocity in NED frame in meter / s
 * @param vy Y velocity in NED frame in meter / s
 * @param vz Z velocity in NED frame in meter / s
 * @param target_num ID of the target object.
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_target_position_ned_filtered_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
						       float x, float y, float z, float vx, float vy, float vz, uint8_t target_num)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[MAVLINK_MSG_ID_TARGET_POSITION_NED_FILTERED_LEN];
	_mav_put_float(buf, 0, x);
	_mav_put_float(buf, 4, y);
	_mav_put_float(buf, 8, z);
	_mav_put_float(buf, 12, vx);
	_mav_put_float(buf, 16, vy);
	_mav_put_float(buf, 20, vz);
	_mav_put_uint8_t(buf, 24, target_num);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_TARGET_POSITION_NED_FILTERED_LEN);
#else
	mavlink_target_position_ned_filtered_t packet;
	packet.x = x;
	packet.y = y;
	packet.z = z;
	packet.vx = vx;
	packet.vy = vy;
	packet.vz = vz;
	packet.target_num = target_num;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_TARGET_POSITION_NED_FILTERED_LEN);
#endif

	msg->msgid = MAVLINK_MSG_ID_TARGET_POSITION_NED_FILTERED;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_TARGET_POSITION_NED_FILTERED_MIN_LEN, MAVLINK_MSG_ID_TARGET_POSITION_NED_FILTERED_LEN, MAVLINK_MSG_ID_TARGET_POSITION_NED_FILTERED_CRC);
}

/**
 * @brief Pack a target_position_ned_filtered message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param x X Position in NED frame in meters
 * @param y Y Position in NED frame in meters
 * @param z Z Position in NED frame in meters
 * @param vx X velocity in NED frame in meter / s
 * @param vy Y velocity in NED frame in meter / s
 * @param vz Z velocity in NED frame in meter / s
 * @param target_num ID of the target object.
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_target_position_ned_filtered_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
							   mavlink_message_t* msg,
						           float x,float y,float z,float vx,float vy,float vz,uint8_t target_num)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[MAVLINK_MSG_ID_TARGET_POSITION_NED_FILTERED_LEN];
	_mav_put_float(buf, 0, x);
	_mav_put_float(buf, 4, y);
	_mav_put_float(buf, 8, z);
	_mav_put_float(buf, 12, vx);
	_mav_put_float(buf, 16, vy);
	_mav_put_float(buf, 20, vz);
	_mav_put_uint8_t(buf, 24, target_num);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_TARGET_POSITION_NED_FILTERED_LEN);
#else
	mavlink_target_position_ned_filtered_t packet;
	packet.x = x;
	packet.y = y;
	packet.z = z;
	packet.vx = vx;
	packet.vy = vy;
	packet.vz = vz;
	packet.target_num = target_num;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_TARGET_POSITION_NED_FILTERED_LEN);
#endif

	msg->msgid = MAVLINK_MSG_ID_TARGET_POSITION_NED_FILTERED;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_TARGET_POSITION_NED_FILTERED_MIN_LEN, MAVLINK_MSG_ID_TARGET_POSITION_NED_FILTERED_LEN, MAVLINK_MSG_ID_TARGET_POSITION_NED_FILTERED_CRC);
}

/**
 * @brief Encode a target_position_ned_filtered struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param target_position_ned_filtered C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_target_position_ned_filtered_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_target_position_ned_filtered_t* target_position_ned_filtered)
{
	return mavlink_msg_target_position_ned_filtered_pack(system_id, component_id, msg, target_position_ned_filtered->x, target_position_ned_filtered->y, target_position_ned_filtered->z, target_position_ned_filtered->vx, target_position_ned_filtered->vy, target_position_ned_filtered->vz, target_position_ned_filtered->target_num);
}

/**
 * @brief Encode a target_position_ned_filtered struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param target_position_ned_filtered C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_target_position_ned_filtered_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_target_position_ned_filtered_t* target_position_ned_filtered)
{
	return mavlink_msg_target_position_ned_filtered_pack_chan(system_id, component_id, chan, msg, target_position_ned_filtered->x, target_position_ned_filtered->y, target_position_ned_filtered->z, target_position_ned_filtered->vx, target_position_ned_filtered->vy, target_position_ned_filtered->vz, target_position_ned_filtered->target_num);
}

/**
 * @brief Send a target_position_ned_filtered message
 * @param chan MAVLink channel to send the message
 *
 * @param x X Position in NED frame in meters
 * @param y Y Position in NED frame in meters
 * @param z Z Position in NED frame in meters
 * @param vx X velocity in NED frame in meter / s
 * @param vy Y velocity in NED frame in meter / s
 * @param vz Z velocity in NED frame in meter / s
 * @param target_num ID of the target object.
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_target_position_ned_filtered_send(mavlink_channel_t chan, float x, float y, float z, float vx, float vy, float vz, uint8_t target_num)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[MAVLINK_MSG_ID_TARGET_POSITION_NED_FILTERED_LEN];
	_mav_put_float(buf, 0, x);
	_mav_put_float(buf, 4, y);
	_mav_put_float(buf, 8, z);
	_mav_put_float(buf, 12, vx);
	_mav_put_float(buf, 16, vy);
	_mav_put_float(buf, 20, vz);
	_mav_put_uint8_t(buf, 24, target_num);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_TARGET_POSITION_NED_FILTERED, buf, MAVLINK_MSG_ID_TARGET_POSITION_NED_FILTERED_MIN_LEN, MAVLINK_MSG_ID_TARGET_POSITION_NED_FILTERED_LEN, MAVLINK_MSG_ID_TARGET_POSITION_NED_FILTERED_CRC);
#else
	mavlink_target_position_ned_filtered_t packet;
	packet.x = x;
	packet.y = y;
	packet.z = z;
	packet.vx = vx;
	packet.vy = vy;
	packet.vz = vz;
	packet.target_num = target_num;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_TARGET_POSITION_NED_FILTERED, (const char *)&packet, MAVLINK_MSG_ID_TARGET_POSITION_NED_FILTERED_MIN_LEN, MAVLINK_MSG_ID_TARGET_POSITION_NED_FILTERED_LEN, MAVLINK_MSG_ID_TARGET_POSITION_NED_FILTERED_CRC);
#endif
}

/**
 * @brief Send a target_position_ned_filtered message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_target_position_ned_filtered_send_struct(mavlink_channel_t chan, const mavlink_target_position_ned_filtered_t* target_position_ned_filtered)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_target_position_ned_filtered_send(chan, target_position_ned_filtered->x, target_position_ned_filtered->y, target_position_ned_filtered->z, target_position_ned_filtered->vx, target_position_ned_filtered->vy, target_position_ned_filtered->vz, target_position_ned_filtered->target_num);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_TARGET_POSITION_NED_FILTERED, (const char *)target_position_ned_filtered, MAVLINK_MSG_ID_TARGET_POSITION_NED_FILTERED_MIN_LEN, MAVLINK_MSG_ID_TARGET_POSITION_NED_FILTERED_LEN, MAVLINK_MSG_ID_TARGET_POSITION_NED_FILTERED_CRC);
#endif
}

#if MAVLINK_MSG_ID_TARGET_POSITION_NED_FILTERED_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This varient of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_target_position_ned_filtered_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  float x, float y, float z, float vx, float vy, float vz, uint8_t target_num)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char *buf = (char *)msgbuf;
	_mav_put_float(buf, 0, x);
	_mav_put_float(buf, 4, y);
	_mav_put_float(buf, 8, z);
	_mav_put_float(buf, 12, vx);
	_mav_put_float(buf, 16, vy);
	_mav_put_float(buf, 20, vz);
	_mav_put_uint8_t(buf, 24, target_num);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_TARGET_POSITION_NED_FILTERED, buf, MAVLINK_MSG_ID_TARGET_POSITION_NED_FILTERED_MIN_LEN, MAVLINK_MSG_ID_TARGET_POSITION_NED_FILTERED_LEN, MAVLINK_MSG_ID_TARGET_POSITION_NED_FILTERED_CRC);
#else
	mavlink_target_position_ned_filtered_t *packet = (mavlink_target_position_ned_filtered_t *)msgbuf;
	packet->x = x;
	packet->y = y;
	packet->z = z;
	packet->vx = vx;
	packet->vy = vy;
	packet->vz = vz;
	packet->target_num = target_num;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_TARGET_POSITION_NED_FILTERED, (const char *)packet, MAVLINK_MSG_ID_TARGET_POSITION_NED_FILTERED_MIN_LEN, MAVLINK_MSG_ID_TARGET_POSITION_NED_FILTERED_LEN, MAVLINK_MSG_ID_TARGET_POSITION_NED_FILTERED_CRC);
#endif
}
#endif

#endif

// MESSAGE TARGET_POSITION_NED_FILTERED UNPACKING


/**
 * @brief Get field x from target_position_ned_filtered message
 *
 * @return X Position in NED frame in meters
 */
static inline float mavlink_msg_target_position_ned_filtered_get_x(const mavlink_message_t* msg)
{
	return _MAV_RETURN_float(msg,  0);
}

/**
 * @brief Get field y from target_position_ned_filtered message
 *
 * @return Y Position in NED frame in meters
 */
static inline float mavlink_msg_target_position_ned_filtered_get_y(const mavlink_message_t* msg)
{
	return _MAV_RETURN_float(msg,  4);
}

/**
 * @brief Get field z from target_position_ned_filtered message
 *
 * @return Z Position in NED frame in meters
 */
static inline float mavlink_msg_target_position_ned_filtered_get_z(const mavlink_message_t* msg)
{
	return _MAV_RETURN_float(msg,  8);
}

/**
 * @brief Get field vx from target_position_ned_filtered message
 *
 * @return X velocity in NED frame in meter / s
 */
static inline float mavlink_msg_target_position_ned_filtered_get_vx(const mavlink_message_t* msg)
{
	return _MAV_RETURN_float(msg,  12);
}

/**
 * @brief Get field vy from target_position_ned_filtered message
 *
 * @return Y velocity in NED frame in meter / s
 */
static inline float mavlink_msg_target_position_ned_filtered_get_vy(const mavlink_message_t* msg)
{
	return _MAV_RETURN_float(msg,  16);
}

/**
 * @brief Get field vz from target_position_ned_filtered message
 *
 * @return Z velocity in NED frame in meter / s
 */
static inline float mavlink_msg_target_position_ned_filtered_get_vz(const mavlink_message_t* msg)
{
	return _MAV_RETURN_float(msg,  20);
}

/**
 * @brief Get field target_num from target_position_ned_filtered message
 *
 * @return ID of the target object.
 */
static inline uint8_t mavlink_msg_target_position_ned_filtered_get_target_num(const mavlink_message_t* msg)
{
	return _MAV_RETURN_uint8_t(msg,  24);
}

/**
 * @brief Decode a target_position_ned_filtered message into a struct
 *
 * @param msg The message to decode
 * @param target_position_ned_filtered C-struct to decode the message contents into
 */
static inline void mavlink_msg_target_position_ned_filtered_decode(const mavlink_message_t* msg, mavlink_target_position_ned_filtered_t* target_position_ned_filtered)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	target_position_ned_filtered->x = mavlink_msg_target_position_ned_filtered_get_x(msg);
	target_position_ned_filtered->y = mavlink_msg_target_position_ned_filtered_get_y(msg);
	target_position_ned_filtered->z = mavlink_msg_target_position_ned_filtered_get_z(msg);
	target_position_ned_filtered->vx = mavlink_msg_target_position_ned_filtered_get_vx(msg);
	target_position_ned_filtered->vy = mavlink_msg_target_position_ned_filtered_get_vy(msg);
	target_position_ned_filtered->vz = mavlink_msg_target_position_ned_filtered_get_vz(msg);
	target_position_ned_filtered->target_num = mavlink_msg_target_position_ned_filtered_get_target_num(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_TARGET_POSITION_NED_FILTERED_LEN? msg->len : MAVLINK_MSG_ID_TARGET_POSITION_NED_FILTERED_LEN;
        memset(target_position_ned_filtered, 0, MAVLINK_MSG_ID_TARGET_POSITION_NED_FILTERED_LEN);
	memcpy(target_position_ned_filtered, _MAV_PAYLOAD(msg), len);
#endif
}
