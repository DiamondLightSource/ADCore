#!/usr/bin/env python

import os

with open(os.path.join("configure", "CONFIG_SITE.local"), "w") as F:
    F.write(
        """
TIRPC=YES
"""
    )

print("Wrote configure/CONFIG_SITE.local")
