#ifndef BANANAS_ARUCO_MAVLINK_H_
#define BANANAS_ARUCO_MAVLINK_H_

#include <mavsdk/plugins/mocap/mocap.h>

#include <bananas_aruco/affine_rotation.h>
#include <bananas_aruco/world.h>

/// Functions helping with MAVLink integration.
namespace bananas::mavlink {

mavsdk::Mocap::VisionPositionEstimate
drone_position_estimate(const affine_rotation::AffineRotation &camera_to_drone,
                        const world::UncertainPose &camera_to_world);

} // namespace bananas::mavlink

#endif // BANANAS_ARUCO_MAVLINK_H_
