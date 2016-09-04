from distutils.core import setup, Extension
from Cython.Build import cythonize

ext_type = Extension("naive_bayes",
                    sources=["naive_bayes.pyx", "c_naive_bayes.c"],
                    libraries=["gsl", "gslcblas"],
                    library_dirs=["/usr/lib/x86_64-linux-gnu"])

setup(name="naive_bayes",
      ext_modules = cythonize([ext_type]))