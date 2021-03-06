#!/usr/bin/env python

#http://docs.python.org/2/distutils/setupscript.html#setup-script

from distutils.core import setup

setup(name='numpy_eigen',
      version='1.0',
      description='Python Distribution Utilities',
      author='Paul Furgale',
      author_email='Andrew.Melim@gatech.edu',
      url='http://www.python.org/sigs/distutils-sig/',
      packages=['numpy_eigen'],
      package_dir={'numpy_eigen': 'python/numpy_eigen'},
      package_data={'numpy_eigen' : ['libnumpy_eigen.so']},
     )
