#!/usr/bin/env nemesis
#
# ======================================================================
#
# Brad T. Aagaard, U.S. Geological Survey
# Charles A. Williams, GNS Science
# Matthew G. Knepley, University at Buffalo
#
# This code was developed as part of the Computational Infrastructure
# for Geodynamics (http://geodynamics.org).
#
# Copyright (c) 2010-2022 University of California, Davis
#
# See LICENSE.md for license information.
#
# ======================================================================

from pylith.testing.FullTestApp import TestDriver, FullTestCase

import unittest

class TestApp(TestDriver):
    """Driver application for full-scale tests.
    """

    def __init__(self):
        """Constructor.
        """
        TestDriver.__init__(self)
        return

    def _suite(self):
        """Create test suite.
        """
        suite = unittest.TestSuite()

        import TestAxialTractionMaxwell
        for test in TestAxialTractionMaxwell.test_cases():
            suite.addTest(unittest.makeSuite(test))

        import TestAxialStrainGenMaxwell
        for test in TestAxialStrainGenMaxwell.test_cases():
            suite.addTest(unittest.makeSuite(test))

        import TestAxialStrainRateGenMaxwell
        for test in TestAxialStrainRateGenMaxwell.test_cases():
            suite.addTest(unittest.makeSuite(test))

        return suite


# ----------------------------------------------------------------------
if __name__ == '__main__':
    FullTestCase.parse_args()
    TestApp().main()


# End of file
