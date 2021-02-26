# Region Data
sensor_msgs/Image[] images
sensor_msgs/PointCloud2[] clouds
geometry_msgs/TransformStamped[] transforms # transforms the pointclouds into the toolpaths frame id

# Toolpaths to crop
crs_msgs/ToolProcessPath[] toolpaths
