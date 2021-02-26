uint8 COMMAND_HISTORY=0             # Get the current change history

uint8 LINK_LIST=1                   # Get the current list of links
uint8 JOINT_LIST=2                  # Get the current list of links

uint8 LINK_NAMES=4                  # Get the current list of links
uint8 JOINT_NAMES=8                 # Get the current list of links

uint8 ACTIVE_LINK_NAMES=16          # Get the current list of active links
uint8 ACTIVE_JOINT_NAMES=32         # Get the current list of active joints

uint8 LINK_TRANSFORMS=64            # Get the current list of link transforms
uint8 JOINT_TRANSFORMS=128          # Get the current list of joint transforms

uint8 ALLOWED_COLLISION_MATRIX=254  # Get the current list of joint transforms

uint8 flags # The flags indicating what information should be returned.
