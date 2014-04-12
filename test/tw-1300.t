#!/usr/bin/env python2.7
# -*- coding: utf-8 -*-
################################################################################
##
## Copyright 2006 - 2014, Paul Beckingham, Federico Hernandez.
##
## Permission is hereby granted, free of charge, to any person obtaining a copy
## of this software and associated documentation files (the "Software"), to deal
## in the Software without restriction, including without limitation the rights
## to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
## copies of the Software, and to permit persons to whom the Software is
## furnished to do so, subject to the following conditions:
##
## The above copyright notice and this permission notice shall be included
## in all copies or substantial portions of the Software.
##
## THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS
## OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
## FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL
## THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
## LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
## OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
## SOFTWARE.
##
## http://www.opensource.org/licenses/mit-license.php
##
################################################################################

import sys
import os
import signal
from glob import glob
# Ensure python finds the local simpletap and basetest modules
sys.path.append(os.path.dirname(os.path.abspath(__file__)))

from basetest import BaseTestCase


class BaseTestBug1300(BaseTestCase):
    @classmethod
    def prepare(cls):
        with open("bug.rc", 'w') as fh:
            fh.write("data.location=.\n"
                     "confirmation=no\n")

    def tearDown(self):
        """Needed after each test or setUp will cause duplicated data at start
        of the next test.
        """
        for file in glob("*.data"):
            os.remove(file)

    @classmethod
    def cleanup(cls):
        os.remove("bug.rc")


class TestBug1300(BaseTestBug1300):
    def test_dom_exit_status_good(self):
        """If the DOM recognizes a reference, it should return '0'
        """
        self.callTaskSuccess(["rc:bug.rc", "_get", "context.program"])

    def test_dom_exit_status_bad(self):
        """If the DOM does not recognize a reference, it should return '1'
        """
        self.callTaskError(["rc:bug.rc", "_get", "XYZ"])


if __name__ == "__main__":
    from simpletap import TAPTestRunner
    import unittest
    unittest.main(testRunner=TAPTestRunner())

# vim: ai sts=4 et sw=4
