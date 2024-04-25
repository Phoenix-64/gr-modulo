find_package(PkgConfig)

PKG_CHECK_MODULES(PC_GR_MODULO gnuradio-modulo)

FIND_PATH(
    GR_MODULO_INCLUDE_DIRS
    NAMES gnuradio/modulo/api.h
    HINTS $ENV{MODULO_DIR}/include
        ${PC_MODULO_INCLUDEDIR}
    PATHS ${CMAKE_INSTALL_PREFIX}/include
          /usr/local/include
          /usr/include
)

FIND_LIBRARY(
    GR_MODULO_LIBRARIES
    NAMES gnuradio-modulo
    HINTS $ENV{MODULO_DIR}/lib
        ${PC_MODULO_LIBDIR}
    PATHS ${CMAKE_INSTALL_PREFIX}/lib
          ${CMAKE_INSTALL_PREFIX}/lib64
          /usr/local/lib
          /usr/local/lib64
          /usr/lib
          /usr/lib64
          )

include("${CMAKE_CURRENT_LIST_DIR}/gnuradio-moduloTarget.cmake")

INCLUDE(FindPackageHandleStandardArgs)
FIND_PACKAGE_HANDLE_STANDARD_ARGS(GR_MODULO DEFAULT_MSG GR_MODULO_LIBRARIES GR_MODULO_INCLUDE_DIRS)
MARK_AS_ADVANCED(GR_MODULO_LIBRARIES GR_MODULO_INCLUDE_DIRS)
