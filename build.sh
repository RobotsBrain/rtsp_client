#! /bin/sh


BUILDDIR=cmake-build

if [ -d ${BUILDDIR} ]; then
    rm -rf ${BUILDDIR}
fi

mkdir ${BUILDDIR}

cd ${BUILDDIR}
cmake .. -DCMAKE_BUILD_TYPE=Debug
make
